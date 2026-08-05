#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_6205A6C2B1CC7E97;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_836DAE88F969DE53_19_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C74900)
#define CLASS_3_836DAE88F969DE53_19_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18C74DB0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x18C75210)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x18C74E30)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_766ADA8774C79AAE_OFFSET UNITYSDK_OFFSET(0x148E0500)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x18C754A0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x18C74CA0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x18C753C0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x18C74BE0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18C74DA0)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x148E0400)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x18C74960)
#define CLASS_3_836DAE88F969DE53_19_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x18C75200)
#define CLASS_3_836DAE88F969DE53_19__CTOR_OFFSET UNITYSDK_OFFSET(0x18C751F0)

inline static constexpr unsigned int Class_3_836DAE88F969DE53_19_TypeDefinitionIndex = 53321;

class Class_3_836DAE88F969DE53_19 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicString* Field_3_0; // 0x38
	::Class_1_6205A6C2B1CC7E97* Field_3_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_766ADA8774C79AAE()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_766ADA8774C79AAE_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	static ::Class_3_836DAE88F969DE53_19* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_836DAE88F969DE53_19*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_836DAE88F969DE53_19* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_836DAE88F969DE53_19*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_836DAE88F969DE53_19_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
