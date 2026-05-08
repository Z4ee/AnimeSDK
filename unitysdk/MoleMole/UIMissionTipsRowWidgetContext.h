#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0ABEFAA659B6C774.h"
#include "unitysdk/Enum_3_A41D6F485D525776.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE4140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetContext_TypeDefinitionIndex = 77011;

	class UIMissionTipsRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextMapKey; // 0x28
		::System::String* SubTextMapKey; // 0x30
		::Foundation::AssetPath IconPath; // 0x38
		::System::Func_1<::System::String*>* TextFunc; // 0x48
		::System::UInt32 GroupId; // 0x50
		::System::Int32 QuestIconIndex; // 0x54
		::Enum_3_A41D6F485D525776 TipType; // 0x58
		::Enum_3_0ABEFAA659B6C774 QuestIconType; // 0x5C
		::System::Int32 QuestID; // 0x60
		::System::Int32 MultiQuestCount; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
