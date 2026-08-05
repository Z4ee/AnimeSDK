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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4E0D28727BF76B9A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1787BE50)
#define CLASS_3_4E0D28727BF76B9A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1787C530)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1787C5B0)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1787CC70)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1787CF00)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1787C420)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1787CE20)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1787C520)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x1787BD60)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x1787C330)
#define CLASS_3_4E0D28727BF76B9A_METHOD_3_E061DA2D9F264BD1_OFFSET UNITYSDK_OFFSET(0x1787BEB0)
#define CLASS_3_4E0D28727BF76B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1787CC60)

inline static constexpr unsigned int Class_3_4E0D28727BF76B9A_TypeDefinitionIndex = 58185;

class Class_3_4E0D28727BF76B9A : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_7; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E061DA2D9F264BD1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_E061DA2D9F264BD1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_3_4E0D28727BF76B9A* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_4E0D28727BF76B9A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_4E0D28727BF76B9A* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_4E0D28727BF76B9A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_4E0D28727BF76B9A_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
