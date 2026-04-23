#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_MESHRENDERDATA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18145410)
#define RPG_CUSTOMRP_MESHRENDERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x18145470)
#define RPG_CUSTOMRP_MESHRENDERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18145480)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MeshRenderData_TypeDefinitionIndex = 35271;

	class MeshRenderData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Trans; // 0x10
		::UnityEngine::MeshFilter* Mf; // 0x18
		::UnityEngine::MeshRenderer* Mr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESHRENDERDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESHRENDERDATA_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESHRENDERDATA_RESET_OFFSET))(this);
		}
	};
}
