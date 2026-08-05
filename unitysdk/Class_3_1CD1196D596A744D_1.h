#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1CD1196D596A744D_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x157122B0)
#define CLASS_3_1CD1196D596A744D_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15712830)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x15713130)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_5EC289B2C3B1836B_OFFSET UNITYSDK_OFFSET(0x15712310)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x15712FD0)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x15712720)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x15712EF0)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x15712660)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15712820)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x157121C0)
#define CLASS_3_1CD1196D596A744D_1_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x157128B0)
#define CLASS_3_1CD1196D596A744D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15712EE0)

inline static constexpr unsigned int Class_3_1CD1196D596A744D_1_TypeDefinitionIndex = 56117;

class Class_3_1CD1196D596A744D_1 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::String* Field_3_1; // 0x38
	::System::String* Field_3_6; // 0x40
	::System::Boolean Field_3_0; // 0x48
	::System::Single Field_3_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_1CD1196D596A744D_1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_1CD1196D596A744D_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_1CD1196D596A744D_1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_1CD1196D596A744D_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_5EC289B2C3B1836B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_1_METHOD_3_5EC289B2C3B1836B_OFFSET))(this, a1, a2);
	}
};
