#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::ScreenSpaceRayTracing { class BakedSDFPrefabData; }

#define RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_02F5BC1F7D8B4AB5_1_OFFSET UNITYSDK_OFFSET(0xE7EE7A0)
#define RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_02F5BC1F7D8B4AB5_OFFSET UNITYSDK_OFFSET(0xE7EE480)
#define RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_F8374AB88731D982_OFFSET UNITYSDK_OFFSET(0xE7EE960)
#define RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE7EEEF0)

namespace RPG::ScreenSpaceRayTracing
{
	inline static constexpr unsigned int BakedSDFInstanceData_TypeDefinitionIndex = 52070;

	class BakedSDFInstanceData : public ::System::Object
	{
	public:
		::System::Int32 prefabDataIndex; // 0x10
		::UnityEngine::Vector3 relativePosition; // 0x14
		::UnityEngine::Quaternion relativeRotation; // 0x20
		::UnityEngine::Vector3 scale; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 Method_1_02F5BC1F7D8B4AB5(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_02F5BC1F7D8B4AB5_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Matrix4x4 Method_1_02F5BC1F7D8B4AB5_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_02F5BC1F7D8B4AB5_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Bounds Method_1_F8374AB88731D982(::RPG::ScreenSpaceRayTracing::BakedSDFPrefabData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::RPG::ScreenSpaceRayTracing::BakedSDFPrefabData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SCREENSPACERAYTRACING_BAKEDSDFINSTANCEDATA_METHOD_1_F8374AB88731D982_OFFSET))(this, a1, a2, a3);
		}
	};
}
