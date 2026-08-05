#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_0D944A5A2F0E740C;
namespace MoleMole::GalGame { class TransitionDisplayItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOGALGAMEQUESTMENU_INIT_OFFSET UNITYSDK_OFFSET(0x144E6290)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_METHOD_5_640514F2FC7A7607_OFFSET UNITYSDK_OFFSET(0x144E6DB0)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_SETBUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x144E6B80)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_SETDATA_OFFSET UNITYSDK_OFFSET(0x144E6560)
#define MOLEMOLE_MONOGALGAMEQUESTMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x144E6CD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGalgameQuestMenu_TypeDefinitionIndex = 53345;

	class MonoGalgameQuestMenu : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* menuItemList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIButtonEx*>* buttonList; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* textList; // 0x28
		::System::Action_2<::MoleMole::GalGame::TransitionDisplayItem*, ::Struct_2_ABC67D4EFBF3BD9A_5>* clickItemAction; // 0x30
		::System::String* Field_5_5; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TransitionDisplayItem*>* Field_5_4; // 0x40
		::System::Int32 Field_5_11; // 0x48
		::System::Int32 Field_5_10; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_INIT_OFFSET))(this);
		}

		::System::Void SetData(::Class_2_0D944A5A2F0E740C* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0D944A5A2F0E740C*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_SETDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetButtonInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_SETBUTTONINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_640514F2FC7A7607(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_METHOD_5_640514F2FC7A7607_OFFSET))(this, a1);
		}
	};
}
