#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_928C08D2C6F9891E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x153E03F0)
#define CLASS_3_928C08D2C6F9891E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x153E0B30)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x153E0BB0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x153E14F0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_530A216587216D69_OFFSET UNITYSDK_OFFSET(0x153E0450)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x153E16A0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x153E09C0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x153E08C0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x153E1800)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x153E0AC0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x153E02F0)
#define CLASS_3_928C08D2C6F9891E__CTOR_OFFSET UNITYSDK_OFFSET(0x153E14E0)

inline static constexpr unsigned int Class_3_928C08D2C6F9891E_TypeDefinitionIndex = 39699;

class Class_3_928C08D2C6F9891E : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicInt* Field_3_3; // 0x38
	::MoleMole::Config::DynamicString* Field_3_1; // 0x40
	::Class_1_4ED21A115C97704D* Field_3_4; // 0x48
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x50
	::MoleMole::Config::ConfigPosRot* Field_3_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_928C08D2C6F9891E* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_928C08D2C6F9891E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_530A216587216D69(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_530A216587216D69_OFFSET))(this, a1, a2);
	}

	static ::Class_3_928C08D2C6F9891E* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_928C08D2C6F9891E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
