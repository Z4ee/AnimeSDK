#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2BE9F3869507F6F_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB4E88D0)
#define CLASS_1_C2BE9F3869507F6F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB4E8890)
#define CLASS_1_C2BE9F3869507F6F_METHOD_1_7613506EC3DD64A1_OFFSET UNITYSDK_OFFSET(0xB7B9D30)
#define CLASS_1_C2BE9F3869507F6F_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4E8AF0)
#define CLASS_1_C2BE9F3869507F6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E8560)

inline static constexpr unsigned int Class_1_C2BE9F3869507F6F_TypeDefinitionIndex = 77307;

class Class_1_C2BE9F3869507F6F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* LAKFMBIIAAK; // 0x10
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* MBBMBOMFIGF; // 0x18
	::Class_3_97041AE90E3B2214* PDENFEFCAGN; // 0x20
	::System::UInt32 IAGMNMEJPMN; // 0x28

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
