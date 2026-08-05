#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class ScriptableObject; }

#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_GETOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x10AFAAE0)
#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x10AFABC0)
#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x10AFAB20)
#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_SETOBJECTPATH_OFFSET UNITYSDK_OFFSET(0x10AFAA90)
#define MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFACB0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int SoftScriptObjectReference_TypeDefinitionIndex = 43263;

	class SoftScriptObjectReference : public ::System::Object
	{
	public:
		::System::String* objectPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void SetObjectPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_SETOBJECTPATH_OFFSET))(this, path);
		}

		::System::String* GetObjectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_GETOBJECTPATH_OFFSET))(this);
		}

		::UnityEngine::ScriptableObject* LoadSync()
		{
			return ((::UnityEngine::ScriptableObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_LOADSYNC_OFFSET))(this);
		}

		::System::Void LoadAsync(::System::Action_1<::UnityEngine::ScriptableObject*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::ScriptableObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_SOFTSCRIPTOBJECTREFERENCE_LOADASYNC_OFFSET))(this, callback);
		}
	};
}
