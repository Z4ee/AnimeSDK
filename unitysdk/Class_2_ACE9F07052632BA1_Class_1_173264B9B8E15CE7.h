#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
class Class_2_ACE9F07052632BA1;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_ACE9F07052632BA1_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xFD94030)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET UNITYSDK_OFFSET(0xFD94020)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_173264B9B8E15CE7_TypeDefinitionIndex = 53296;

class Class_2_ACE9F07052632BA1_Class_1_173264B9B8E15CE7 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D65512A83CF70AB7*>* Field_1_2; // 0x10
	::Class_2_ACE9F07052632BA1* Field_1_0; // 0x18
	::PipelineCamera::FinalCameraData Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x40
	::Enum_3_F00DC819D834EFD2 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_173264B9B8E15CE7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_173264B9B8E15CE7_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
