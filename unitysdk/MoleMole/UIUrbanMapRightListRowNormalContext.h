#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x152DEC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 42994;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath IconTextIcon; // 0x28
		::System::String* RightRawText; // 0x38
		::Foundation::AssetPath ProgressIcon; // 0x40
		::System::String* Title; // 0x50
		::Foundation::AssetPath DescIcon; // 0x58
		::UnityEngine::Events::UnityAction* OnClick; // 0x68
		::System::String* ProgressFormat; // 0x70
		::System::Func_1<::System::String*>* DescText; // 0x78
		::System::String* IconTextNum; // 0x80
		::System::String* RightTextKey; // 0x88
		::System::Func_1<::System::String*>* RawDescText; // 0x90
		::System::Boolean ShowIconText; // 0x98
		::System::Boolean IconDisabled; // 0x99
		::System::Boolean QuestIconActive; // 0x9A
		::System::Int32 ProgressRight; // 0x9C
		::System::Int64 TimeOut; // 0xA0
		::UnityEngine::Color ProgressLeftColor; // 0xA8
		::UnityEngine::Color DescIconColor; // 0xB8
		::System::Int64 TimeCountDown; // 0xC8
		::System::Int32 ProgressLeft; // 0xD0
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
