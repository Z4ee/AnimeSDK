#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FrameOnePointInFinalPolicy; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x162A17B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x162A1820)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x162A19D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x162A1A70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x162A1980)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x162A1A60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x162A1A20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x162A2360)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_2C57E01B5F9E414E_OFFSET UNITYSDK_OFFSET(0x162A2410)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_2F1705F475D262C6_OFFSET UNITYSDK_OFFSET(0x162A1D60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET UNITYSDK_OFFSET(0x162A22B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A2190)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x162A20F0)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FrameOneEntityInFinalSpace_TypeDefinitionIndex = 61190;

	class FrameOneEntityInFinalSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x44980);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10A00);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10A08);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10A10);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityInFinalSpace_TypeDefinitionIndex)->GetStaticField(0x10A18);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::UInt32 EntityId; // 0x20
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* entityLocation; // 0x30
		::PipelineCamera::CameraSequence::FrameOnePointInFinalPolicy* framePolicy; // 0x38
		::System::Boolean makeContextDependent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET))(this, a1);
		}

		static ::PipelineCamera::WorldBasicCameraData Method_5_2F1705F475D262C6(::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace* a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData a3, ::PipelineCamera::CameraSequence::CameraSequenceContext* a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Config::CameraSequence::FrameOneEntityInFinalSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_2F1705F475D262C6_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_5_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}

		::Nap::NapECS::EcsWorld* Method_5_2C57E01B5F9E414E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEONEENTITYINFINALSPACE_METHOD_5_2C57E01B5F9E414E_OFFSET))(this, a1);
		}
	};
}
