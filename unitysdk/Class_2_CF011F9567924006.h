#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_CF011F9567924006_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15FD7D00)
#define CLASS_2_CF011F9567924006_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15FD8420)
#define CLASS_2_CF011F9567924006_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x15FD95E0)
#define CLASS_2_CF011F9567924006_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x15FD84A0)
#define CLASS_2_CF011F9567924006_METHOD_2_4B2A55B54410AF3F_OFFSET UNITYSDK_OFFSET(0x15FD81F0)
#define CLASS_2_CF011F9567924006_METHOD_2_6064CE8C10DDEFF7_OFFSET UNITYSDK_OFFSET(0x15FD7D60)
#define CLASS_2_CF011F9567924006_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x15FD9510)
#define CLASS_2_CF011F9567924006_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15FD8410)
#define CLASS_2_CF011F9567924006_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x15FD7C00)
#define CLASS_2_CF011F9567924006_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x15FD93B0)
#define CLASS_2_CF011F9567924006_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x15FD8310)
#define CLASS_2_CF011F9567924006__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD93A0)

inline static constexpr unsigned int Class_2_CF011F9567924006_TypeDefinitionIndex = 60764;

class Class_2_CF011F9567924006 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::Class_1_4ED21A115C97704D* Field_2_7; // 0x38
	::Class_1_4ED21A115C97704D* Field_2_5; // 0x40
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x48
	::System::String* Field_2_2; // 0x50
	::MoleMole::Config::DynamicInt* Field_2_6; // 0x58
	::MoleMole::Config::DynamicInt* Field_2_3; // 0x60
	::MoleMole::Config::DynamicInt* Field_2_4; // 0x68
	::MoleMole::Config::DynamicFloat* Field_2_1; // 0x70
	::System::Boolean Field_2_11; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B2A55B54410AF3F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_4B2A55B54410AF3F_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_CF011F9567924006* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_CF011F9567924006*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6064CE8C10DDEFF7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_6064CE8C10DDEFF7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_CF011F9567924006* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_CF011F9567924006*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CF011F9567924006_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
