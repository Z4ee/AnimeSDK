#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInterKnotV3PageContext_JumpDefaultFocusType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C70A0)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8505C0)
#define MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x8505B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotV3PageContext_MissionFocusItemStyle_TypeDefinitionIndex = 85855;

	struct alignas(4) UIInterKnotV3PageContext_MissionFocusItemStyle
	{
		static ::System::Char* StaticGet_SplitContextJumpArg()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotV3PageContext_MissionFocusItemStyle_TypeDefinitionIndex)->GetStaticField(0x115C0);
		}
		// static const ::System::String* QuestKey; // 0x0
		// static const ::System::String* FocusModeKey; // 0x0
		// static const ::System::String* SeasonKey; // 0x0
		::System::Int32 QuestID; // 0x10
		::System::Int32 SeasonID; // 0x14
		::System::Int32 RealMenualID; // 0x18
		::MoleMole::UIInterKnotV3PageContext_JumpDefaultFocusType FocusType; // 0x1C

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CTOR_OFFSET))(this, strParams);
		}

		::System::Void _ctor_1(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CTOR_1_OFFSET))(this, questID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTV3PAGECONTEXT_MISSIONFOCUSITEMSTYLE__CCTOR_OFFSET))();
		}
	};
}
