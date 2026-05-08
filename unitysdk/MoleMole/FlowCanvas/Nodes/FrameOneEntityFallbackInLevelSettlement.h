#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace MoleMole::FlowCanvas::Nodes { class OpenDirectionResolver; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x117382A0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x11738310)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x117384C0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x11738560)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x11738470)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11738550)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET UNITYSDK_OFFSET(0x11738510)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_1D65B716523BF772_OFFSET UNITYSDK_OFFSET(0x11738840)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x1173A760)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_2C57E01B5F9E414E_OFFSET UNITYSDK_OFFSET(0x1173A2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_481846442A541626_OFFSET UNITYSDK_OFFSET(0x11739E00)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_67A0C6C4B5A4811F_OFFSET UNITYSDK_OFFSET(0x1173A6B0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_834919B5E4C42716_OFFSET UNITYSDK_OFFSET(0x1173A380)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x1173A430)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_C2848DDD4D0013BC_OFFSET UNITYSDK_OFFSET(0x1173A810)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_E086F9C256854350_OFFSET UNITYSDK_OFFSET(0x1173A4E0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x11739C90)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x11739BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex = 69804;

	class FrameOneEntityFallbackInLevelSettlement : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x3A450);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE530);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE538);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE540);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE548);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE550);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityFallbackInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xE558);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::UInt32 EntityId; // 0x20
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x30
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x38
		::System::Single heightRatio; // 0x40
		::UnityEngine::Vector2 screenOffset; // 0x44
		::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver* directionResolver; // 0x50
		::System::Single pitch; // 0x58
		::System::Boolean overridePitch; // 0x5C
		::System::Single fieldOfView; // 0x60
		::System::Boolean makeContextDependent; // 0x64
		::System::Boolean makeAlwaysActive; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean Method_5_481846442A541626(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_481846442A541626_OFFSET))(a1, a2);
		}

		::Nap::NapECS::EcsWorld* Method_5_2C57E01B5F9E414E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_2C57E01B5F9E414E_OFFSET))(this, a1);
		}

		static ::PipelineCamera::WorldBasicCameraData Method_5_1D65B716523BF772(::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement* a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData a3, ::PipelineCamera::CameraSequence::CameraSequenceContext* a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::FlowCanvas::Nodes::FrameOneEntityFallbackInLevelSettlement*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_1D65B716523BF772_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 Method_5_834919B5E4C42716(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_834919B5E4C42716_OFFSET))(this, a1);
		}

		::System::Single Method_5_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		static ::System::Single Method_5_E086F9C256854350(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4, ::Nap::NapECS::EcsWorld* a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_E086F9C256854350_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_67A0C6C4B5A4811F_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}

		static ::System::Single Method_5_C2848DDD4D0013BC(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYFALLBACKINLEVELSETTLEMENT_METHOD_5_C2848DDD4D0013BC_OFFSET))(a1, a2, a3);
		}
	};
}
