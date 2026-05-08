#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_BA3DC9F6185B902E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10DB88C0)
#define CLASS_3_BA3DC9F6185B902E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10DB9240)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10DBA8E0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x10DB8F70)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x10DB92C0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x10DBA6A0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10DB90D0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x10DBA800)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10DB91D0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x10DB87C0)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_E6B050277EBC22A8_OFFSET UNITYSDK_OFFSET(0x10DB8920)
#define CLASS_3_BA3DC9F6185B902E_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10DB88B0)
#define CLASS_3_BA3DC9F6185B902E__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBA630)

inline static constexpr unsigned int Class_3_BA3DC9F6185B902E_TypeDefinitionIndex = 54229;

class Class_3_BA3DC9F6185B902E : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x60
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_7; // 0x70
	::MoleMole::Config::DynamicString* Field_3_9; // 0x78
	::MoleMole::Config::DynamicString* Field_3_10; // 0x80
	::System::Int32 Field_3_0; // 0x88
	::System::Boolean Field_3_11; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_BA3DC9F6185B902E* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_BA3DC9F6185B902E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_BA3DC9F6185B902E* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_BA3DC9F6185B902E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_E6B050277EBC22A8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BA3DC9F6185B902E_METHOD_3_E6B050277EBC22A8_OFFSET))(this, a1, a2);
	}
};
