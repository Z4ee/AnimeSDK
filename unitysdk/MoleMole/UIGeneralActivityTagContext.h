#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09913D8F4964342E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE5970)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagContext_TypeDefinitionIndex = 50123;

	class UIGeneralActivityTagContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* detailCallback; // 0x28
		::System::String* stringTag; // 0x30
		::System::Nullable_1<::Enum_3_09913D8F4964342E> activityTagIcon; // 0x38
		::System::Boolean activeConsoleRegion; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
