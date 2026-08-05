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

#define CLASS_2_27FA561852AB8513_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1619A2B0)
#define CLASS_2_27FA561852AB8513_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16199B90)
#define CLASS_2_27FA561852AB8513_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1619A7B0)
#define CLASS_2_27FA561852AB8513_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x16199C10)
#define CLASS_2_27FA561852AB8513_METHOD_2_169E1B4A7E9FEBB7_OFFSET UNITYSDK_OFFSET(0x1619A960)
#define CLASS_2_27FA561852AB8513_METHOD_2_41197AC0F3AC81AD_OFFSET UNITYSDK_OFFSET(0x16199610)
#define CLASS_2_27FA561852AB8513_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16199B80)
#define CLASS_2_27FA561852AB8513_METHOD_2_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x1619A310)
#define CLASS_2_27FA561852AB8513_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x161999F0)
#define CLASS_2_27FA561852AB8513_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1619A650)
#define CLASS_2_27FA561852AB8513_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x16199A80)
#define CLASS_2_27FA561852AB8513__CTOR_OFFSET UNITYSDK_OFFSET(0x1619A640)

inline static constexpr unsigned int Class_2_27FA561852AB8513_TypeDefinitionIndex = 43220;

class Class_2_27FA561852AB8513 : public ::Class_1_F8D7C3AB2C204160
{
public:
	::MoleMole::Config::ConfigEntityAttackProperty* Field_2_5; // 0x10
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x18
	::MoleMole::Config::DynamicFloat* Field_2_6; // 0x20
	::MoleMole::Config::DynamicFloat* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_41197AC0F3AC81AD(::Class_1_417A24669F2F689C* a1, ::Class_2_C3C162BA7C6E9D7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_41197AC0F3AC81AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_1_F8D7C3AB2C204160* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_F8D7C3AB2C204160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_27FA561852AB8513* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_27FA561852AB8513*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_2_27FA561852AB8513* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_27FA561852AB8513*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_169E1B4A7E9FEBB7(::Class_1_417A24669F2F689C* a1, ::Class_2_C3C162BA7C6E9D7E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_417A24669F2F689C*, ::Class_2_C3C162BA7C6E9D7E*))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_169E1B4A7E9FEBB7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_27FA561852AB8513_METHOD_2_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}
};
