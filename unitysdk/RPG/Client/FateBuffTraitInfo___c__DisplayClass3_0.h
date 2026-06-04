#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_298;
namespace RPG::Client { class FateBuffData; }

#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB985C20)
#define RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__SYNCBUFFUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xB9886F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo___c__DisplayClass3_0_TypeDefinitionIndex = 59798;

	class FateBuffTraitInfo___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_298* protoBuff; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncBuffUpdate_b__0(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO___C__DISPLAYCLASS3_0__SYNCBUFFUPDATE_B__0_OFFSET))(this, a1);
		}
	};
}
