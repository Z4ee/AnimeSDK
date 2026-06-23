#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole { class AdvancedCollisionConfigData; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x162A24C0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x162A2530)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x162A26E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x162A2780)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x162A2690)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x162A2770)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_ISLOOP_OFFSET UNITYSDK_OFFSET(0x162A2730)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_METHOD_5_0FAC3EB0A072AD38_OFFSET UNITYSDK_OFFSET(0x162A2E70)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_METHOD_5_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0x162A2F20)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A2DF0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x162A2D90)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int HandleCameraVolume_TypeDefinitionIndex = 50196;

	class HandleCameraVolume : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_NearClipPlane()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(HandleCameraVolume_TypeDefinitionIndex)->GetStaticField(0x10A20);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_CollisionData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(HandleCameraVolume_TypeDefinitionIndex)->GetStaticField(0x10A28);
		}
		::System::Single playLength; // 0x18
		::System::Single NearClipPlane; // 0x1C
		::MoleMole::AdvancedCollisionConfigData* CollisionData; // 0x20
		::System::Boolean HandleLineOfSightCollision; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::AdvancedCollisionConfigData* Method_5_0FAC3EB0A072AD38(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::MoleMole::AdvancedCollisionConfigData*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_METHOD_5_0FAC3EB0A072AD38_OFFSET))(this, a1);
		}

		::System::Single Method_5_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_HANDLECAMERAVOLUME_METHOD_5_83ED25F6A8C66D20_OFFSET))(this, a1);
		}
	};
}
