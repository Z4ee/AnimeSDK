#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class AdvNpcPetSearch; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_5DC13E2AD06D6A62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1517E490)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1517EA60)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x1517E2F0)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_6F6E2DBCFEEBC723_1_OFFSET UNITYSDK_OFFSET(0x1517F2D0)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_6F6E2DBCFEEBC723_OFFSET UNITYSDK_OFFSET(0x1517F110)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1517E690)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1517ED60)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x1517E160)
#define CLASS_2_5DC13E2AD06D6A62_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1517EAC0)
#define CLASS_2_5DC13E2AD06D6A62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1517EE40)
#define CLASS_2_5DC13E2AD06D6A62_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1517EF00)
#define CLASS_2_5DC13E2AD06D6A62_TICK_OFFSET UNITYSDK_OFFSET(0x1517E730)
#define CLASS_2_5DC13E2AD06D6A62__CTOR_OFFSET UNITYSDK_OFFSET(0x1517DE10)

inline static constexpr unsigned int Class_2_5DC13E2AD06D6A62_TypeDefinitionIndex = 50049;

class Class_2_5DC13E2AD06D6A62 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::TransformComponent* Field_2_1; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::RPG::GameCore::AdvNpcPetSearch* Field_2_6; // 0x48
	::RPG::GameCore::NPCComponent* Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_6F6E2DBCFEEBC723(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_6F6E2DBCFEEBC723_OFFSET))(this, a1);
	}

	::System::Void Method_2_6F6E2DBCFEEBC723_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_5DC13E2AD06D6A62_METHOD_2_6F6E2DBCFEEBC723_1_OFFSET))(this, a1);
	}
};
