#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F18D62096DB55023_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AAF8B0)
#define CLASS_1_F18D62096DB55023_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AAF460)
#define CLASS_1_F18D62096DB55023_METHOD_1_68A37D9B80DCB4F0_OFFSET UNITYSDK_OFFSET(0x18AAF2B0)
#define CLASS_1_F18D62096DB55023_METHOD_1_E3B685AB7ADF59C2_OFFSET UNITYSDK_OFFSET(0x18AB0690)
#define CLASS_1_F18D62096DB55023_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18AAF4A0)
#define CLASS_1_F18D62096DB55023__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAEFF0)

inline static constexpr unsigned int Class_1_F18D62096DB55023_TypeDefinitionIndex = 76349;

class Class_1_F18D62096DB55023 : public ::System::Object
{
public:
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x10
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x18
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* KFBHHFIFHCJ; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* AHIFNJJGHOJ; // 0x28
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* HKJNGDKDMNN; // 0x30
	::System::Collections::Generic::HashSet_1<::System::String*>* GPAGLKMGBCK; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68A37D9B80DCB4F0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_METHOD_1_68A37D9B80DCB4F0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_E3B685AB7ADF59C2(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_METHOD_1_E3B685AB7ADF59C2_OFFSET))(this, a1);
	}
};
