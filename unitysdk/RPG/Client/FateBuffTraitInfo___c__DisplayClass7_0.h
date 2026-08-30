#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF342E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS7_0__SYNCTRAITBUFFUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xCF35DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass7_0_TypeDefinitionIndex = 64066;

	class FateBuffTraitInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitBuffId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncTraitBuffUpdate_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS7_0__SYNCTRAITBUFFUPDATE_B__0_OFFSET))(this, a1);
		}
	};
}
