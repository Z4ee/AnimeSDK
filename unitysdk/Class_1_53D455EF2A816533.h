#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_FD51057495DB654F;
class Class_3_7E25C9E6907AC48F;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53D455EF2A816533_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18C4F490)
#define CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18C51920)
#define CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x18C51340)
#define CLASS_1_53D455EF2A816533_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x18C53170)
#define CLASS_1_53D455EF2A816533_ONHIT_OFFSET UNITYSDK_OFFSET(0x18C51A40)
#define CLASS_1_53D455EF2A816533__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4F420)

inline static constexpr unsigned int Class_1_53D455EF2A816533_TypeDefinitionIndex = 39422;

class Class_1_53D455EF2A816533 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_FD51057495DB654F*>* Field_1_0; // 0x10
	::Class_3_7E25C9E6907AC48F* Field_1_1; // 0x18
	::Class_1_D33B7D6901AE39E9* Field_1_2; // 0x20
	::Entitas::IMatcher_1<::Class_2_FD51057495DB654F*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnHit(::Class_2_FD51057495DB654F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_ONHIT_OFFSET))(this, a1);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}
};
