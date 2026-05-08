#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FB2F458996AC0709.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13026830)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x130268A0)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x13026540)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x13026530)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel_TypeDefinitionIndex = 79296;

	class UIRoleInfoSkillChildWindowController_SubViewDefine_RefreshDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Enum_3_FB2F458996AC0709 playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_FB2F458996AC0709))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_INVOKE_OFFSET))(this, playAnim);
		}

		::System::IAsyncResult* BeginInvoke(::Enum_3_FB2F458996AC0709 playAnim, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Enum_3_FB2F458996AC0709, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_BEGININVOKE_OFFSET))(this, playAnim, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER_SUBVIEWDEFINE_REFRESHDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
