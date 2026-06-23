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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_1CD1196D596A744D_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12DFDCB0)
#define CLASS_3_1CD1196D596A744D_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12DFE290)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x12DFE310)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12DFEAE0)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_5EC289B2C3B1836B_OFFSET UNITYSDK_OFFSET(0x12DFDD10)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12DFE980)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x12DFE120)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x12DFEC90)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x12DFE060)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12DFE220)
#define CLASS_3_1CD1196D596A744D_3_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x12DFDBC0)
#define CLASS_3_1CD1196D596A744D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12DFE970)

inline static constexpr unsigned int Class_3_1CD1196D596A744D_3_TypeDefinitionIndex = 75516;

class Class_3_1CD1196D596A744D_3 : public ::Class_2_828B2711AF58BA0B
{
public:
	::System::String* Field_3_0; // 0x38
	::System::String* Field_3_3; // 0x40
	::System::Single Field_3_2; // 0x48
	::System::Boolean Field_3_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_1CD1196D596A744D_3* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_1CD1196D596A744D_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_3_1CD1196D596A744D_3* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_1CD1196D596A744D_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_5EC289B2C3B1836B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_5EC289B2C3B1836B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_1CD1196D596A744D_3_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
