#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DC1A4C0)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DC1A540)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DC1A180)
#define SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1A160)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int KeyframeFormatter_ReadFieldAction_TypeDefinitionIndex = 7583;

	class KeyframeFormatter_ReadFieldAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_INVOKE_OFFSET))(this, value, reader);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Keyframe& value, ::Sirenix::Serialization::IDataReader* reader, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Keyframe&, ::Sirenix::Serialization::IDataReader*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_BEGININVOKE_OFFSET))(this, value, reader, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Keyframe& value, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_KEYFRAMEFORMATTER_READFIELDACTION_ENDINVOKE_OFFSET))(this, value, result);
		}
	};
}
