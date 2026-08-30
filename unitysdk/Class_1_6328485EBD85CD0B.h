#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/RPG/GameCore/LittleGamePixAirEquipmentFaction.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6328485EBD85CD0B_METHOD_1_36481D448B6B6C82_OFFSET UNITYSDK_OFFSET(0x16362410)
#define CLASS_1_6328485EBD85CD0B_METHOD_1_94E3BB2C2013B7D0_OFFSET UNITYSDK_OFFSET(0x16361A40)
#define CLASS_1_6328485EBD85CD0B_METHOD_1_A8C4EB3B217A181D_OFFSET UNITYSDK_OFFSET(0x16362050)
#define CLASS_1_6328485EBD85CD0B_METHOD_1_BB3692594B0353B2_OFFSET UNITYSDK_OFFSET(0x16362470)
#define CLASS_1_6328485EBD85CD0B__CTOR_OFFSET UNITYSDK_OFFSET(0x163624E0)

inline static constexpr unsigned int Class_1_6328485EBD85CD0B_TypeDefinitionIndex = 76902;

class Class_1_6328485EBD85CD0B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6328485EBD85CD0B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_94E3BB2C2013B7D0(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6328485EBD85CD0B_METHOD_1_94E3BB2C2013B7D0_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::PixAir::PixAirPlaneType Method_1_A8C4EB3B217A181D(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_1_6328485EBD85CD0B_METHOD_1_A8C4EB3B217A181D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_36481D448B6B6C82(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + CLASS_1_6328485EBD85CD0B_METHOD_1_36481D448B6B6C82_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BB3692594B0353B2(::RPG::GameCore::LittleGamePixAirEquipmentFaction a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGamePixAirEquipmentFaction, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6328485EBD85CD0B_METHOD_1_BB3692594B0353B2_OFFSET))(this, a1, a2);
	}
};
