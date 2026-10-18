#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_GET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD62C980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_METHOD_5_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0xD62C9C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0xD62BA80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_SET_PARTICLECAMERA_OFFSET UNITYSDK_OFFSET(0xD62B940)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD62CA50)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTrailControl_TypeDefinitionIndex = 79919;

	class MechCraftCraftProgressAttrTrailControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _NodeStart; // 0x18
		::UnityEngine::Transform* _NodeMid; // 0x20
		::UnityEngine::Transform* _NodeEnd; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemRenderer*>* _ParticleRenderers; // 0x30
		::UnityEngine::Camera* OBNMPEJCBAO; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_ParticleCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_GET_PARTICLECAMERA_OFFSET))(this);
		}

		::System::Void set_ParticleCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_SET_PARTICLECAMERA_OFFSET))(this, a1);
		}

		::System::Void Setup(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_SETUP_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B0351A8151A472A4(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAILCONTROL_METHOD_5_B0351A8151A472A4_OFFSET))(this, a1);
		}
	};
}
