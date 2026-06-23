#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_053D0CC92E4E0F28;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86AA8F306FA75018_METHOD_1_CEA4D82439556AE1_OFFSET UNITYSDK_OFFSET(0x163E3270)
#define CLASS_1_86AA8F306FA75018_METHOD_1_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x163E32D0)
#define CLASS_1_86AA8F306FA75018_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x163E3360)
#define CLASS_1_86AA8F306FA75018_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x163E3350)
#define CLASS_1_86AA8F306FA75018__CTOR_OFFSET UNITYSDK_OFFSET(0x163E3240)

inline static constexpr unsigned int Class_1_86AA8F306FA75018_TypeDefinitionIndex = 77370;

class Class_1_86AA8F306FA75018 : public ::System::Object
{
public:
	::Class_2_053D0CC92E4E0F28* Field_1_5; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Boolean Field_1_4; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::System::Boolean Field_1_3; // 0x22

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86AA8F306FA75018__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CEA4D82439556AE1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86AA8F306FA75018_METHOD_1_CEA4D82439556AE1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86AA8F306FA75018_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86AA8F306FA75018_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_2_053D0CC92E4E0F28* Method_1_E5630A859AA24FB3()
	{
		return ((::Class_2_053D0CC92E4E0F28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86AA8F306FA75018_METHOD_1_E5630A859AA24FB3_OFFSET))(this);
	}
};
