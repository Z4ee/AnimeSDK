#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC5A7AD641CF932C_CLASS_1_3F53AB6FAC52343C_METHOD_1_ED6E5A92499683B8_OFFSET UNITYSDK_OFFSET(0x14BBBEC0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_3F53AB6FAC52343C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBBEB0)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Class_1_3F53AB6FAC52343C_TypeDefinitionIndex = 79711;

class Class_2_EC5A7AD641CF932C_Class_1_3F53AB6FAC52343C : public ::System::Object
{
public:
	::System::Func_1<::PipelineCamera::WorldBasicCameraData>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_3F53AB6FAC52343C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ED6E5A92499683B8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_3F53AB6FAC52343C_METHOD_1_ED6E5A92499683B8_OFFSET))(this);
	}
};
