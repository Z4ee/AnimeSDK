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
class Class_2_167BB37617B940E3;
class Class_2_828B2711AF58BA0B;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15021D50)
#define CLASS_3_E41C1EFCBD73D3C9_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15022D30)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_42E9D5DC20A616B8_OFFSET UNITYSDK_OFFSET(0x15024D20)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_4426A8B0B9C13AC5_OFFSET UNITYSDK_OFFSET(0x15021DB0)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x15022A90)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_8B9441BA7064FB02_OFFSET UNITYSDK_OFFSET(0x15024C20)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x15022DB0)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x15022BC0)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x15021CB0)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x15022CC0)
#define CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x15024EA0)
#define CLASS_3_E41C1EFCBD73D3C9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15024BA0)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_3_TypeDefinitionIndex = 58674;

class Class_3_E41C1EFCBD73D3C9_3 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_12; // 0x20
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_15; // 0x28
	::Class_1_57DFF9560C27A392* Field_3_0; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x38
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_16; // 0x48
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_17; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0x58
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_14; // 0x60
	::MoleMole::Config::ConfigPosRot* Field_3_11; // 0x68
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_18; // 0x70
	::System::String* Field_3_2; // 0x78
	::UnityEngine::Vector3 Field_3_13; // 0x80
	::System::Boolean Field_3_10; // 0x8C
	::System::Int32 Field_3_7; // 0x90
	::System::Int32 Field_3_4; // 0x94
	::System::Int32 Field_3_3; // 0x98
	::System::Int32 Field_3_6; // 0x9C
	::System::Int32 Field_3_5; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_3* Method_3_8B9441BA7064FB02(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_8B9441BA7064FB02_OFFSET))(a1);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4426A8B0B9C13AC5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_4426A8B0B9C13AC5_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_3* Method_3_42E9D5DC20A616B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_42E9D5DC20A616B8_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_3_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
