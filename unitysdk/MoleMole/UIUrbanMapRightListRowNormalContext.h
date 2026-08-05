#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x151B61C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 73163;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::String*>* RawDescText; // 0x28
		::Foundation::AssetPath ProgressIcon; // 0x30
		::System::String* ProgressFormat; // 0x40
		::Foundation::AssetPath DescIcon; // 0x48
		::System::Func_1<::System::String*>* DescText; // 0x58
		::UnityEngine::Events::UnityAction* OnClick; // 0x60
		::System::String* IconTextNum; // 0x68
		::System::String* Title; // 0x70
		::System::String* RightTextKey; // 0x78
		::System::String* RightRawText; // 0x80
		::Foundation::AssetPath IconTextIcon; // 0x88
		::System::Int64 TimeCountDown; // 0x98
		::UnityEngine::Color ProgressLeftColor; // 0xA0
		::System::Boolean ZenkovTargetShowBlink; // 0xB0
		::System::Boolean ZenkovTargetHideText; // 0xB1
		::System::Boolean ShowConsolePanel; // 0xB2
		::System::Boolean ZenkovTargetShowLock; // 0xB3
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xB4
		::System::UInt32 ZenkovTargetTimeMs; // 0xB8
		::UnityEngine::Color DescIconColor; // 0xBC
		::System::Int32 ProgressRight; // 0xCC
		::System::Boolean IconDisabled; // 0xD0
		::System::Boolean QuestIconActive; // 0xD1
		::System::Boolean ShowIconText; // 0xD2
		::System::Boolean ZenkovTargetShowIcon; // 0xD3
		::System::Int32 ProgressLeft; // 0xD4
		::System::Int64 TimeOut; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
