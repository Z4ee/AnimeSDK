#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_982D1D66E14C5EA5_Enum_3_0F8AFB63992EDBA2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_310;
class Class_1_982D1D66E14C5EA5;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_37F15BE3977B7199_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x13B95C10)
#define CLASS_1_37F15BE3977B7199_METHOD_1_A3885699AC695279_OFFSET UNITYSDK_OFFSET(0x13B95C80)
#define CLASS_1_37F15BE3977B7199__CTOR_OFFSET UNITYSDK_OFFSET(0x13B95D20)

inline static constexpr unsigned int Class_1_37F15BE3977B7199_TypeDefinitionIndex = 62174;

class Class_1_37F15BE3977B7199 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Func_2<::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>*, ::Class_0_16E4307DCC419505_310*>* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::Class_1_982D1D66E14C5EA5_Enum_3_0F8AFB63992EDBA2 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37F15BE3977B7199__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_982D1D66E14C5EA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*))((::PBYTE)hIl2Cpp + CLASS_1_37F15BE3977B7199_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3885699AC695279(::Class_1_982D1D66E14C5EA5* a1, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>*))((::PBYTE)hIl2Cpp + CLASS_1_37F15BE3977B7199_METHOD_1_A3885699AC695279_OFFSET))(this, a1, a2);
	}
};
