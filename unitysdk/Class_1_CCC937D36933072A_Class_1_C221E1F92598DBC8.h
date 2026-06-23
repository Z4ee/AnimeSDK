#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CCC937D36933072A_Class_1_C221E1F92598DBC8_Struct_2_93D4D1E4818FE7DC.h"
#include "unitysdk/System/Object.h"

class Class_1_CCC937D36933072A_Class_1_E31CA74ADC7985C5;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8_METHOD_1_05AE037AF851A55A_OFFSET UNITYSDK_OFFSET(0x13425600)
#define CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x134258A0)
#define CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8__CTOR_OFFSET UNITYSDK_OFFSET(0x134255A0)

inline static constexpr unsigned int Class_1_CCC937D36933072A_Class_1_C221E1F92598DBC8_TypeDefinitionIndex = 73895;

class Class_1_CCC937D36933072A_Class_1_C221E1F92598DBC8 : public ::System::Object
{
public:
	::Class_1_CCC937D36933072A_Class_1_E31CA74ADC7985C5* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CCC937D36933072A_Class_1_C221E1F92598DBC8_Struct_2_93D4D1E4818FE7DC>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_05AE037AF851A55A(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8_METHOD_1_05AE037AF851A55A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC937D36933072A_CLASS_1_C221E1F92598DBC8_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}
};
