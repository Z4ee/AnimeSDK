#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F2433A0)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F243410)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2430A0)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F243080)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int ConfigSkinMapAnimationClipData_GetSkinIDAction_TypeDefinitionIndex = 32860;

	class ConfigSkinMapAnimationClipData_GetSkinIDAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::Int32 unitId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_INVOKE_OFFSET))(this, unitId);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 unitId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_BEGININVOKE_OFFSET))(this, unitId, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_CONFIGSKINMAPANIMATIONCLIPDATA_GETSKINIDACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
