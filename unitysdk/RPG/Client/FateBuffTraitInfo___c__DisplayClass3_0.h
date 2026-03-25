#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_275;
namespace RPG::Client { class FateBuffData; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9674FF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__SYNCBUFFUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x96777A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass3_0_TypeDefinitionIndex = 51919;

	class FateBuffTraitInfo___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_275* protoBuff; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncBuffUpdate_b__0(::RPG::Client::FateBuffData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__SYNCBUFFUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
