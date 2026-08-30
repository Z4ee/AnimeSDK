#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_2.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_238;
class Class_1_06AB2BCBCFDFE141;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_C2963602F383E66F;
class Class_1_D33B7D6901AE39E9;
class Class_2_197CC3E8889A3449;
class Class_3_C4B4367065488983;
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F9A00379C2678C49_METHOD_2_06023D0A1E233EAB_OFFSET UNITYSDK_OFFSET(0x1C40FB50)
#define CLASS_2_F9A00379C2678C49_METHOD_2_1ACDB369CB4A5DDE_OFFSET UNITYSDK_OFFSET(0x1C40FF30)
#define CLASS_2_F9A00379C2678C49_METHOD_2_4186C2378364AF02_OFFSET UNITYSDK_OFFSET(0x1C410330)
#define CLASS_2_F9A00379C2678C49_METHOD_2_8DCA4BB49D9B3469_OFFSET UNITYSDK_OFFSET(0x1C410060)
#define CLASS_2_F9A00379C2678C49_METHOD_2_B3DBF903EFF6133D_OFFSET UNITYSDK_OFFSET(0x1C40FC30)
#define CLASS_2_F9A00379C2678C49__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40FB40)

inline static constexpr unsigned int Class_2_F9A00379C2678C49_TypeDefinitionIndex = 41244;

class Class_2_F9A00379C2678C49 : public ::Class_1_FD893FD36F6A3A6D_2
{
public:
	::Class_3_C4B4367065488983* PDENFEFCAGN; // 0x18
	::Class_1_D33B7D6901AE39E9* MBKIEFPKECG; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_06023D0A1E233EAB(::System::Single a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_238* a3)
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID, ::System::Single, ::System::Boolean, ::Class_0_16E4307DCC419505_238*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_06023D0A1E233EAB_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C2963602F383E66F* Method_2_B3DBF903EFF6133D(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_B3DBF903EFF6133D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_06AB2BCBCFDFE141* Method_2_1ACDB369CB4A5DDE(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup& a1, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a2)
	{
		return ((::Class_1_06AB2BCBCFDFE141*(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup&, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_1ACDB369CB4A5DDE_OFFSET))(this, a1, a2);
	}

	::Class_2_197CC3E8889A3449* Method_2_8DCA4BB49D9B3469(::Class_1_06AB2BCBCFDFE141* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell& a2, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop> a3, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger> a4, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver> a5)
	{
		return ((::Class_2_197CC3E8889A3449*(*)(::PVOID, ::Class_1_06AB2BCBCFDFE141*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell&, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver>))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_8DCA4BB49D9B3469_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_197CC3E8889A3449* Method_2_4186C2378364AF02(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3Int& a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::UnityEngine::Vector3Int& a5, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig& a6)
	{
		return ((::Class_2_197CC3E8889A3449*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig&))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_4186C2378364AF02_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
