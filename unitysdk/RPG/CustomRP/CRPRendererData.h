#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPRendererDataBase.h"
#include "unitysdk/RPG/CustomRP/DefaultMatType.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/RPG/CustomRP/PipelineMat.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Rendering/CRPPassStencil.h"
#include "unitysdk/UnityEngine/Rendering/CRPPreConfig.h"

namespace RPG::CustomRP { class CRPRendererData_CRPComputeResources; }
namespace RPG::CustomRP { class CRPRendererData_CRPDebugResources; }
namespace RPG::CustomRP { class CRPRendererData_CRPShaderResources; }
namespace RPG::CustomRP { class CRPRendererData_CRPTextureResources; }
namespace RPG::CustomRP { class DebugRTName; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CRPRENDERERDATA_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18EBB4C0)
#define RPG_CUSTOMRP_CRPRENDERERDATA_GETDEFAULTSHADER_OFFSET UNITYSDK_OFFSET(0x18EBB640)
#define RPG_CUSTOMRP_CRPRENDERERDATA_GETMATID_OFFSET UNITYSDK_OFFSET(0x18EAF930)
#define RPG_CUSTOMRP_CRPRENDERERDATA_GETMAT_OFFSET UNITYSDK_OFFSET(0x18EBB490)
#define RPG_CUSTOMRP_CRPRENDERERDATA_INITMAT_1_OFFSET UNITYSDK_OFFSET(0x18EA7E70)
#define RPG_CUSTOMRP_CRPRENDERERDATA_INITMAT_OFFSET UNITYSDK_OFFSET(0x18EBB660)
#define RPG_CUSTOMRP_CRPRENDERERDATA_RELOADRES_OFFSET UNITYSDK_OFFSET(0x18EBB240)
#define RPG_CUSTOMRP_CRPRENDERERDATA_UNITMAT_OFFSET UNITYSDK_OFFSET(0x18EACC20)
#define RPG_CUSTOMRP_CRPRENDERERDATA_UPDATECHAREYESTENCIL_OFFSET UNITYSDK_OFFSET(0x18EBB260)
#define RPG_CUSTOMRP_CRPRENDERERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EBB800)
#define RPG_CUSTOMRP_CRPRENDERERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB760)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererData_TypeDefinitionIndex = 35534;

	class CRPRendererData : public ::RPG::CustomRP::CRPRendererDataBase
	{
	public:
		static ::System::UInt32* StaticGet_Flag_PreLightMRTPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CRPRendererData_TypeDefinitionIndex)->GetStaticField(0x12CC0);
		}
		static ::System::UInt32* StaticGet_Flag_PreAOPass()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CRPRendererData_TypeDefinitionIndex)->GetStaticField(0x12CC4);
		}
		static ::System::UInt32* StaticGet_Flag_ShadowHalfRes()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CRPRendererData_TypeDefinitionIndex)->GetStaticField(0x12CC8);
		}
		static ::System::UInt32* StaticGet_Flag_StencilDebug()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CRPRendererData_TypeDefinitionIndex)->GetStaticField(0x12CCC);
		}
		::RPG::CustomRP::CRPRendererData_CRPShaderResources* shaders; // 0x28
		::RPG::CustomRP::CRPRendererData_CRPComputeResources* computes; // 0x30
		::RPG::CustomRP::CRPRendererData_CRPDebugResources* debugs; // 0x38
		::RPG::CustomRP::CRPRendererData_CRPTextureResources* textures; // 0x40
		::RPG::CustomRP::FlagMask flag; // 0x48
		::System::Collections::Generic::List_1<::RPG::CustomRP::DebugRTName*>* debugRTs; // 0x50
		::UnityEngine::Rendering::CRPPreConfig PreConfig; // 0x58
		::UnityEngine::Material* CharDummyMat; // 0x80
		::UnityEngine::Rendering::CRPPassStencil _CharHairStencil; // 0x88
		::System::Int32 _CharHairShaderID; // 0xFC
		::UnityEngine::PassTagID _HairPass0; // 0x100
		::UnityEngine::PassTagID _HairPass1; // 0x110
		::Il2CppArray<::UnityEngine::Material*>* _materialsCache; // 0x120
		::UnityEngine::Material* DefaultMaterial; // 0x128
		::UnityEngine::Material* UIDefaultMaterial; // 0x130
		::UnityEngine::Material* EmptyDefaultMat; // 0x138
		::UnityEngine::Material* GLESDummyDepth; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA__CCTOR_OFFSET))();
		}

		::System::Void ReloadRes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_RELOADRES_OFFSET))(this);
		}

		::System::Void UpdateCharEyeStencil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_UPDATECHAREYESTENCIL_OFFSET))(this);
		}

		::UnityEngine::Material* GetMat(::RPG::CustomRP::PipelineMat a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::CustomRP::PipelineMat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_GETMAT_OFFSET))(this, a1);
		}

		::System::Int32 GetMatID(::RPG::CustomRP::PipelineMat a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::PipelineMat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_GETMATID_OFFSET))(this, a1);
		}

		::UnityEngine::Material* GetDefaultMaterial(::RPG::CustomRP::DefaultMatType a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::RPG::CustomRP::DefaultMatType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_GETDEFAULTMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Shader* GetDefaultShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_GETDEFAULTSHADER_OFFSET))(this);
		}

		::UnityEngine::Material* InitMat(::UnityEngine::Shader* a1, ::RPG::CustomRP::PipelineMat a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Shader*, ::RPG::CustomRP::PipelineMat))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_INITMAT_OFFSET))(this, a1, a2);
		}

		::System::Void InitMat_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_INITMAT_1_OFFSET))(this);
		}

		::System::Void UnitMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_UNITMAT_OFFSET))(this);
		}
	};
}
