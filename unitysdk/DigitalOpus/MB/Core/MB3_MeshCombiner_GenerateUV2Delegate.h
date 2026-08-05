#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Mesh; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F53C090)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F53C130)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F53BA80)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F53BA60)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombiner_GenerateUV2Delegate_TypeDefinitionIndex = 94556;

	class MB3_MeshCombiner_GenerateUV2Delegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Mesh* m, ::System::Single hardAngle, ::System::Single packMargin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_INVOKE_OFFSET))(this, m, hardAngle, packMargin);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Mesh* m, ::System::Single hardAngle, ::System::Single packMargin, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_BEGININVOKE_OFFSET))(this, m, hardAngle, packMargin, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINER_GENERATEUV2DELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
