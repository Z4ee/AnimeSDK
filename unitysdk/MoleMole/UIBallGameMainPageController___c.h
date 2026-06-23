#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InLevelPauseLevelTab.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFA0980)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA09C0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__ONNEWBIEEND_B__26_0_OFFSET UNITYSDK_OFFSET(0x1CFA09D0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__ONPAUSE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1CFA0A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController___c_TypeDefinitionIndex = 89376;

	class UIBallGameMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4E030);
		}
		static ::MoleMole::UIBallGameMainPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBallGameMainPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4E038);
		}
		static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIBallGameMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4E040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnNewbieEnd_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__ONNEWBIEEND_B__26_0_OFFSET))(this);
		}

		::System::Void _OnPause_b__31_0(::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>* settingDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::InLevelPauseLevelTab, ::System::Collections::Generic::List_1<::MoleMole::ESystemSettingType>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___C__ONPAUSE_B__31_0_OFFSET))(this, settingDict);
		}
	};
}
