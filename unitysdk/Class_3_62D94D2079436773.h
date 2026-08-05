#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/Enum_3_0C64DF8AF706EDE4.h"
#include "unitysdk/Enum_3_486190703084CEB1.h"
#include "unitysdk/Enum_3_69E704384979AD28.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_62D94D2079436773_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13FDF5C0)
#define CLASS_3_62D94D2079436773_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13FDFBB0)
#define CLASS_3_62D94D2079436773_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x13FE08E0)
#define CLASS_3_62D94D2079436773_METHOD_3_6A6D1ECB93526332_OFFSET UNITYSDK_OFFSET(0x13FDF620)
#define CLASS_3_62D94D2079436773_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x13FE06A0)
#define CLASS_3_62D94D2079436773_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x13FDFAA0)
#define CLASS_3_62D94D2079436773_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x13FE0800)
#define CLASS_3_62D94D2079436773_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x13FDF9D0)
#define CLASS_3_62D94D2079436773_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13FDFBA0)
#define CLASS_3_62D94D2079436773_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x13FDF4C0)
#define CLASS_3_62D94D2079436773_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13FDF5B0)
#define CLASS_3_62D94D2079436773_METHOD_3_F61D777739B33DDF_OFFSET UNITYSDK_OFFSET(0x13FDFC30)
#define CLASS_3_62D94D2079436773__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE0690)

inline static constexpr unsigned int Class_3_62D94D2079436773_TypeDefinitionIndex = 51995;

class Class_3_62D94D2079436773 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x40
	::System::String* Field_3_7; // 0x48
	::Enum_3_0C64DF8AF706EDE4 Field_3_10; // 0x50
	::Enum_3_486190703084CEB1 Field_3_5; // 0x54
	::Enum_3_69E704384979AD28 Field_3_0; // 0x58
	::MoleMole::Config::EntitySkillType Field_3_6; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_6A6D1ECB93526332(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_6A6D1ECB93526332_OFFSET))(this, a1, a2);
	}

	static ::Class_3_62D94D2079436773* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_62D94D2079436773*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F61D777739B33DDF(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_F61D777739B33DDF_OFFSET))(this, a1);
	}

	static ::Class_3_62D94D2079436773* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_62D94D2079436773*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_62D94D2079436773_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
