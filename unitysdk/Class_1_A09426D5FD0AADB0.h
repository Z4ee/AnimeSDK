#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBA8C9C89C53F81F_1;
class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_A09426D5FD0AADB0_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB2CA1D0)
#define CLASS_1_A09426D5FD0AADB0_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB2CA190)
#define CLASS_1_A09426D5FD0AADB0_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2CA7A0)
#define CLASS_1_A09426D5FD0AADB0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C9FD0)

inline static constexpr unsigned int Class_1_A09426D5FD0AADB0_TypeDefinitionIndex = 72296;

class Class_1_A09426D5FD0AADB0 : public ::System::Object
{
public:
	::Class_3_97041AE90E3B2214* Field_1_0; // 0x10
	::Entitas::IGroup_1<::Class_2_5436AF4270279182*>* Field_1_1; // 0x18
	::Class_1_EBA8C9C89C53F81F_1* Field_1_2; // 0x20

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_A09426D5FD0AADB0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A09426D5FD0AADB0_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A09426D5FD0AADB0_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A09426D5FD0AADB0_TEARDOWN_OFFSET))(this);
	}
};
