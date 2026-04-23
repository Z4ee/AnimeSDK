#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_943;
class Class_1_54EA20401A112EC2;
class Class_1_87CC187FAC1625A9;

#define CLASS_1_D2577E840516DFAB_METHOD_1_05679872695EE5DE_OFFSET UNITYSDK_OFFSET(0x953CCF0)
#define CLASS_1_D2577E840516DFAB_METHOD_1_738C614D7D7CF947_OFFSET UNITYSDK_OFFSET(0x953CE50)
#define CLASS_1_D2577E840516DFAB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x953CE00)
#define CLASS_1_D2577E840516DFAB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x953CF40)
#define CLASS_1_D2577E840516DFAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x953CF60)
#define CLASS_1_D2577E840516DFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x953CF50)

inline static constexpr unsigned int Class_1_D2577E840516DFAB_TypeDefinitionIndex = 65911;

class Class_1_D2577E840516DFAB : public ::System::Object
{
public:
	static ::Class_1_54EA20401A112EC2** StaticGet_Field_1_1()
	{
		return (::Class_1_54EA20401A112EC2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2577E840516DFAB_TypeDefinitionIndex)->GetStaticField(0x56F50);
	}
	::Class_0_16E4307DCC419505_943* Field_1_0; // 0x10

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

	::System::Nullable_1<::System::Single> Method_1_738C614D7D7CF947()
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_738C614D7D7CF947_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2577E840516DFAB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
