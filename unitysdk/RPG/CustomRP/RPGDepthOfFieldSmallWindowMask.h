#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CC4C480)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_SET_OFFSET UNITYSDK_OFFSET(0x1CC4C460)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_TRYGET_OFFSET UNITYSDK_OFFSET(0x1CC4C150)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfFieldSmallWindowMask_TypeDefinitionIndex = 37806;

	class RPGDepthOfFieldSmallWindowMask : public ::System::Object
	{
	public:
		static ::UnityEngine::MeshRenderer** StaticGet_s_MaskRenderer()
		{
			return (::UnityEngine::MeshRenderer**)Il2CppClass::FromTypeDefinitionIndex(RPGDepthOfFieldSmallWindowMask_TypeDefinitionIndex)->GetStaticField(0x32890);
		}
		static ::UnityEngine::Camera** StaticGet_s_Camera()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(RPGDepthOfFieldSmallWindowMask_TypeDefinitionIndex)->GetStaticField(0x32898);
		}
		static ::UnityEngine::Rendering::CRPVirtualCamera** StaticGet_s_VirtualCamera()
		{
			return (::UnityEngine::Rendering::CRPVirtualCamera**)Il2CppClass::FromTypeDefinitionIndex(RPGDepthOfFieldSmallWindowMask_TypeDefinitionIndex)->GetStaticField(0x328A0);
		}

		static ::System::Void Set(::UnityEngine::MeshRenderer* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_SET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_CLEAR_OFFSET))();
		}

		static ::System::Boolean TryGet(::UnityEngine::MeshRenderer*& a1, ::UnityEngine::Rect& a2, ::UnityEngine::Camera*& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::MeshRenderer*&, ::UnityEngine::Rect&, ::UnityEngine::Camera*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDSMALLWINDOWMASK_TRYGET_OFFSET))(a1, a2, a3);
		}
	};
}
