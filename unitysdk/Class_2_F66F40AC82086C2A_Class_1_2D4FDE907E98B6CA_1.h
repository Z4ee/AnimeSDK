#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_0F5195356F0210F0;
class Class_2_F66F40AC82086C2A;
class Class_3_C3F0E3B5AB5977AE_29;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1_METHOD_1_150A562242EBFFE2_OFFSET UNITYSDK_OFFSET(0x11986CA0)
#define CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1_METHOD_1_7CBEA8BD2AFB52E0_OFFSET UNITYSDK_OFFSET(0x11986CD0)
#define CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11986C90)

inline static constexpr unsigned int Class_2_F66F40AC82086C2A_Class_1_2D4FDE907E98B6CA_1_TypeDefinitionIndex = 78774;

class Class_2_F66F40AC82086C2A_Class_1_2D4FDE907E98B6CA_1 : public ::System::Object
{
public:
	::System::Func_2<::Class_1_0F5195356F0210F0*, ::System::Boolean>* Field_1_0; // 0x10
	::Class_2_F66F40AC82086C2A* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_150A562242EBFFE2(::Class_3_C3F0E3B5AB5977AE_29* a1, ::Class_3_C3F0E3B5AB5977AE_29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_29*, ::Class_3_C3F0E3B5AB5977AE_29*))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1_METHOD_1_150A562242EBFFE2_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Boolean> Method_1_7CBEA8BD2AFB52E0(::System::Object* a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F66F40AC82086C2A_CLASS_1_2D4FDE907E98B6CA_1_METHOD_1_7CBEA8BD2AFB52E0_OFFSET))(this, a1);
	}
};
