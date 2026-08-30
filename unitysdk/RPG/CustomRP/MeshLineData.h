#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_MESHLINEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1C6B1AB0)
#define RPG_CUSTOMRP_MESHLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B1B30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MeshLineData_TypeDefinitionIndex = 37241;

	class MeshLineData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* t; // 0x10
		::UnityEngine::MaterialPropertyBlock* mpb; // 0x18
		::UnityEngine::Mesh* m; // 0x20
		::System::Int32 meshOffset; // 0x28
		::UnityEngine::Bounds aabb; // 0x2C
		::System::Int32 instanceCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESHLINEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MESHLINEDATA_RESET_OFFSET))(this);
		}
	};
}
