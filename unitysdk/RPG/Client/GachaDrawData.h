#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GachaTokenData; }

#define RPG_CLIENT_GACHADRAWDATA_GETGOLDCOSTNUM_OFFSET UNITYSDK_OFFSET(0x19398700)
#define RPG_CLIENT_GACHADRAWDATA_GETTOKENCOSTNUM_OFFSET UNITYSDK_OFFSET(0x19398760)
#define RPG_CLIENT_GACHADRAWDATA_HAVEDISCOUNT_OFFSET UNITYSDK_OFFSET(0x193987B0)
#define RPG_CLIENT_GACHADRAWDATA_SETTOKENPRICE_OFFSET UNITYSDK_OFFSET(0x193986A0)
#define RPG_CLIENT_GACHADRAWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19398570)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDrawData_TypeDefinitionIndex = 64357;

	class GachaDrawData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _DEFALUT_DRAW_TIME = 0x1; // 0x0
		// static const ::System::Single _DEFAULT_TOKEN_COST_PER_DRAW; // 0x0
		::RPG::Client::GachaTokenData* _GachaTokenData; // 0x10
		::System::Single TokenCostNumPerDraw; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Int32 DrawTime; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetTokenPrice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_SETTOKENPRICE_OFFSET))(this, a1);
		}

		::System::Int32 GetGoldCostNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_GETGOLDCOSTNUM_OFFSET))(this);
		}

		::System::Int32 GetTokenCostNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_GETTOKENCOSTNUM_OFFSET))(this);
		}

		::System::Boolean HaveDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_HAVEDISCOUNT_OFFSET))(this);
		}
	};
}
