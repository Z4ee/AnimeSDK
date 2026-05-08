#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9DD63F0AB0A921F1;
class Class_2_208CC9941471731A_55;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56EE4890A9A413D3_METHOD_1_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x1733F9C0)
#define CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET UNITYSDK_OFFSET(0x1733F900)
#define CLASS_1_56EE4890A9A413D3__CTOR_OFFSET UNITYSDK_OFFSET(0x1733F870)

inline static constexpr unsigned int Class_1_56EE4890A9A413D3_TypeDefinitionIndex = 16834;

class Class_1_56EE4890A9A413D3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_55*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DC2CCEA1A7E9DE76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_55*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_55*>*&))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D7B57D4A6E55D8F9(::Class_1_9DD63F0AB0A921F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DD63F0AB0A921F1*))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}
};
