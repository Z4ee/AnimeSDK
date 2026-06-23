#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CoreDataSequence.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FixedInCorePolicy; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET UNITYSDK_OFFSET(0x106C6A90)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x106C6B00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETRATESCALE_OFFSET UNITYSDK_OFFSET(0x106C6CB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x106C6D50)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETSEQUENCELENGTH_OFFSET UNITYSDK_OFFSET(0x106C6C60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x106C6D40)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_ISLOOP_OFFSET UNITYSDK_OFFSET(0x106C6D00)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x106C7550)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C7470)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C7410)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FixedInCoreSpace_TypeDefinitionIndex = 57150;

	class FixedInCoreSpace : public ::PipelineCamera::CameraSequence::CoreDataSequence
	{
	public:
		static ::System::Func_4<::PipelineCamera::CameraSequence::FixedInCorePolicy*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>** StaticGet_GetDataDelegate()
		{
			return (::System::Func_4<::PipelineCamera::CameraSequence::FixedInCorePolicy*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::PipelineCamera::WorldBasicCameraData>**)Il2CppClass::FromTypeDefinitionIndex(FixedInCoreSpace_TypeDefinitionIndex)->GetStaticField(0x39AF0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_resampleEachTime()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCoreSpace_TypeDefinitionIndex)->GetStaticField(0xE2F0);
		}
		static ::Foundation::Unreal::FName* StaticGet__cacheId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FixedInCoreSpace_TypeDefinitionIndex)->GetStaticField(0xE2F8);
		}
		::PipelineCamera::CameraSequence::FixedInCorePolicy* fixedPolicy; // 0x18
		::System::Single playLength; // 0x20
		::System::Boolean resampleEachTime; // 0x24
		::PipelineCamera::Module::WorldBasicCameraDataChannel activeChannel; // 0x28
		::System::Boolean makeContextDependent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE__CCTOR_OFFSET))();
		}

		::System::Void BuildRuntimeDataProviderDataPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_BUILDRUNTIMEDATAPROVIDERDATAPATH_OFFSET))(this);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetSequenceLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETSEQUENCELENGTH_OFFSET))(this);
		}

		::System::Single GetRateScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETRATESCALE_OFFSET))(this);
		}

		::System::Boolean IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetSequenceDataInternal(::System::Single a1, ::PipelineCamera::WorldBasicCameraData& a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_GETSEQUENCEDATAINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE_METHOD_5_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}
	};
}
