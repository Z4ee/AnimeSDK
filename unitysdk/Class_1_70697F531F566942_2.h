#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_17;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x8FDC1E0)
#define CLASS_1_70697F531F566942_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8FDC2D0)

inline static constexpr unsigned int Class_1_70697F531F566942_2_TypeDefinitionIndex = 53138;

class Class_1_70697F531F566942_2 : public ::System::Object
{
public:
	::System::String* Field_1_8; // 0x10
	::Il2CppArray<::System::String*>* Field_1_16; // 0x18
	::System::String* Field_1_9; // 0x20
	::System::String* Field_1_10; // 0x28
	::RPG::GameCore::GameEntity* Field_1_0; // 0x30
	::System::String* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_17*>* Field_1_19; // 0x40
	::System::String* Field_1_6; // 0x48
	::RPG::GameCore::MonsterEnergyBarCustomColor* Field_1_18; // 0x50
	::RPG::GameCore::FixPoint Field_1_12; // 0x58
	::RPG::GameCore::EnergyBarState Field_1_3; // 0x60
	::System::Boolean Field_1_1; // 0x64
	::System::Boolean Field_1_2; // 0x65
	::System::Int32 Field_1_14; // 0x68
	::RPG::GameCore::MonsterEnergyBarType Field_1_15; // 0x6C
	::RPG::GameCore::FixPoint Field_1_13; // 0x70
	::RPG::GameCore::FixPoint Field_1_11; // 0x78
	::System::Int32 Field_1_5; // 0x80
	::RPG::GameCore::MonsterEnergyBarNumColor Field_1_17; // 0x84
	::System::Int32 Field_1_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_2_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
