#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_656F8176D9E918FF_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD580D80)
#define CLASS_1_656F8176D9E918FF_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xD580DC0)
#define CLASS_1_656F8176D9E918FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD580D40)
#define CLASS_1_656F8176D9E918FF__CCTOR_OFFSET UNITYSDK_OFFSET(0xD580E10)
#define CLASS_1_656F8176D9E918FF__CTOR_OFFSET UNITYSDK_OFFSET(0xD580E00)

inline static constexpr unsigned int Class_1_656F8176D9E918FF_TypeDefinitionIndex = 41122;

class Class_1_656F8176D9E918FF : public ::System::Object
{
public:
	static ::Class_1_656F8176D9E918FF** StaticGet_Field_1_0()
	{
		return (::Class_1_656F8176D9E918FF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_656F8176D9E918FF_TypeDefinitionIndex)->GetStaticField(0x35620);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656F8176D9E918FF_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
