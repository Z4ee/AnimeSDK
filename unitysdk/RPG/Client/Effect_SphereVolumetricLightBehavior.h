#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class Effect_SphereVolumetricLightMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E9A210)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_CURRENTRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x15E99D90)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x15E9A200)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_VOLUMETRICLIGHTMATERIAL_OFFSET UNITYSDK_OFFSET(0x15E99D80)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x15E9A030)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_071850D2764E9D4C_1_OFFSET UNITYSDK_OFFSET(0x15E9C240)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x15E9B990)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_0EFB186E18464702_OFFSET UNITYSDK_OFFSET(0x15E9A160)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15E9CDD0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x15E9CE40)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15E9CD70)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_8336E89DF737C001_OFFSET UNITYSDK_OFFSET(0x15E99DA0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15E9C190)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15E9A0B0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x15E9C970)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15E9C100)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E9CEC0)
#define RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9CEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_SphereVolumetricLightBehavior_TypeDefinitionIndex = 70521;

	class Effect_SphereVolumetricLightBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__LayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_SphereVolumetricLightBehavior_TypeDefinitionIndex)->GetStaticField(0x14050);
		}
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedBlockers; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedHoles; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _InstantiatedForceBlockers; // 0x48
		::UnityEngine::Material* _SphereDepthMaterial; // 0x50
		::UnityEngine::Material* _SphereHoleMaterial; // 0x58
		::UnityEngine::Material* _SphereForceBlockerMaterial; // 0x60
		::UnityEngine::Material* _SphereFilterMaterial_01; // 0x68
		::UnityEngine::Material* _SphereFilterMaterial_02; // 0x70
		::UnityEngine::Material* _VolumetricLightMaterial; // 0x78
		::UnityEngine::RenderTexture* _CurrentRenderTexture; // 0x80
		::UnityEngine::RenderTexture* _FilteringRenderTexture; // 0x88
		::UnityEngine::RenderTexture* _HistoryRenderTexture; // 0x90
		::UnityEngine::Vector2Int _HalfResolution; // 0x98
		::UnityEngine::Matrix4x4 _LastFrameViewProj; // 0xA0
		::System::Int32 _IndexWrite; // 0xE0
		::UnityEngine::RenderTextureDescriptor _RenderTextureDesc; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR__CCTOR_OFFSET))();
		}

		::UnityEngine::Material* get_VolumetricLightMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_VOLUMETRICLIGHTMATERIAL_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_CurrentRenderTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_CURRENTRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void Method_3_8336E89DF737C001()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_8336E89DF737C001_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_0EFB186E18464702(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_0EFB186E18464702_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_071850D2764E9D4C_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_071850D2764E9D4C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_071850D2764E9D4C_1_OFFSET))(this);
		}

		::System::Void Method_3_FD647A48096EB173()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_FD647A48096EB173_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::RPG::Client::Effect_SphereVolumetricLightMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_SphereVolumetricLightMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_SPHEREVOLUMETRICLIGHTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
