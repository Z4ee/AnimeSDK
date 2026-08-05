#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EF896E1D0FDF202A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14B6E600)
#define CLASS_1_EF896E1D0FDF202A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14B70700)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x14B70790)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x14B709B0)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x14B6E180)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x14B70780)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x14B6E100)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x14B708E0)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x14B6D9E0)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14B706F0)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x14B705F0)
#define CLASS_1_EF896E1D0FDF202A_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x14B70420)
#define CLASS_1_EF896E1D0FDF202A__CTOR_OFFSET UNITYSDK_OFFSET(0x14B6DEC0)

inline static constexpr unsigned int Class_1_EF896E1D0FDF202A_TypeDefinitionIndex = 91387;

class Class_1_EF896E1D0FDF202A : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Struct_2_FA5F50563E60AFBA Field_1_2; // 0x18
	::MoleMole::Config::AbilityTargetting Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_FA5F50563E60AFBA a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}

	static ::Class_1_EF896E1D0FDF202A* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	static ::Class_1_EF896E1D0FDF202A* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::Struct_2_FA5F50563E60AFBA Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF896E1D0FDF202A_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}
};
