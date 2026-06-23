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
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_298B1D69B7DCE882_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13FB48C0)
#define CLASS_3_298B1D69B7DCE882_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13FB4E20)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x13FB4EA0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x13FB53E0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_7E5FDF2C77FFE88E_OFFSET UNITYSDK_OFFSET(0x13FB45D0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x13FB5590)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0x13FB4920)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x13FB4CB0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x13FB56F0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x13FB4BE0)
#define CLASS_3_298B1D69B7DCE882_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13FB4DB0)
#define CLASS_3_298B1D69B7DCE882__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB53D0)

inline static constexpr unsigned int Class_3_298B1D69B7DCE882_TypeDefinitionIndex = 55824;

class Class_3_298B1D69B7DCE882 : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicString* Field_3_0; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x40
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7E5FDF2C77FFE88E(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_7E5FDF2C77FFE88E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_298B1D69B7DCE882* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_298B1D69B7DCE882*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_298B1D69B7DCE882* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_298B1D69B7DCE882*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_298B1D69B7DCE882_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}
};
