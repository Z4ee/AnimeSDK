#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateBuffData; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9675000)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_1__SYNCBUFFUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x96777D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass3_1_TypeDefinitionIndex = 51920;

	class FateBuffTraitInfo___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::UInt32 protoRemoveBuffID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncBuffUpdate_b__1(::RPG::Client::FateBuffData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_1__SYNCBUFFUPDATE_B__1_OFFSET))(this, x);
		}
	};
}
