#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189ED770)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189ED7B0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET UNITYSDK_OFFSET(0x189ED7C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET UNITYSDK_OFFSET(0x189ED860)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x189ED890)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController___c_TypeDefinitionIndex = 69709;

	class UILaunchPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILaunchPageController___c** StaticGet___9()
		{
			return (::MoleMole::UILaunchPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4EBC0);
		}
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4EBC8);
		}
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UILaunchPageController___c_TypeDefinitionIndex)->GetStaticField(0x4EBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GameStart_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_B__16_0_OFFSET))(this);
		}

		::System::Void _GameStart_g__GoToLoginGame_16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__GAMESTART_G__GOTOLOGINGAME_16_1_OFFSET))(this);
		}

		::System::Void _PlayKoreaAgeLimit_b__18_0(::Class_1_E9529ED64113E4E9* playerHelper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___C__PLAYKOREAAGELIMIT_B__18_0_OFFSET))(this, playerHelper);
		}
	};
}
