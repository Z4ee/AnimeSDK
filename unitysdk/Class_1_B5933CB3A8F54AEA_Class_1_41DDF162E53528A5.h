#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4DE9364B75C28A4E;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_41DDF162E53528A5_METHOD_1_36AEB9B72F040BCB_OFFSET UNITYSDK_OFFSET(0x14499AF0)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_41DDF162E53528A5__CTOR_OFFSET UNITYSDK_OFFSET(0x14499AE0)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_41DDF162E53528A5_TypeDefinitionIndex = 55325;

class Class_1_B5933CB3A8F54AEA_Class_1_41DDF162E53528A5 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* Field_1_1; // 0x10
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_41DDF162E53528A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36AEB9B72F040BCB(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_41DDF162E53528A5_METHOD_1_36AEB9B72F040BCB_OFFSET))(this, a1);
	}
};
