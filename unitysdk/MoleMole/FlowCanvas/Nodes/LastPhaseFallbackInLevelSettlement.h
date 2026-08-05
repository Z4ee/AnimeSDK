#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x107DA860)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x107DA8D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x107DAA80)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x107DAB20)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x107DAA30)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x107DAB10)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET UNITYSDK_OFFSET(0x107DAAD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_071154AF842F9F01_OFFSET UNITYSDK_OFFSET(0x107DBE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_2C57E01B5F9E414E_OFFSET UNITYSDK_OFFSET(0x107DAEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_39756DA0CA79F7DE_OFFSET UNITYSDK_OFFSET(0x107DB160)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_67A0C6C4B5A4811F_OFFSET UNITYSDK_OFFSET(0x107DB000)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_834919B5E4C42716_OFFSET UNITYSDK_OFFSET(0x107DAF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_BB75FB1EF4C67D87_OFFSET UNITYSDK_OFFSET(0x107DB0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x107DAD60)
#define MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x107DACA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex = 52711;

	class LastPhaseFallbackInLevelSettlement : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x4E8E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12140);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12148);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OpenDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12150);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12158);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(LastPhaseFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x12160);
		}
		::System::Single playLength; // 0x18
		::System::UInt32 EntityId; // 0x1C
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x20
		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* OpenDirection; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x30
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x38
		::UnityEngine::Vector2 screenOffset; // 0x40
		::System::Boolean makeContextDependent; // 0x48
		::System::Boolean makeAlwaysActive; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::Nap::NapECS::EcsWorld* Method_5_2C57E01B5F9E414E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_2C57E01B5F9E414E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Method_5_834919B5E4C42716(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_834919B5E4C42716_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_67A0C6C4B5A4811F_OFFSET))(this, a1);
		}

		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* Method_5_BB75FB1EF4C67D87(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Foundation::ReferenceValue_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_BB75FB1EF4C67D87_OFFSET))(this, a1);
		}

		static ::PipelineCamera::WorldBasicCameraData Method_5_39756DA0CA79F7DE(::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement* a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData a3, ::PipelineCamera::CameraSequence::CameraSequenceContext* a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::FlowCanvas::Nodes::LastPhaseFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_39756DA0CA79F7DE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Method_5_071154AF842F9F01(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LASTPHASEFALLBACKINLEVELSETTLEMENT_METHOD_5_071154AF842F9F01_OFFSET))(a1, a2, a3);
		}
	};
}
