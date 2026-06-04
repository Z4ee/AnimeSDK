#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C123D24D321AA621_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136CF840)
#define CLASS_1_C123D24D321AA621_METHOD_1_5214ACF21A6E25E2_1_OFFSET UNITYSDK_OFFSET(0x136CF770)
#define CLASS_1_C123D24D321AA621_METHOD_1_5214ACF21A6E25E2_OFFSET UNITYSDK_OFFSET(0x136CF6A0)
#define CLASS_1_C123D24D321AA621_METHOD_1_8C247934ED5E7660_1_OFFSET UNITYSDK_OFFSET(0x136CF430)
#define CLASS_1_C123D24D321AA621_METHOD_1_8C247934ED5E7660_OFFSET UNITYSDK_OFFSET(0x136CF1C0)
#define CLASS_1_C123D24D321AA621_METHOD_1_951AC3B01200FF05_1_OFFSET UNITYSDK_OFFSET(0x136CF590)
#define CLASS_1_C123D24D321AA621_METHOD_1_951AC3B01200FF05_OFFSET UNITYSDK_OFFSET(0x136CF320)
#define CLASS_1_C123D24D321AA621_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x136CF130)
#define CLASS_1_C123D24D321AA621__CTOR_OFFSET UNITYSDK_OFFSET(0x136CF900)

inline static constexpr unsigned int Class_1_C123D24D321AA621_TypeDefinitionIndex = 64415;

class Class_1_C123D24D321AA621 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::BaseShaderPropertyTransition*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_8C247934ED5E7660(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_8C247934ED5E7660_OFFSET))(this, a1);
	}

	::System::Void Method_1_951AC3B01200FF05(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_951AC3B01200FF05_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C247934ED5E7660_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_8C247934ED5E7660_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_951AC3B01200FF05_1(::RPG::Client::BaseShaderPropertyTransition* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_951AC3B01200FF05_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5214ACF21A6E25E2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_5214ACF21A6E25E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5214ACF21A6E25E2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_METHOD_1_5214ACF21A6E25E2_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C123D24D321AA621_DISPOSE_OFFSET))(this);
	}
};
