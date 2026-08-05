#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_8C753D48ACBE8750;
class Class_2_CEC585D0736F3660;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8C753D48ACBE8750_CLASS_1_B93B517759E14227_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x950B970)
#define CLASS_2_8C753D48ACBE8750_CLASS_1_B93B517759E14227__CTOR_OFFSET UNITYSDK_OFFSET(0x950B960)

inline static constexpr unsigned int Class_2_8C753D48ACBE8750_Class_1_B93B517759E14227_TypeDefinitionIndex = 53593;

class Class_2_8C753D48ACBE8750_Class_1_B93B517759E14227 : public ::System::Object
{
public:
	::Class_2_8C753D48ACBE8750* Field_1_3; // 0x10
	::System::Action_1<::Class_2_CEC585D0736F3660*>* Field_1_1; // 0x18
	::PipelineCamera::FinalCameraData Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x40
	::Enum_3_F00DC819D834EFD2 Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_B93B517759E14227__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C753D48ACBE8750_CLASS_1_B93B517759E14227_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
