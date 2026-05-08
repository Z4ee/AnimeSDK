#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_3_32CD58E95ADFF8F5_47;
class Class_3_5F8DAA47ACDB7251;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_8E7B1D1E02ED68D6_OFFSET UNITYSDK_OFFSET(0xF0B6980)
#define CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_C8D6B29192F288ED_1_OFFSET UNITYSDK_OFFSET(0xF0B6F00)
#define CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xF0B6DE0)
#define CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B__CTOR_OFFSET UNITYSDK_OFFSET(0xF0B6970)

inline static constexpr unsigned int Class_1_8D28662CA5857D33_Class_1_BC9CDEB9E865E35B_TypeDefinitionIndex = 73976;

class Class_1_8D28662CA5857D33_Class_1_BC9CDEB9E865E35B : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::System::Action* Field_1_5; // 0x18
	::Class_3_5F8DAA47ACDB7251* Field_1_4; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Boolean Field_1_2; // 0x2C
	::System::Boolean Field_1_1; // 0x2D
	::System::Single Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8E7B1D1E02ED68D6(::Class_3_32CD58E95ADFF8F5_47* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_47*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_8E7B1D1E02ED68D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_1_C8D6B29192F288ED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D28662CA5857D33_CLASS_1_BC9CDEB9E865E35B_METHOD_1_C8D6B29192F288ED_1_OFFSET))(this);
	}
};
