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

#define RPG_CUSTOMRP_UIPPFILTERSTACK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE44D920)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE44D910)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE44D850)
#define RPG_CUSTOMRP_UIPPFILTERSTACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE44D580)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_1_OFFSET UNITYSDK_OFFSET(0xE44E3F0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_2_OFFSET UNITYSDK_OFFSET(0xE44E5B0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_3_OFFSET UNITYSDK_OFFSET(0xE44E770)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_OFFSET UNITYSDK_OFFSET(0xE44E0A0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__CHECKALLMATERIALS_OFFSET UNITYSDK_OFFSET(0xE44E220)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE44E9C0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPPPATTERNONLY_OFFSET UNITYSDK_OFFSET(0xE44DDE0)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPP_OFFSET UNITYSDK_OFFSET(0xE44DD50)
#define RPG_CUSTOMRP_UIPPFILTERSTACK__SETMATERIALANIMATIONBINDING_OFFSET UNITYSDK_OFFSET(0xE44D730)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int UIPPFilterStack_TypeDefinitionIndex = 52159;

	class UIPPFilterStack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::MaterialInfo*>* UIPPMats; // 0x18
		::System::Boolean _PatternOnly; // 0x20
		::UnityEngine::RenderTexture* _UIPPRTCopy; // 0x28
		::UnityEngine::RenderTexture* _UIPPRT; // 0x30
		::UnityEngine::RenderTextureDescriptor _UIPPRTDesc; // 0x38
		::UnityEngine::MaterialAnimationBinding* _MatAniBinding; // 0x68
		::System::Int32 _SrcBlendShaderProperty; // 0x70
		::System::Int32 _DstBlendShaderProperty; // 0x74

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

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetMaterialAnimationBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__SETMATERIALANIMATIONBINDING_OFFSET))(this);
		}

		::System::Void _CheckAllMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__CHECKALLMATERIALS_OFFSET))(this);
		}

		::System::Void _Blit(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Blit_1(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Blit_2(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3, ::UnityEngine::Material* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _Blit_3(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3, ::UnityEngine::Material* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__BLIT_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _DrawUIPP(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3, ::RPG::CustomRP::MaterialInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::MaterialInfo*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _DrawUIPPPatternOnly(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::RenderTexture* a2, ::RPG::CustomRP::MaterialInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::MaterialInfo*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_UIPPFILTERSTACK__DRAWUIPPPATTERNONLY_OFFSET))(this, a1, a2, a3);
		}
	};
}
