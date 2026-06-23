#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FrameTwoPointsInCorePolicy; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x1AA47560)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1AA475D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x1AA47780)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AA47810)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x1AA47730)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1AA47FA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1AA477D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x1AA48300)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_2C57E01B5F9E414E_OFFSET UNITYSDK_OFFSET(0x1AA481A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_1_OFFSET UNITYSDK_OFFSET(0x1AA483B0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET UNITYSDK_OFFSET(0x1AA48250)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_D515E03CB8ED3660_OFFSET UNITYSDK_OFFSET(0x1AA47B00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA48060)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA47FB0)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex = 53365;

	class FrameTwoEntitiesInCoreSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_5<::MoleMole::Config::CameraSequence::FrameTwoEntitiesInCoreSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_5<::MoleMole::Config::CameraSequence::FrameTwoEntitiesInCoreSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x42BA0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SubEntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x102A0);
		}
		static ::Foundation::Unreal::FName* StaticGet_CachedId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x102A8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x102B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x102B8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_MainEntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameTwoEntitiesInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x102C0);
		}
		::System::Single playLength; // 0x18
		::System::Boolean resampleEachTime; // 0x1C
		::System::Boolean makeContextDependent; // 0x1D
		::System::UInt32 MainEntityId; // 0x20
		::System::UInt32 SubEntityId; // 0x24
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x28
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* mainLocation; // 0x30
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* subLocation; // 0x38
		::PipelineCamera::CameraSequence::FrameTwoPointsInCorePolicy* framePolicy; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_ISLOOP_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorld* Method_5_2C57E01B5F9E414E(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_2C57E01B5F9E414E_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}

		::System::UInt32 Method_5_67A0C6C4B5A4811F_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_67A0C6C4B5A4811F_1_OFFSET))(this, a1);
		}

		static ::PipelineCamera::WorldBasicCameraData Method_5_D515E03CB8ED3660(::MoleMole::Config::CameraSequence::FrameTwoEntitiesInCoreSpace* a1, ::System::Single a2, ::PipelineCamera::WorldBasicCameraData a3, ::PipelineCamera::CameraSequence::CameraSequenceContext* a4)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Config::CameraSequence::FrameTwoEntitiesInCoreSpace*, ::System::Single, ::PipelineCamera::WorldBasicCameraData, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FRAMETWOENTITIESINCORESPACE_METHOD_5_D515E03CB8ED3660_OFFSET))(a1, a2, a3, a4);
		}
	};
}
