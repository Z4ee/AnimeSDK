#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE46B950)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 77772;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ProgressFormat; // 0x28
		::System::String* Title; // 0x30
		::Foundation::AssetPath DescIcon; // 0x38
		::Foundation::AssetPath ProgressIcon; // 0x48
		::System::Func_1<::System::String*>* RawDescText; // 0x58
		::Foundation::AssetPath IconTextIcon; // 0x60
		::System::String* RightRawText; // 0x70
		::System::String* IconTextNum; // 0x78
		::System::Func_1<::System::String*>* DescText; // 0x80
		::UnityEngine::Events::UnityAction* OnClick; // 0x88
		::System::String* RightTextKey; // 0x90
		::System::Int64 TimeCountDown; // 0x98
		::System::Boolean IconDisabled; // 0xA0
		::System::Boolean ShowIconText; // 0xA1
		::System::Boolean QuestIconActive; // 0xA2
		::UnityEngine::Color ProgressLeftColor; // 0xA4
		::UnityEngine::Color DescIconColor; // 0xB4
		::System::Int32 ProgressRight; // 0xC4
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xC8
		::System::Int32 ProgressLeft; // 0xCC
		::System::Int64 TimeOut; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
