#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Lumi::GeometryLibrary::Scripts { class DynamicMeshComponent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB984170)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB9841A0)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB984160)
#define LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE__CTOR_OFFSET UNITYSDK_OFFSET(0xB984070)

namespace Lumi::GeometryLibrary::Scripts
{
	inline static constexpr unsigned int DynamicMeshComponent_Class_3_FA9425483BAC14EE_TypeDefinitionIndex = 48161;

	class DynamicMeshComponent_Class_3_FA9425483BAC14EE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Lumi::GeometryLibrary::Scripts::DynamicMeshComponent*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LUMI_GEOMETRYLIBRARY_SCRIPTS_DYNAMICMESHCOMPONENT_CLASS_3_FA9425483BAC14EE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
