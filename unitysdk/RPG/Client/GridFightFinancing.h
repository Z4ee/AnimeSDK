#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0x1A6A0110)
#define RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A687730)
#define RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A6A00C0)
#define RPG_CLIENT_GRIDFIGHTFINANCING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A00B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFinancing_TypeDefinitionIndex = 62112;

	class GridFightFinancing : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING__CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFINANCING_GET_COINNUM_OFFSET))(this);
		}
	};
}
