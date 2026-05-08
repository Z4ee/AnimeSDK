#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_74;
class Class_1_43BD383C98B4C0C5_9;
class Class_1_F6EFE58E4BDF83D9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_28D52C12397465CC_METHOD_1_1AF0767650E4248E_OFFSET UNITYSDK_OFFSET(0x1B78EF10)
#define CLASS_1_28D52C12397465CC_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1B78E6A0)
#define CLASS_1_28D52C12397465CC_METHOD_1_929AAC974E4E8180_OFFSET UNITYSDK_OFFSET(0x1B78E6B0)
#define CLASS_1_28D52C12397465CC_METHOD_1_A5A825AF45A8DD81_OFFSET UNITYSDK_OFFSET(0x1B78EA70)
#define CLASS_1_28D52C12397465CC_METHOD_1_CDF167F8E11698DD_OFFSET UNITYSDK_OFFSET(0x1B78D990)
#define CLASS_1_28D52C12397465CC_METHOD_1_DDD8C5A34E7212A5_OFFSET UNITYSDK_OFFSET(0x1B78DF60)
#define CLASS_1_28D52C12397465CC_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1B78E650)
#define CLASS_1_28D52C12397465CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78D980)

inline static constexpr unsigned int Class_1_28D52C12397465CC_TypeDefinitionIndex = 26185;

class Class_1_28D52C12397465CC : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_9* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC__CTOR_OFFSET))(this);
	}

	::Class_1_F6EFE58E4BDF83D9* Method_1_CDF167F8E11698DD(::System::String* a1)
	{
		return ((::Class_1_F6EFE58E4BDF83D9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_CDF167F8E11698DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_43BD383C98B4C0C5_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_9*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_43BD383C98B4C0C5_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_43BD383C98B4C0C5_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_929AAC974E4E8180(::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_929AAC974E4E8180_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DDD8C5A34E7212A5(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_DDD8C5A34E7212A5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1AF0767650E4248E(::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>* a1, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_1AF0767650E4248E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A5A825AF45A8DD81(::Class_0_16E4307DCC419505_74* a1, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>* a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_74*, ::System::Collections::Generic::Stack_1<::Class_0_16E4307DCC419505_74*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_74*>*))((::PBYTE)hIl2Cpp + CLASS_1_28D52C12397465CC_METHOD_1_A5A825AF45A8DD81_OFFSET))(this, a1, a2, a3);
	}
};
