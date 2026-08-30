#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }

#define RPG_CLIENT_BASEGACHAGROUPDATA___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F10330)
#define RPG_CLIENT_BASEGACHAGROUPDATA___C__DISPLAYCLASS7_0__HASGACHAPOOL_B__0_OFFSET UNITYSDK_OFFSET(0x19F10640)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData___c__DisplayClass7_0_TypeDefinitionIndex = 64369;

	class BaseGachaGroupData___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 gachaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasGachaPool_b__0(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA___C__DISPLAYCLASS7_0__HASGACHAPOOL_B__0_OFFSET))(this, a1);
		}
	};
}
