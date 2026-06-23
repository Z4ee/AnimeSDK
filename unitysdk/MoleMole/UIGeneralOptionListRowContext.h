#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B2CC1546FE1550.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166EEB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowContext_TypeDefinitionIndex = 48090;

	class UIGeneralOptionListRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* title; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x40
		::System::Action_2<::System::Int32, ::System::Int32>* OnDropDownSelect; // 0x48
		::UnityEngine::Vector3 positionOffset; // 0x50
		::Enum_3_58B2CC1546FE1550 arrowDirection; // 0x5C
		::System::Boolean IsDesCenter; // 0x60
		::System::Boolean useLocalYHeight; // 0x61
		::System::Boolean isUp; // 0x62
		::System::Int32 index; // 0x64
		::System::Int32 curSelectIndex; // 0x68
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x6C
		::System::Boolean ShowRedPointOnRootButton; // 0x6D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
