#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9C7F1AD764433EE5.h"
#include "unitysdk/Enum_3_A41D6F485D525776.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A364B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetContext_TypeDefinitionIndex = 69062;

	class UIMissionTipsRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* SubTextMapKey; // 0x28
		::Foundation::AssetPath IconPath; // 0x30
		::System::String* TextMapKey; // 0x40
		::System::Func_1<::System::String*>* TextFunc; // 0x48
		::System::UInt32 GroupId; // 0x50
		::Enum_3_9C7F1AD764433EE5 QuestIconType; // 0x54
		::System::Int32 QuestIconIndex; // 0x58
		::System::Int32 MultiQuestCount; // 0x5C
		::System::Nullable_1<::UnityEngine::Color> TextColor; // 0x60
		::Enum_3_A41D6F485D525776 TipType; // 0x74
		::System::Int32 QuestID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
