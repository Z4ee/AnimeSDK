#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_4_9B0F21204B6B14EA_Class_1_43992CBE9462B3FA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x1547A0D0)
#define CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_30003F11260810E0_OFFSET UNITYSDK_OFFSET(0x15479E60)
#define CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1547A280)
#define CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3__CTOR_OFFSET UNITYSDK_OFFSET(0x15479E40)

inline static constexpr unsigned int Class_4_9B0F21204B6B14EA_Class_1_9EB0D920D18C54D3_TypeDefinitionIndex = 49171;

class Class_4_9B0F21204B6B14EA_Class_1_9EB0D920D18C54D3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_4_9B0F21204B6B14EA_Class_1_43992CBE9462B3FA*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::Boolean Field_1_6; // 0x25
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_4_9B0F21204B6B14EA_Class_1_43992CBE9462B3FA*>* a1, ::System::Single a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_4_9B0F21204B6B14EA_Class_1_43992CBE9462B3FA*>*, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_30003F11260810E0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_30003F11260810E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9B0F21204B6B14EA_CLASS_1_9EB0D920D18C54D3_METHOD_1_DD784213055292FB_OFFSET))(this);
	}
};
