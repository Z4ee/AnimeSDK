#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8FB38F0526A59B0.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarChangeOption.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_49;
class Class_1_EA6B9573C4BF1DD5;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D2DEA765AF5C2B0__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D0C30)

inline static constexpr unsigned int Class_2_9D2DEA765AF5C2B0_TypeDefinitionIndex = 54332;

class Class_2_9D2DEA765AF5C2B0 : public ::Class_1_B8FB38F0526A59B0
{
public:
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* Field_2_0; // 0x58
	::Il2CppArray<::RPG::GameCore::AbilityProperty>* Field_2_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* Field_2_2; // 0x68
	::Il2CppArray<::RPG::GameCore::AbilityProperty>* Field_2_3; // 0x70
	::Il2CppArray<::System::UInt32>* Field_2_4; // 0x78
	::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* Field_2_5; // 0x80
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_6; // 0x88
	::Class_1_EA6B9573C4BF1DD5* Field_2_7; // 0x90
	::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_49*>* Field_2_8; // 0x98
	::Enum_3_0A3761FE34514D6C_13 Field_2_9; // 0xA0
	::System::UInt32 Field_2_10; // 0xA4
	::RPG::GameCore::FixPoint Field_2_11; // 0xA8
	::System::UInt32 Field_2_12; // 0xB0
	::System::UInt32 Field_2_13; // 0xB4
	::System::UInt32 Field_2_14; // 0xB8
	::System::UInt32 Field_2_15; // 0xBC
	::System::UInt32 Field_2_16; // 0xC0
	::System::UInt32 Field_2_17; // 0xC4
	::Enum_3_01618AD0437C8486 Field_2_18; // 0xC8
	::System::Boolean Field_2_19; // 0xCC
	::System::Int32 Field_2_20; // 0xD0
	::RPG::GameCore::FixPoint Field_2_21; // 0xD8
	::RPG::GameCore::AvatarChangeOption Field_2_22; // 0xE0
	::RPG::GameCore::AvatarRowWrapperDeriveType Field_2_23; // 0xE4
	::RPG::GameCore::FixPoint Field_2_24; // 0xE8
	::RPG::GameCore::FixPoint Field_2_25; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D2DEA765AF5C2B0__CTOR_OFFSET))(this);
	}
};
