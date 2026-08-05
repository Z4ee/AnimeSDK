#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace PipelineCamera::CameraSequence { class FixedInCorePolicy; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C_METHOD_1_535D7CBB96507F52_OFFSET UNITYSDK_OFFSET(0xF132390)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF132340)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF132380)

namespace MoleMole::Config::CameraSequence
{
	inline static constexpr unsigned int FixedInCoreSpace___c_TypeDefinitionIndex = 79731;

	class FixedInCoreSpace___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::CameraSequence::FixedInCoreSpace___c** StaticGet___9()
		{
			return (::MoleMole::Config::CameraSequence::FixedInCoreSpace___c**)Il2CppClass::FromTypeDefinitionIndex(FixedInCoreSpace___c_TypeDefinitionIndex)->GetStaticField(0x3C810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C__CTOR_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData Method_1_535D7CBB96507F52(::PipelineCamera::CameraSequence::FixedInCorePolicy* a1, ::System::Single a2, ::PipelineCamera::CameraSequence::CameraSequenceContext* a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::FixedInCorePolicy*, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_FIXEDINCORESPACE___C_METHOD_1_535D7CBB96507F52_OFFSET))(this, a1, a2, a3);
		}
	};
}
