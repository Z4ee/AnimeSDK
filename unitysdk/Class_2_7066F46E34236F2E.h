#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13AECAB1AEC5B524.h"

class Class_2_B62C942A2774BBB8;
class Class_3_3F12B5BC6D799204;
class Class_3_7C525C964F57077F_3;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_7066F46E34236F2E_METHOD_2_143284F0F316140B_OFFSET UNITYSDK_OFFSET(0x143FEDA0)
#define CLASS_2_7066F46E34236F2E_METHOD_2_17A8C7BDF50F475B_OFFSET UNITYSDK_OFFSET(0x143FED30)
#define CLASS_2_7066F46E34236F2E__CTOR_OFFSET UNITYSDK_OFFSET(0x143FEF40)

inline static constexpr unsigned int Class_2_7066F46E34236F2E_TypeDefinitionIndex = 89792;

class Class_2_7066F46E34236F2E : public ::Class_1_13AECAB1AEC5B524
{
public:
	::Class_3_3F12B5BC6D799204* Field_2_0; // 0x20
	::System::Double Field_2_5; // 0x28
	::System::Double Field_2_7; // 0x30
	::System::Double Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E__CTOR_OFFSET))(this);
	}

	::System::Object* Method_2_17A8C7BDF50F475B(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E_METHOD_2_17A8C7BDF50F475B_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_7C525C964F57077F_3* Method_2_143284F0F316140B(::System::String* a1)
	{
		return ((::Class_3_7C525C964F57077F_3*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7066F46E34236F2E_METHOD_2_143284F0F316140B_OFFSET))(this, a1);
	}
};
