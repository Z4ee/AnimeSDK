#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_58B2CC1546FE1550.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBAE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionListRowContext_TypeDefinitionIndex = 65500;

	class UIGeneralOptionListRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentList; // 0x28
		::System::Action_2<::System::Int32, ::System::Int32>* OnDropDownSelect; // 0x30
		::System::String* title; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* DropDownContentRedPointPathList; // 0x40
		::System::Collections::Generic::List_1<::System::Boolean>* RedPointStateList; // 0x48
		::Enum_3_58B2CC1546FE1550 arrowDirection; // 0x50
		::System::Boolean ShowRedPointOnRootButton; // 0x54
		::System::Int32 curSelectIndex; // 0x58
		::System::Int32 index; // 0x5C
		::System::Boolean IgnoreGamepadLeftStickButtonClose; // 0x60
		::System::Boolean IsDesCenter; // 0x61
		::System::Boolean isUp; // 0x62
		::System::Boolean useLocalYHeight; // 0x63
		::UnityEngine::Vector3 positionOffset; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONLISTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
