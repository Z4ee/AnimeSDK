#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3E54C43FE2F3945;
class Class_2_208CC9941471731A_709;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56EE4890A9A413D3_METHOD_1_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x18EEC640)
#define CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET UNITYSDK_OFFSET(0x18EECD60)
#define CLASS_1_56EE4890A9A413D3__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEC5B0)

inline static constexpr unsigned int Class_1_56EE4890A9A413D3_TypeDefinitionIndex = 17943;

class Class_1_56EE4890A9A413D3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_709*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7B57D4A6E55D8F9(::Class_1_E3E54C43FE2F3945* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3E54C43FE2F3945*))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DC2CCEA1A7E9DE76(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_709*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_709*>*&))((::PBYTE)hIl2Cpp + CLASS_1_56EE4890A9A413D3_METHOD_1_DC2CCEA1A7E9DE76_OFFSET))(this, a1, a2);
	}
};
