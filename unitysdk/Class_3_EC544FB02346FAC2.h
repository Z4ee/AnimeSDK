#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_EC544FB02346FAC2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165A3540)
#define CLASS_3_EC544FB02346FAC2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165A3D30)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x165A3DB0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x165A4D90)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_7601A481DC41203C_OFFSET UNITYSDK_OFFSET(0x165A33D0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x165A4C30)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x165A3BC0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x165A3AC0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x165A4F40)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x165A3CC0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x165A35A0)
#define CLASS_3_EC544FB02346FAC2_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x165A3530)
#define CLASS_3_EC544FB02346FAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x165A4C20)

inline static constexpr unsigned int Class_3_EC544FB02346FAC2_TypeDefinitionIndex = 71236;

class Class_3_EC544FB02346FAC2 : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x40
	::System::String* Field_3_0; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x50
	::System::String* Field_3_1; // 0x58
	::System::Boolean Field_3_6; // 0x60
	::System::Boolean Field_3_7; // 0x61
	::System::Boolean Field_3_8; // 0x62
	::System::Boolean Field_3_5; // 0x63

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7601A481DC41203C(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_7601A481DC41203C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_EC544FB02346FAC2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_EC544FB02346FAC2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_3_EC544FB02346FAC2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_EC544FB02346FAC2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_EC544FB02346FAC2_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
