#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

namespace MoleMole { class UserLocalDataItem; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;
template <typename T> class Class_1_BBE667D4A3124D9B;

#define CLASS_2_2F37011D4352AD03_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1546BDB0)
#define CLASS_2_2F37011D4352AD03_METHOD_2_CDB67F8643E189E2_OFFSET UNITYSDK_OFFSET(0x1546BC30)
#define CLASS_2_2F37011D4352AD03_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1546BA60)
#define CLASS_2_2F37011D4352AD03__CTOR_OFFSET UNITYSDK_OFFSET(0x1546BC20)

inline static constexpr unsigned int Class_2_2F37011D4352AD03_TypeDefinitionIndex = 76274;

class Class_2_2F37011D4352AD03 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_164<::System::Boolean>* Field_2_0; // 0x80
	::Class_1_BBE667D4A3124D9B<::System::Int32>* Field_2_3; // 0x88
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_2; // 0x90
	::MoleMole::UserLocalDataItem* Field_2_7; // 0x98
	::Class_0_16E4307DCC419505_159<::System::UInt32>* Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F37011D4352AD03__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F37011D4352AD03_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_CDB67F8643E189E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F37011D4352AD03_METHOD_2_CDB67F8643E189E2_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F37011D4352AD03_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}
};
