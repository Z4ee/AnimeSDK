#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class OffScreenCanvas_Class_1_524001C029AD7765; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_OFFSCREENCANVAS_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9E92DE0)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x9E925D0)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9E946D0)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9E923F0)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_9170A99814FEAFAC_OFFSET UNITYSDK_OFFSET(0x9E93D00)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_C0353B6D8FB55332_OFFSET UNITYSDK_OFFSET(0x9E94E20)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x9E94560)
#define RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_E3C376C73DC2AD5B_OFFSET UNITYSDK_OFFSET(0x9E928F0)
#define RPG_CLIENT_OFFSCREENCANVAS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9E942F0)
#define RPG_CLIENT_OFFSCREENCANVAS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9E91F00)
#define RPG_CLIENT_OFFSCREENCANVAS_UPDATERENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0x9E924A0)
#define RPG_CLIENT_OFFSCREENCANVAS__CTOR_OFFSET UNITYSDK_OFFSET(0x9E94E90)

namespace RPG::Client
{
	inline static constexpr unsigned int OffScreenCanvas_TypeDefinitionIndex = 59515;

	class OffScreenCanvas : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_Field_5_7()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(OffScreenCanvas_TypeDefinitionIndex)->GetStaticField(0x44800);
		}
		static ::Il2CppArray<::RPG::Client::OffScreenCanvas*>** StaticGet_Field_5_5()
		{
			return (::Il2CppArray<::RPG::Client::OffScreenCanvas*>**)Il2CppClass::FromTypeDefinitionIndex(OffScreenCanvas_TypeDefinitionIndex)->GetStaticField(0x44808);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OffScreenCanvas_TypeDefinitionIndex)->GetStaticField(0x119F0);
		}
		::UnityEngine::Mesh* sharedMesh; // 0x18
		::System::Int32 sortingOrder; // 0x20
		::System::Boolean m_UI3D; // 0x24
		::System::Single FOV; // 0x28
		::UnityEngine::Material* m_3DMaterial; // 0x30
		::UnityEngine::Canvas* Field_5_8; // 0x38
		::UnityEngine::Camera* Field_5_9; // 0x40
		::UnityEngine::RenderTexture* Field_5_10; // 0x48
		::System::Int32 Field_5_11; // 0x50
		::UnityEngine::Camera* Field_5_12; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_13; // 0x60
		::RPG::Client::OffScreenCanvas_Class_1_524001C029AD7765* Field_5_14; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_5_E3C376C73DC2AD5B(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_E3C376C73DC2AD5B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateRenderingLayerMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_UPDATERENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_1CDA0051FD244886()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_1CDA0051FD244886_OFFSET))(this);
		}

		::System::Void Method_5_9170A99814FEAFAC(::UnityEngine::RectTransform* a1, ::UnityEngine::Rect a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_9170A99814FEAFAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::UnityEngine::Camera* Method_5_C0353B6D8FB55332()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_METHOD_5_C0353B6D8FB55332_OFFSET))(this);
		}
	};
}
