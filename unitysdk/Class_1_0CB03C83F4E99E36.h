#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_3_DEF6B8E2ED2D1FB3;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CB03C83F4E99E36_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x15DF0C90)
#define CLASS_1_0CB03C83F4E99E36_METHOD_1_19AD66D8831DE5A5_OFFSET UNITYSDK_OFFSET(0x15DF0F40)
#define CLASS_1_0CB03C83F4E99E36_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x15DF0E60)
#define CLASS_1_0CB03C83F4E99E36_METHOD_1_4637116F893AAA87_OFFSET UNITYSDK_OFFSET(0x15DF0D30)
#define CLASS_1_0CB03C83F4E99E36_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15DF0CA0)
#define CLASS_1_0CB03C83F4E99E36__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF0CB0)

inline static constexpr unsigned int Class_1_0CB03C83F4E99E36_TypeDefinitionIndex = 70028;

class Class_1_0CB03C83F4E99E36 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x1C

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_DEF6B8E2ED2D1FB3*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_4637116F893AAA87(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_METHOD_1_4637116F893AAA87_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_19AD66D8831DE5A5(::Class_3_DEF6B8E2ED2D1FB3* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_DEF6B8E2ED2D1FB3*))((::PBYTE)hIl2Cpp + CLASS_1_0CB03C83F4E99E36_METHOD_1_19AD66D8831DE5A5_OFFSET))(this, a1);
	}
};
