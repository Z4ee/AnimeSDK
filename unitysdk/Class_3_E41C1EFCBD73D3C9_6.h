#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_57DFF9560C27A392;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10673D10)
#define CLASS_3_E41C1EFCBD73D3C9_6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10674C90)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10676C60)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_4426A8B0B9C13AC5_OFFSET UNITYSDK_OFFSET(0x10673D70)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x10674A50)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_8B9441BA7064FB02_OFFSET UNITYSDK_OFFSET(0x10676DE0)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x10674D10)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10674B80)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x10673C70)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10674C80)
#define CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x10676BC0)
#define CLASS_3_E41C1EFCBD73D3C9_6__CTOR_OFFSET UNITYSDK_OFFSET(0x10676B40)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_6_TypeDefinitionIndex = 67576;

class Class_3_E41C1EFCBD73D3C9_6 : public ::Class_2_0F138252A5783001
{
public:
	::System::String* Field_3_1; // 0x20
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_2; // 0x28
	::Class_1_57DFF9560C27A392* Field_3_3; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_12; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_3_8; // 0x40
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_18; // 0x48
	::MoleMole::Config::ConfigPosRot* Field_3_15; // 0x50
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_19; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x60
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_17; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_13; // 0x78
	::System::Int32 Field_3_0; // 0x80
	::System::Int32 Field_3_7; // 0x84
	::System::Int32 Field_3_5; // 0x88
	::UnityEngine::Vector3 Field_3_14; // 0x8C
	::System::Int32 Field_3_6; // 0x98
	::System::Int32 Field_3_4; // 0x9C
	::System::Boolean Field_3_9; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_4426A8B0B9C13AC5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_4426A8B0B9C13AC5_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_6* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_6*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_6* Method_3_8B9441BA7064FB02(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_6*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_6_METHOD_3_8B9441BA7064FB02_OFFSET))(a1);
	}
};
