#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1088;
class Class_1_54EA20401A112EC2;
class Class_1_87CC187FAC1625A9;

#define CLASS_1_D2577E840516DFAB_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x14C593D0)
#define CLASS_1_D2577E840516DFAB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14C59660)
#define CLASS_1_D2577E840516DFAB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C594E0)
#define CLASS_1_D2577E840516DFAB_METHOD_1_E84ECCF71921A39C_OFFSET UNITYSDK_OFFSET(0x14C59530)
#define CLASS_1_D2577E840516DFAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C596C0)
#define CLASS_1_D2577E840516DFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C596B0)

inline static constexpr unsigned int Class_1_D2577E840516DFAB_TypeDefinitionIndex = 71467;

class Class_1_D2577E840516DFAB : public ::System::Object
{
public:
	static ::Class_1_54EA20401A112EC2** StaticGet_CEFLOIEBOKD()
	{
		return (::Class_1_54EA20401A112EC2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2577E840516DFAB_TypeDefinitionIndex)->GetStaticField(0x422B0);
	}
	::Class_0_16E4307DCC419505_1088* ECEOOJALIMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB__CCTOR_OFFSET))();
	}

	::System::Void Method_1_05679872695EE5DE(::Class_1_87CC187FAC1625A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87CC187FAC1625A9*))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_05679872695EE5DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_1_E84ECCF71921A39C()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_E84ECCF71921A39C_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
