#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F8D7C3AB2C204160.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_417A24669F2F689C;
class Class_2_C3C162BA7C6E9D7E;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_27FA561852AB8513_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x113B69C0)
#define CLASS_2_27FA561852AB8513_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x113B6290)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x113B6310)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x113B6F60)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_169E1B4A7E9FEBB7_OFFSET UNITYSDK_OFFSET(0x113B6D60)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x113B6220)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_C565D63FD72B311A_OFFSET UNITYSDK_OFFSET(0x113B5BF0)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x113B6A20)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x113B6090)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x113B6E00)
#define CLASS_2_27FA561852AB8513_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x113B6120)
#define CLASS_2_27FA561852AB8513_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113B6D50)

inline static constexpr unsigned int Class_2_27FA561852AB8513_1_TypeDefinitionIndex = 48561;

class Class_2_27FA561852AB8513_1 : public ::Class_1_F8D7C3AB2C204160
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_1; // 0x10
	::MoleMole::Config::ConfigEntityAttackProperty* Field_2_3; // 0x18
	::MoleMole::Config::DynamicFloat* Field_2_2; // 0x20
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C565D63FD72B311A(::Class_1_417A24669F2F689C* a1, ::Class_2_C3C162BA7C6E9D7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_C565D63FD72B311A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_1_F8D7C3AB2C204160* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_F8D7C3AB2C204160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_169E1B4A7E9FEBB7(::Class_1_417A24669F2F689C* a1, ::Class_2_C3C162BA7C6E9D7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_169E1B4A7E9FEBB7_OFFSET))(this, a1, a2);
	}

	static ::Class_2_27FA561852AB8513_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_27FA561852AB8513_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_27FA561852AB8513_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_27FA561852AB8513_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_1_METHOD_2_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}
};
