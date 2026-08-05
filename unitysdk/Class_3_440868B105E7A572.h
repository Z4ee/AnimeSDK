#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_298C71723190A13E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_E795C5D5DDF30620;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_440868B105E7A572_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E7D190)
#define CLASS_3_440868B105E7A572_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E7DD80)
#define CLASS_3_440868B105E7A572_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17E7F710)
#define CLASS_3_440868B105E7A572_METHOD_3_7DB601338350FF7F_OFFSET UNITYSDK_OFFSET(0x17E7D1F0)
#define CLASS_3_440868B105E7A572_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x17E7DE00)
#define CLASS_3_440868B105E7A572_METHOD_3_8B9441BA7064FB02_OFFSET UNITYSDK_OFFSET(0x17E7F620)
#define CLASS_3_440868B105E7A572_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17E7DC70)
#define CLASS_3_440868B105E7A572_METHOD_3_B26BEB40BF099BA2_OFFSET UNITYSDK_OFFSET(0x17E7DB20)
#define CLASS_3_440868B105E7A572_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x17E7D0F0)
#define CLASS_3_440868B105E7A572_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E7DD70)
#define CLASS_3_440868B105E7A572_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x17E7F890)
#define CLASS_3_440868B105E7A572__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7F600)

inline static constexpr unsigned int Class_3_440868B105E7A572_TypeDefinitionIndex = 41942;

class Class_3_440868B105E7A572 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_8; // 0x20
	::Class_1_E795C5D5DDF30620* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_9; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_11; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_4; // 0x50
	::System::String* Field_3_7; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_10; // 0x60
	::System::String* Field_3_6; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_15; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x78
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_14; // 0x80
	::Enum_3_298C71723190A13E Field_3_3; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B26BEB40BF099BA2(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_B26BEB40BF099BA2_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_440868B105E7A572* Method_3_8B9441BA7064FB02(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_440868B105E7A572*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_8B9441BA7064FB02_OFFSET))(a1);
	}

	::System::Boolean Method_3_7DB601338350FF7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_7DB601338350FF7F_OFFSET))(this, a1, a2);
	}

	static ::Class_3_440868B105E7A572* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_440868B105E7A572*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
