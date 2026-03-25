#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG::CustomRP { class MaterialInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_UIPPFILTERSTACK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA7AFF90)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_GET_KEY_OFFSET UNITYSDK_OFFSET(0xA7AFF80)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA7AFEC0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA7AFB90)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_1_OFFSET UNITYSDK_OFFSET(0xA7B0D10)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_2_OFFSET UNITYSDK_OFFSET(0xA7B1040)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_3_OFFSET UNITYSDK_OFFSET(0xA7B1370)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_OFFSET UNITYSDK_OFFSET(0xA7B09C0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__CHECKALLMATERIALS_OFFSET UNITYSDK_OFFSET(0xA7B0B50)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA7B1860)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPPPATTERNONLY_OFFSET UNITYSDK_OFFSET(0xA7B06B0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPP_OFFSET UNITYSDK_OFFSET(0xA7B0620)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__SETMATERIALANIMATIONBINDING_OFFSET UNITYSDK_OFFSET(0xA7AFD50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPPFilterStack_TypeDefinitionIndex = 41898;

	class UIPPFilterStack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::MaterialInfo*>* UIPPMats; // 0x18
		::System::Boolean _PatternOnly; // 0x20
		::UnityEngine::RenderTexture* _UIPPRTCopy; // 0x28
		::UnityEngine::RenderTexture* _UIPPRT; // 0x30
		::UnityEngine::RenderTextureDescriptor _UIPPRTDesc; // 0x38
		::UnityEngine::MaterialAnimationBinding* _MatAniBinding; // 0x70
		::System::Int32 _SrcBlendShaderProperty; // 0x78
		::System::Int32 _DstBlendShaderProperty; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK_ONDISABLE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK_EXECUTE_OFFSET))(this, cmd, mainCameraDesc);
		}

		::System::Void _SetMaterialAnimationBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__SETMATERIALANIMATIONBINDING_OFFSET))(this);
		}

		::System::Void _CheckAllMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__CHECKALLMATERIALS_OFFSET))(this);
		}

		::System::Void _Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* dest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_OFFSET))(this, cmd, source, dest);
		}

		::System::Void _Blit_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_1_OFFSET))(this, cmd, source, dest, mat);
		}

		::System::Void _Blit_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_2_OFFSET))(this, cmd, source, dest, mat, passIndex);
		}

		::System::Void _Blit_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, ::System::Collections::Generic::List_1<::System::Int32>* passIDs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_3_OFFSET))(this, cmd, source, dest, mat, passIDs);
		}

		::System::Void _DrawUIPP(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* dest, ::RPG::CustomRP::MaterialInfo* materialInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::MaterialInfo*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPP_OFFSET))(this, cmd, source, dest, materialInfo);
		}

		::System::Void _DrawUIPPPatternOnly(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* dest, ::RPG::CustomRP::MaterialInfo* materialInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::MaterialInfo*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPPPATTERNONLY_OFFSET))(this, cmd, dest, materialInfo);
		}
	};
}
