#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0xF403730)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET UNITYSDK_OFFSET(0xF403650)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET UNITYSDK_OFFSET(0xF4036B0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0xF403B90)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET UNITYSDK_OFFSET(0xF403CB0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0xF4032B0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0xF403B80)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xF402F70)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xF403600)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0xF403C40)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0xF4032C0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0xF403B30)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0xF402F80)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF403E20)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF403CF0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodRuntimeData_TypeDefinitionIndex = 47436;

	class NPCCrowdLodRuntimeData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_cache()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodRuntimeData_TypeDefinitionIndex)->GetStaticField(0x2F780);
		}
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* oldLODRenderers; // 0x10
		::System::Collections::Generic::List_1<::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*>* lastAssetRef; // 0x18
		::System::Action* lodInitCallback; // 0x20
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* curLODRenderers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* LODTickBatchCount; // 0x30
		::NPCCrowd::Lod::ELODLevel nextLodLevel; // 0x38
		::NPCCrowd::Lod::ELODLevel physicsLodLevel; // 0x3C
		::System::Single lastMatCmpAlphaValue; // 0x40
		::NPCCrowd::Lod::ELODLevel _forceLodLevel; // 0x44
		::NPCCrowd::Lod::ELODLevel _lodLevel; // 0x48
		::System::Boolean bOverrideFadeTrigger; // 0x4C
		::System::Boolean lodChangedCurFrame; // 0x4D
		::System::Boolean bOverrideHide; // 0x4E
		::System::Boolean isVisible; // 0x4F
		::System::Boolean lodPreloadFinished; // 0x50
		::System::Boolean _isChangeing; // 0x51
		::System::Boolean bOverrideShow; // 0x52
		::System::Boolean bOverrideFade; // 0x53

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET))();
		}

		::NPCCrowd::Lod::ELODLevel get_lodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET))(this);
		}

		::System::Void set_lodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET))(this, value);
		}

		::NPCCrowd::Lod::ELODLevel get_forceLodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET))(this);
		}

		::System::Void set_forceLodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET))(this, value);
		}

		::System::Void OnVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Boolean ConsumeOverrideFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET))(this);
		}

		::System::Void ForceLOD0(::System::Boolean enable, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET))(this, enable, fade);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET))(this);
		}

		::System::Boolean get_isChangeing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET))(this);
		}

		::System::Void set_isChangeing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET))(this, value);
		}

		::System::Boolean GetLODTickBatch(::System::Int32 handler, ::System::UInt32& batch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET))(this, handler, batch);
		}

		::System::Void SetLODTickBatch(::System::Int32 handler, ::System::UInt32 LODTickBatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET))(this, handler, LODTickBatch);
		}

		::System::Int32 GetLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET))(this);
		}
	};
}
