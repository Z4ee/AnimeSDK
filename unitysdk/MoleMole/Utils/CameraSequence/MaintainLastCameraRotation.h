#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/EulerRotationChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x11BED2C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x11BED330)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_LASTCAMERADATA_OFFSET UNITYSDK_OFFSET(0x11BED650)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_MAINTAINCHANNEL_OFFSET UNITYSDK_OFFSET(0x11BED490)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_OVERRIDEEULER_OFFSET UNITYSDK_OFFSET(0x11BED540)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x11BECE90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x11BECF30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x11BECE40)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x11BECF20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_ISLOOP_OFFSET UNITYSDK_OFFSET(0x11BECEE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BED7C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11BED760)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int MaintainLastCameraRotation_TypeDefinitionIndex = 81469;

	class MaintainLastCameraRotation : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_3<::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation*, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::UnityEngine::Quaternion>** StaticGet_GetDesiredRotation()
		{
			return (::System::Func_3<::MoleMole::Utils::CameraSequence::MaintainLastCameraRotation*, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation_TypeDefinitionIndex)->GetStaticField(0x435B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation_TypeDefinitionIndex)->GetStaticField(0x103E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maintainChannel()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation_TypeDefinitionIndex)->GetStaticField(0x103E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_overrideEuler()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation_TypeDefinitionIndex)->GetStaticField(0x103F0);
		}
		static ::Foundation::Unreal::FName* StaticGet_CacheId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MaintainLastCameraRotation_TypeDefinitionIndex)->GetStaticField(0x103F8);
		}
		::PipelineCamera::EulerRotationChannel maintainChannel; // 0x18
		::System::Boolean makeContextDependent; // 0x1C
		::UnityEngine::Vector3 overrideEuler; // 0x20
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION__CCTOR_OFFSET))();
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single sampleTime, ::PipelineCamera::WorldBasicCameraData& data, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_GETSEQUENCEDATAINTERNAL_OFFSET))(this, sampleTime, data, context);
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::PipelineCamera::EulerRotationChannel fetch_maintainChannel(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::EulerRotationChannel(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_MAINTAINCHANNEL_OFFSET))(this, context);
		}

		::UnityEngine::Vector3 fetch_overrideEuler(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_OVERRIDEEULER_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData fetch_LastCameraData(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MAINTAINLASTCAMERAROTATION_FETCH_LASTCAMERADATA_OFFSET))(this, context);
		}
	};
}
