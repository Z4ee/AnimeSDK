#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_82C392C8FDBEEFDF.h"
#include "unitysdk/Enum_3_A41D6F485D525776.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x155EE500)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetContext_TypeDefinitionIndex = 58261;

	class UIMissionTipsRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath IconPath; // 0x28
		::System::Func_1<::System::String*>* TextFunc; // 0x38
		::System::String* SubTextMapKey; // 0x40
		::System::String* TextMapKey; // 0x48
		::System::Int32 MultiQuestCount; // 0x50
		::System::Int32 QuestID; // 0x54
		::System::Nullable_1<::UnityEngine::Color> TextColor; // 0x58
		::Enum_3_A41D6F485D525776 TipType; // 0x6C
		::System::UInt32 GroupId; // 0x70
		::System::Int32 QuestIconIndex; // 0x74
		::Enum_3_82C392C8FDBEEFDF QuestIconType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
