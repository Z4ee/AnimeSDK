#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4ED21A115C97704D;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define CLASS_1_7BCD4A4042151E0C_METHOD_1_58219B932333F30A_OFFSET UNITYSDK_OFFSET(0x14A2A510)
#define CLASS_1_7BCD4A4042151E0C_METHOD_1_A748638D8E47518F_OFFSET UNITYSDK_OFFSET(0x14A2A790)
#define CLASS_1_7BCD4A4042151E0C_METHOD_1_B2942C386AE36637_OFFSET UNITYSDK_OFFSET(0x14A2A6C0)
#define CLASS_1_7BCD4A4042151E0C_METHOD_1_D502697A9BCF8664_OFFSET UNITYSDK_OFFSET(0x14A2A5F0)

inline static constexpr unsigned int Class_1_7BCD4A4042151E0C_TypeDefinitionIndex = 53883;

class Class_1_7BCD4A4042151E0C : public ::System::Object
{
public:
	static ::MoleMole::Config::DynamicFloat* Method_1_58219B932333F30A(::MoleMole::Config::DynamicFloat* a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Config::DynamicFloat*, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BCD4A4042151E0C_METHOD_1_58219B932333F30A_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicString* Method_1_D502697A9BCF8664(::MoleMole::Config::DynamicString* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicString*(*)(::MoleMole::Config::DynamicString*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BCD4A4042151E0C_METHOD_1_D502697A9BCF8664_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_4ED21A115C97704D* Method_1_B2942C386AE36637(::Class_1_4ED21A115C97704D* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::Class_1_4ED21A115C97704D*(*)(::Class_1_4ED21A115C97704D*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BCD4A4042151E0C_METHOD_1_B2942C386AE36637_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::DynamicInt* Method_1_A748638D8E47518F(::MoleMole::Config::DynamicInt* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::String* a4)
	{
		return ((::MoleMole::Config::DynamicInt*(*)(::MoleMole::Config::DynamicInt*, ::System::Int32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BCD4A4042151E0C_METHOD_1_A748638D8E47518F_OFFSET))(a1, a2, a3, a4);
	}
};
