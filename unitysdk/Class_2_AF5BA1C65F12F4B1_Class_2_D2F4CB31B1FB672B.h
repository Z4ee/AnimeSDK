#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_3_3C5ECA5FDADC11D0_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;

#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B_METHOD_2_1ED49F0733B2EF63_OFFSET UNITYSDK_OFFSET(0x185E4050)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x185E3F50)
#define CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B__CTOR_OFFSET UNITYSDK_OFFSET(0x185E4040)

inline static constexpr unsigned int Class_2_AF5BA1C65F12F4B1_Class_2_D2F4CB31B1FB672B_TypeDefinitionIndex = 45967;

class Class_2_AF5BA1C65F12F4B1_Class_2_D2F4CB31B1FB672B : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_3C5ECA5FDADC11D0_1*>*>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_164<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_3C5ECA5FDADC11D0_1*>*>* Method_2_1ED49F0733B2EF63()
	{
		return ((::Class_0_16E4307DCC419505_164<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_3C5ECA5FDADC11D0_1*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF5BA1C65F12F4B1_CLASS_2_D2F4CB31B1FB672B_METHOD_2_1ED49F0733B2EF63_OFFSET))(this);
	}
};
