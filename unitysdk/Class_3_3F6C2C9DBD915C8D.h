#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/Enum_3_1FF2013A0CC972AB.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3F6C2C9DBD915C8D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2C2CE0)
#define CLASS_3_3F6C2C9DBD915C8D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2C31D0)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1A2C3250)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1A2C3580)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x1A2C2D40)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1A2C3020)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1A2C3730)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1A2C30C0)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1A2C3890)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A2C31C0)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x1A2C2BE0)
#define CLASS_3_3F6C2C9DBD915C8D_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A2C2CD0)
#define CLASS_3_3F6C2C9DBD915C8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C3570)

inline static constexpr unsigned int Class_3_3F6C2C9DBD915C8D_TypeDefinitionIndex = 45372;

class Class_3_3F6C2C9DBD915C8D : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x38
	::Enum_3_1FF2013A0CC972AB Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_3F6C2C9DBD915C8D* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_3F6C2C9DBD915C8D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_3_3F6C2C9DBD915C8D* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_3F6C2C9DBD915C8D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_3F6C2C9DBD915C8D_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
