#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/Class_2_95C7794E44FC59B2_Struct_2_E68059AB8DC16A3C.h"

class Class_0_16E4307DCC419505_139;
class Class_2_4BE21148C8967B21;
class Class_2_B6AF7DE58A13D4E2_Class_3_193816260C40D177;
class Class_3_1A345EAE5F749316_24;
class Class_3_B388727954800282;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_154;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define CLASS_2_B6AF7DE58A13D4E2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1453CE40)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_042CACFBE48A6E91_OFFSET UNITYSDK_OFFSET(0x1453CFD0)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_06648A56C08A25BB_OFFSET UNITYSDK_OFFSET(0x1453C370)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_106A27B044BAA19B_OFFSET UNITYSDK_OFFSET(0x1453D3B0)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_6A8C1A0BCB187983_OFFSET UNITYSDK_OFFSET(0x1453F000)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_A0223071CB47F295_OFFSET UNITYSDK_OFFSET(0x1453E490)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_B950D774316E97B5_OFFSET UNITYSDK_OFFSET(0x1453E1E0)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_C8334045F249DF96_OFFSET UNITYSDK_OFFSET(0x1453D0E0)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x1453D0D0)
#define CLASS_2_B6AF7DE58A13D4E2_METHOD_2_F8DD904435F624C4_OFFSET UNITYSDK_OFFSET(0x1453E030)
#define CLASS_2_B6AF7DE58A13D4E2_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1453B860)
#define CLASS_2_B6AF7DE58A13D4E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1453CF70)

inline static constexpr unsigned int Class_2_B6AF7DE58A13D4E2_TypeDefinitionIndex = 74971;

class Class_2_B6AF7DE58A13D4E2 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_139* Field_2_8; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_154<::System::Int32>*>* Field_2_7; // 0x68
	::Class_2_4BE21148C8967B21* Field_2_2; // 0x70
	::Class_2_B6AF7DE58A13D4E2_Class_3_193816260C40D177* Field_2_1; // 0x78
	::Class_0_16E4307DCC419505_154<::System::Boolean>* Field_2_4; // 0x80
	::Class_0_16E4307DCC419505_154<::System::Boolean>* Field_2_5; // 0x88
	::Class_0_16E4307DCC41950C_12<::Class_2_95C7794E44FC59B2_Struct_2_E68059AB8DC16A3C>* Field_2_3; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_154<::System::Int32>*>* Field_2_6; // 0x98
	::System::UInt32 Field_2_0; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_042CACFBE48A6E91(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_042CACFBE48A6E91_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_C8334045F249DF96(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_C8334045F249DF96_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_106A27B044BAA19B(::Class_2_B6AF7DE58A13D4E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B6AF7DE58A13D4E2*))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_106A27B044BAA19B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F8DD904435F624C4(::System::UInt32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_F8DD904435F624C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B950D774316E97B5(::Class_3_B388727954800282* a1, ::Class_3_1A345EAE5F749316_24* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B388727954800282*, ::Class_3_1A345EAE5F749316_24*))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_B950D774316E97B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A0223071CB47F295(::Class_2_B6AF7DE58A13D4E2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B6AF7DE58A13D4E2*))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_A0223071CB47F295_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A8C1A0BCB187983(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_6A8C1A0BCB187983_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_06648A56C08A25BB(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B6AF7DE58A13D4E2_METHOD_2_06648A56C08A25BB_OFFSET))(this, a1, a2);
	}
};
