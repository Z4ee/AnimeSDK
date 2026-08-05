#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x10F87B90)
#define CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F_METHOD_1_CE712F70D20B509F_OFFSET UNITYSDK_OFFSET(0x10F87A40)
#define CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F__CTOR_OFFSET UNITYSDK_OFFSET(0x10F87A30)

inline static constexpr unsigned int Class_4_E97E5B843CDE4EAE_Class_1_792481A7D423FD3F_TypeDefinitionIndex = 89927;

class Class_4_E97E5B843CDE4EAE_Class_1_792481A7D423FD3F : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0x10
	::MoleMole::Utils::INapCameraSequenceDataTableEntry* Field_1_6; // 0x40
	::MoleMole::EntityHandle Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CE712F70D20B509F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F_METHOD_1_CE712F70D20B509F_OFFSET))(this, a1);
	}

	::System::Void Method_1_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E97E5B843CDE4EAE_CLASS_1_792481A7D423FD3F_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
	}
};
