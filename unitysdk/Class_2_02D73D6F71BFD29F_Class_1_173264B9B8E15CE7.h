#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_2_02D73D6F71BFD29F;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_02D73D6F71BFD29F_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10A20250)
#define CLASS_2_02D73D6F71BFD29F_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET UNITYSDK_OFFSET(0x10A20240)

inline static constexpr unsigned int Class_2_02D73D6F71BFD29F_Class_1_173264B9B8E15CE7_TypeDefinitionIndex = 75585;

class Class_2_02D73D6F71BFD29F_Class_1_173264B9B8E15CE7 : public ::System::Object
{
public:
	::Class_2_02D73D6F71BFD29F* Field_1_0; // 0x10
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x18
	::PipelineCamera::FinalCameraData Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x40
	::Enum_3_F00DC819D834EFD2 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02D73D6F71BFD29F_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
