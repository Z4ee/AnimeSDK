#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_0E23A1762570D091_OFFSET UNITYSDK_OFFSET(0x196EAA20)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x196EA920)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x196EA620)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_C77E904E892D00B4_OFFSET UNITYSDK_OFFSET(0x196EA970)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_SETCUSTOMOVERLAYDEPTH01_OFFSET UNITYSDK_OFFSET(0x196EA8A0)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_UPDATEDEPTHOVERLAY_OFFSET UNITYSDK_OFFSET(0x196EA530)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x196EAA80)
#define RPG_CLIENT_SPLITSCREENDEPTHOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x196EAA70)

namespace RPG::Client
{
	inline static constexpr unsigned int SplitScreenDepthOverlay_TypeDefinitionIndex = 69677;

	class SplitScreenDepthOverlay : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_FJDFBKLNENL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SplitScreenDepthOverlay_TypeDefinitionIndex)->GetStaticField(0xC590);
		}
		::UnityEngine::MeshRenderer* _MeshRenderer; // 0x18
		::UnityEngine::Camera* Camera; // 0x20
		::System::Boolean _UseCustomOverlayDepth01; // 0x28
		::System::Single _CustomOverlayDepth01; // 0x2C
		::UnityEngine::MaterialPropertyBlock* GCGIDIIPDBC; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY__CCTOR_OFFSET))();
		}

		::System::Void UpdateDepthOverlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_UPDATEDEPTHOVERLAY_OFFSET))(this);
		}

		::System::Void SetCustomOverlayDepth01(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_SETCUSTOMOVERLAYDEPTH01_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_5_95EAF395E6F95EA4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_95EAF395E6F95EA4_OFFSET))(this, a1);
		}

		static ::UnityEngine::Material* Method_5_0E23A1762570D091(::UnityEngine::MeshRenderer* a1)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_0E23A1762570D091_OFFSET))(a1);
		}

		::UnityEngine::MeshRenderer* Method_5_C77E904E892D00B4()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPLITSCREENDEPTHOVERLAY_METHOD_5_C77E904E892D00B4_OFFSET))(this);
		}
	};
}
