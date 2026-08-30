#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanarReflection_Axis.h"
#include "unitysdk/RPG/Client/PlanarReflection_Quality.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/CustomRP/ReflectionRenderData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_PLANARREFLECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDB25F00)
#define RPG_CLIENT_PLANARREFLECTION_GETNAMESTR_OFFSET UNITYSDK_OFFSET(0xDB27E50)
#define RPG_CLIENT_PLANARREFLECTION_GET_KEY_OFFSET UNITYSDK_OFFSET(0xDB25EC0)
#define RPG_CLIENT_PLANARREFLECTION_GET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0xDB25EA0)
#define RPG_CLIENT_PLANARREFLECTION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDB261E0)
#define RPG_CLIENT_PLANARREFLECTION_GET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB25E80)
#define RPG_CLIENT_PLANARREFLECTION_GET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB25E60)
#define RPG_CLIENT_PLANARREFLECTION_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0xDB261F0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_118BDDBD7450B315_OFFSET UNITYSDK_OFFSET(0xDB27B60)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_3BDC90EC995068F1_OFFSET UNITYSDK_OFFSET(0xDB291D0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_3DF8B6CE0C1D4E7D_OFFSET UNITYSDK_OFFSET(0xDB29700)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_40B4E82B9BBDD74D_OFFSET UNITYSDK_OFFSET(0xDB26BC0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xDB294A0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xDB28FD0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_87A0D0E2332A0BEA_OFFSET UNITYSDK_OFFSET(0xDB29970)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_A6FF6624967F197D_OFFSET UNITYSDK_OFFSET(0xDB26F60)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_BBEE5344A89FBA2C_OFFSET UNITYSDK_OFFSET(0xDB287E0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0xDB28AE0)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_CCFFC97FF79A551F_OFFSET UNITYSDK_OFFSET(0xDB27650)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_E3C376C73DC2AD5B_OFFSET UNITYSDK_OFFSET(0xDB27790)
#define RPG_CLIENT_PLANARREFLECTION_METHOD_5_EB1F180852FCFCFD_OFFSET UNITYSDK_OFFSET(0xDB295E0)
#define RPG_CLIENT_PLANARREFLECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDB28410)
#define RPG_CLIENT_PLANARREFLECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDB28170)
#define RPG_CLIENT_PLANARREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDB27EA0)
#define RPG_CLIENT_PLANARREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0xDB29A80)
#define RPG_CLIENT_PLANARREFLECTION_SET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0xDB25EB0)
#define RPG_CLIENT_PLANARREFLECTION_SET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB25E90)
#define RPG_CLIENT_PLANARREFLECTION_SET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB25E70)
#define RPG_CLIENT_PLANARREFLECTION_SET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0xDB26200)
#define RPG_CLIENT_PLANARREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0xDB26270)
#define RPG_CLIENT_PLANARREFLECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB28530)
#define RPG_CLIENT_PLANARREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDB299D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflection_TypeDefinitionIndex = 70127;

	class PlanarReflection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CameraRange; // 0x18
		::RPG::Client::PlanarReflection_Axis PlaneDir; // 0x1C
		::System::Boolean ForceUp; // 0x20
		::System::Single PlaneOffset; // 0x24
		::System::Boolean ClearRenderListOnDisable; // 0x28
		::System::Boolean _UseRenderList; // 0x29
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _RenderList_k__BackingField; // 0x30
		::System::String* _NameKey; // 0x38
		::System::Boolean IsEnable; // 0x40
		::System::Single BlurScale; // 0x44
		::System::Single Brightness; // 0x48
		::System::UInt32 AdditionalCasterRenderingLayerMask; // 0x4C
		::System::Int32 Priority; // 0x50
		::System::Boolean UseTAA; // 0x54
		::UnityEngine::Renderer* boundsRenderer; // 0x58
		::UnityEngine::Vector4 ReflectionST; // 0x60
		::System::Boolean overrideScaleQuality; // 0x70
		::System::Single overrideScaleFactor; // 0x74
		::RPG::Client::PlanarReflection_Quality ScaleQuality; // 0x78
		::UnityEngine::Vector3 DMGKOIHDAEJ; // 0x7C
		::UnityEngine::Quaternion CJGFKFJMIEI; // 0x88
		::UnityEngine::Matrix4x4 PPHJJDJBEKA; // 0x98
		::System::Boolean HDJOGGDMCIO; // 0xD8
		::System::Boolean JCCHJNKFOAG; // 0xD9
		::UnityEngine::Camera* IEMGKEFBPCG; // 0xE0
		::UnityEngine::Transform* ILPDLGIJMNN; // 0xE8
		::UnityEngine::Renderer* JAMDAALMOAL; // 0xF0
		::Il2CppArray<::UnityEngine::Material*>* EPJOHHLLIAD; // 0xF8
		::UnityEngine::Plane GKFMHMEFJKB; // 0x100
		::UnityEngine::RenderTexture* MENDDEGFGFN; // 0x110
		::UnityEngine::RenderTexture* LPOCEHFGHFB; // 0x118
		::UnityEngine::RenderTexture* GIKOIBLPGDH; // 0x120
		::System::Int32 PBHMHJNDLDL; // 0x128
		::Il2CppArray<::System::String*>* CJMNEPKDIGB; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseRenderList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_USERENDERLIST_OFFSET))(this);
		}

		::System::Void set_UseRenderList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_USERENDERLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* get_RenderList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_RENDERLIST_OFFSET))(this);
		}

		::System::Void set_RenderList(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_RENDERLIST_OFFSET))(this, a1);
		}

		::System::String* get_NameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_NAMEKEY_OFFSET))(this);
		}

		::System::Void set_NameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_NAMEKEY_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_validForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_VALIDFORRENDERING_OFFSET))(this);
		}

		::System::Void set_validForRendering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_VALIDFORRENDERING_OFFSET))(this, a1);
		}

		::System::Boolean UpdateReflection(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::RPG::CustomRP::GameCameraType a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Vector3& a7, ::RPG::CustomRP::ReflectionRenderData& a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::CustomRP::ReflectionRenderData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_UPDATEREFLECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* GetNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GETNAMESTR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_62593EE2FE331D20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_62593EE2FE331D20_OFFSET))(this);
		}

		::System::Void Method_5_BBEE5344A89FBA2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_BBEE5344A89FBA2C_OFFSET))(this);
		}

		static ::System::Void Method_5_3BDC90EC995068F1(::RPG::Client::PlanarReflection* a1, ::UnityEngine::Camera*& a2, ::UnityEngine::Transform*& a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPG::Client::PlanarReflection*, ::UnityEngine::Camera*&, ::UnityEngine::Transform*&, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_3BDC90EC995068F1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_EB1F180852FCFCFD(::UnityEngine::Camera*& a1, ::UnityEngine::Camera*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*&, ::UnityEngine::Camera*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_EB1F180852FCFCFD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_3DF8B6CE0C1D4E7D(::UnityEngine::Camera* a1, ::UnityEngine::Camera*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_3DF8B6CE0C1D4E7D_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_BF972395CC722BF9()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_BF972395CC722BF9_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Single Method_5_CCFFC97FF79A551F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_CCFFC97FF79A551F_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* Method_5_40B4E82B9BBDD74D(::RPG::CustomRP::GameCameraType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_40B4E82B9BBDD74D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_A6FF6624967F197D(::RPG::CustomRP::GameCameraType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_A6FF6624967F197D_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::RenderTextureFormat Method_5_87A0D0E2332A0BEA()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_87A0D0E2332A0BEA_OFFSET))(this);
		}

		::System::Void Method_5_E3C376C73DC2AD5B(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_E3C376C73DC2AD5B_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Method_5_118BDDBD7450B315(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_METHOD_5_118BDDBD7450B315_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RPG_CustomRP_IPlaneReflection_UpdateReflection(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::RPG::CustomRP::GameCameraType a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Vector3& a7, ::RPG::CustomRP::ReflectionRenderData& a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::CustomRP::ReflectionRenderData&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
