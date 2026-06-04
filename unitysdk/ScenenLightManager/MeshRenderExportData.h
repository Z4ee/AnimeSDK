#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ReceiveGI.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_METHOD_1_42422F9198B570F3_OFFSET UNITYSDK_OFFSET(0xD07D530)
#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_METHOD_1_7CAC9130826180EE_OFFSET UNITYSDK_OFFSET(0xD07D290)
#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07D210)

namespace ScenenLightManager
{
	inline static constexpr unsigned int MeshRenderExportData_TypeDefinitionIndex = 46327;

	class MeshRenderExportData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* mts; // 0x10
		::System::UInt32 renderFlag; // 0x18
		::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x1C
		::UnityEngine::ReceiveGI receiveGI; // 0x20
		::System::Boolean receiveShadows; // 0x24
		::System::Boolean allowOcclusionWhenDynamic; // 0x25
		::System::UInt32 renderingLayerMask; // 0x28
		::System::UInt32 viewMask; // 0x2C

		::System::Void _ctor(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_7CAC9130826180EE(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_METHOD_1_7CAC9130826180EE_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_1_42422F9198B570F3(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_METHOD_1_42422F9198B570F3_OFFSET))(a1);
		}
	};
}
