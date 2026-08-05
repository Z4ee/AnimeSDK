#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9976BED4AF5CE21D;
class Class_3_025FF4981524A424_328;
namespace System { class String; }

#define CLASS_2_9976BED4AF5CE21D_CLASS_1_E7B37764A56D3855_METHOD_1_838A7B6FC3359269_OFFSET UNITYSDK_OFFSET(0x15670C00)
#define CLASS_2_9976BED4AF5CE21D_CLASS_1_E7B37764A56D3855__CTOR_OFFSET UNITYSDK_OFFSET(0x15670BF0)

inline static constexpr unsigned int Class_2_9976BED4AF5CE21D_Class_1_E7B37764A56D3855_TypeDefinitionIndex = 69037;

class Class_2_9976BED4AF5CE21D_Class_1_E7B37764A56D3855 : public ::System::Object
{
public:
	::Class_2_9976BED4AF5CE21D* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9976BED4AF5CE21D_CLASS_1_E7B37764A56D3855__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_838A7B6FC3359269(::Class_3_025FF4981524A424_328* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_328*))((::PBYTE)hIl2Cpp + CLASS_2_9976BED4AF5CE21D_CLASS_1_E7B37764A56D3855_METHOD_1_838A7B6FC3359269_OFFSET))(this, a1);
	}
};
