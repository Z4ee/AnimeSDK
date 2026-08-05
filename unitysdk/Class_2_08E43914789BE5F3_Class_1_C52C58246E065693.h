#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_08E43914789BE5F3;
class Class_3_025FF4981524A424_669;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_08E43914789BE5F3_CLASS_1_C52C58246E065693_METHOD_1_BE5DA8F829671365_OFFSET UNITYSDK_OFFSET(0x180E0170)
#define CLASS_2_08E43914789BE5F3_CLASS_1_C52C58246E065693__CTOR_OFFSET UNITYSDK_OFFSET(0x180E0160)

inline static constexpr unsigned int Class_2_08E43914789BE5F3_Class_1_C52C58246E065693_TypeDefinitionIndex = 41121;

class Class_2_08E43914789BE5F3_Class_1_C52C58246E065693 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_669*>* Field_1_0; // 0x10
	::Class_2_08E43914789BE5F3* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3_CLASS_1_C52C58246E065693__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE5DA8F829671365(::System::Boolean a1, ::Class_3_025FF4981524A424_669* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_669*))((::PBYTE)hIl2Cpp + CLASS_2_08E43914789BE5F3_CLASS_1_C52C58246E065693_METHOD_1_BE5DA8F829671365_OFFSET))(this, a1, a2);
	}
};
