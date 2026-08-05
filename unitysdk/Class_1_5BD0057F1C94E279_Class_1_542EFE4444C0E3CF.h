#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define CLASS_1_5BD0057F1C94E279_CLASS_1_542EFE4444C0E3CF_METHOD_1_73C24450D1F1DFB6_OFFSET UNITYSDK_OFFSET(0x15DC8940)
#define CLASS_1_5BD0057F1C94E279_CLASS_1_542EFE4444C0E3CF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC4B80)

inline static constexpr unsigned int Class_1_5BD0057F1C94E279_Class_1_542EFE4444C0E3CF_TypeDefinitionIndex = 40637;

class Class_1_5BD0057F1C94E279_Class_1_542EFE4444C0E3CF : public ::System::Object
{
public:
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_CLASS_1_542EFE4444C0E3CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73C24450D1F1DFB6(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + CLASS_1_5BD0057F1C94E279_CLASS_1_542EFE4444C0E3CF_METHOD_1_73C24450D1F1DFB6_OFFSET))(this, a1);
	}
};
