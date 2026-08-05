#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16275630)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS0_0__RELOADFROMFILEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x16275640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass0_0_TypeDefinitionIndex = 56955;

	class ConfigUIAvatarShowData___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* moveOneStepCallback; // 0x10
		::System::Action_1<::System::String*>* finishCallback; // 0x18
		::System::String* dataName; // 0x20
		::System::Single progressSpan; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFileAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS0_0__RELOADFROMFILEASYNC_B__0_OFFSET))(this);
		}
	};
}
