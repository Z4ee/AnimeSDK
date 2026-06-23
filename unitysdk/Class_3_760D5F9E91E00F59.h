#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/Enum_3_04C7107E01AF7B0E.h"
#include "unitysdk/Enum_3_0C64DF8AF706EDE4.h"
#include "unitysdk/Enum_3_69E704384979AD28.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_760D5F9E91E00F59_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x126B7940)
#define CLASS_3_760D5F9E91E00F59_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126B7FB0)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x126B8B80)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_6A6D1ECB93526332_OFFSET UNITYSDK_OFFSET(0x126B79A0)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x126B8030)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x126B8A20)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x126B7E40)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x126B8940)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x126B7D80)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x126B7F40)
#define CLASS_3_760D5F9E91E00F59_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x126B7850)
#define CLASS_3_760D5F9E91E00F59__CTOR_OFFSET UNITYSDK_OFFSET(0x126B8930)

inline static constexpr unsigned int Class_3_760D5F9E91E00F59_TypeDefinitionIndex = 46660;

class Class_3_760D5F9E91E00F59 : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x40
	::Enum_3_04C7107E01AF7B0E Field_3_1; // 0x48
	::Enum_3_0C64DF8AF706EDE4 Field_3_5; // 0x4C
	::Enum_3_69E704384979AD28 Field_3_2; // 0x50
	::System::Boolean Field_3_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_6A6D1ECB93526332(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_6A6D1ECB93526332_OFFSET))(this, a1, a2);
	}

	static ::Class_3_760D5F9E91E00F59* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_760D5F9E91E00F59*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_8741A88D50268453_OFFSET))(this, a1);
	}

	static ::Class_3_760D5F9E91E00F59* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_760D5F9E91E00F59*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_760D5F9E91E00F59_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
