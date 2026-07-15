#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_40CD5CE8474BAA94;
class Class_2_AEE59ED8DADEC1A1;
class Class_3_C71DDDA66421C541;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7428545D46EEA828_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17603330)
#define CLASS_2_7428545D46EEA828_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x176032C0)
#define CLASS_2_7428545D46EEA828_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x17603000)
#define CLASS_2_7428545D46EEA828__CTOR_OFFSET UNITYSDK_OFFSET(0x17602FB0)

inline static constexpr unsigned int Class_2_7428545D46EEA828_TypeDefinitionIndex = 57647;

class Class_2_7428545D46EEA828 : public ::Class_1_2231FD56C070349F
{
public:
	::Class_2_AEE59ED8DADEC1A1* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_1; // 0x20
	::Class_1_40CD5CE8474BAA94* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::Class_3_C71DDDA66421C541* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
