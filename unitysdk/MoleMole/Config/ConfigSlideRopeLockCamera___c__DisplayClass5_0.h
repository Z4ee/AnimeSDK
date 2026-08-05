#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DA020)
#define MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS5_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B4DA030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSlideRopeLockCamera___c__DisplayClass5_0_TypeDefinitionIndex = 49398;

	class ConfigSlideRopeLockCamera___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* finishCallback; // 0x10
		::System::String* dataName; // 0x18
		::System::Action_1<::System::Single>* moveOneStepCallback; // 0x20
		::System::Single progressSpan; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFileAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSLIDEROPELOCKCAMERA___C__DISPLAYCLASS5_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
		}
	};
}
