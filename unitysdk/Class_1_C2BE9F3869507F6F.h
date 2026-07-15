#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2BE9F3869507F6F_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18592A70)
#define CLASS_1_C2BE9F3869507F6F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18592A30)
#define CLASS_1_C2BE9F3869507F6F_METHOD_1_7613506EC3DD64A1_OFFSET UNITYSDK_OFFSET(0x18592DF0)
#define CLASS_1_C2BE9F3869507F6F_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18592C90)
#define CLASS_1_C2BE9F3869507F6F__CTOR_OFFSET UNITYSDK_OFFSET(0x185926F0)

inline static constexpr unsigned int Class_1_C2BE9F3869507F6F_TypeDefinitionIndex = 73822;

class Class_1_C2BE9F3869507F6F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::Class_3_97041AE90E3B2214* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_C2BE9F3869507F6F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2BE9F3869507F6F_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2BE9F3869507F6F_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2BE9F3869507F6F_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_7613506EC3DD64A1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C2BE9F3869507F6F_METHOD_1_7613506EC3DD64A1_OFFSET))(this, a1, a2);
	}
};
