#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0xD9DD290)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0xD9DD020)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_69AB98955CC24B74_OFFSET UNITYSDK_OFFSET(0xD9DC2D0)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_77911CCFAC6246A2_OFFSET UNITYSDK_OFFSET(0xD9DD1B0)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD9DD320)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_C4DFC65547D95EA7_OFFSET UNITYSDK_OFFSET(0xD9DD0D0)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xD9DD230)
#define RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DCCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int OffScreenCanvas_Class_1_524001C029AD7765_TypeDefinitionIndex = 72546;

	class OffScreenCanvas_Class_1_524001C029AD7765 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasRenderer* DJCKHMEJAJM; // 0x10
		::UnityEngine::MeshFilter* CDBIPMEMHOI; // 0x18
		::UnityEngine::GameObject* OKAPOOKNFAD; // 0x20
		::UnityEngine::Canvas* GAAEMCFPMMD; // 0x28
		::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x30
		::System::Boolean JEKBNHEILCN; // 0x38

		::System::Void _ctor(::System::Boolean a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_64C8CF167B1D4401_OFFSET))(this, a1);
		}

		::System::Void Method_1_C4DFC65547D95EA7(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_C4DFC65547D95EA7_OFFSET))(this, a1);
		}

		::System::Void Method_1_77911CCFAC6246A2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_77911CCFAC6246A2_OFFSET))(this, a1);
		}

		::System::Void Method_1_69AB98955CC24B74(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_69AB98955CC24B74_OFFSET))(this, a1);
		}

		::System::Void Method_1_D09831639F615812(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_D09831639F615812_OFFSET))(this, a1);
		}

		::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
		}

		::System::Void Method_1_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CLASS_1_524001C029AD7765_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}
