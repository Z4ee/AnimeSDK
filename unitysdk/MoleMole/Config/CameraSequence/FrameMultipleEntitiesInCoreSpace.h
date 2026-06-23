#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FrameMultiplePointsInCorePolicy; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0xE960BB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xE960C20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0xE960DD0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xE960E70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0xE960D80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xE960E60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0xE960E20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0xE961C00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_2C57E01B5F9E414E_OFFSET UNITYSDK_OFFSET(0xE961D60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_387B219A17E29B4B_OFFSET UNITYSDK_OFFSET(0xE961190)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET UNITYSDK_OFFSET(0xE961CB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_69AF5B580F06E6D0_OFFSET UNITYSDK_OFFSET(0xE961E10)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0xE961AF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0xE961A40)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex = 46326;

	class FrameMultipleEntitiesInCoreSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x11A50);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SubEntityIDs()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x11A58);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_MainEntityID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x11A60);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x11A68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameMultipleEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x11A70);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::Boolean makeContextDependent; // 0x1D
		::System::UInt32 MainEntityID; // 0x20
		::Il2CppArray<::System::UInt32>* SubEntityIDs; // 0x28
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x30
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* mainLocationPolicy; // 0x38
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* subLocationPolicy; // 0x40
		::PipelineCamera::CameraSequence::FrameMultiplePointsInCorePolicy* framePolicy; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET))(this, a1);
		}

		::Nap::NapECS::EcsWorld* Method_5_2C57E01B5F9E414E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_2C57E01B5F9E414E_OFFSET))(this, a1);
		}

		static ::PipelineCamera::WorldBasicCameraData Method_5_387B219A17E29B4B(::MoleMole::Config::CameraSequence::FrameMultipleEntitiesInCoreSpace* a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData a3, ::PipelineCamera::CameraSequence::CameraSequenceContext* a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Config::CameraSequence::FrameMultipleEntitiesInCoreSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_387B219A17E29B4B_OFFSET))(a1, a2, a3, a4);
		}

		::Il2CppArray<::System::UInt32>* Method_5_69AF5B580F06E6D0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMEMULTIPLEENTITIESINCORESPACE_METHOD_5_69AF5B580F06E6D0_OFFSET))(this, a1);
		}
	};
}
