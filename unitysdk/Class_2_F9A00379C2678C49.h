#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D.h"
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

class Class_0_16E4307DCC419505_203;
class Class_1_867B6CE75953535A;
class Class_1_AF1A6B8C22890593;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_C2963602F383E66F;
class Class_2_54AE1C44DE8123D2;
class Class_3_C4B4367065488983;
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F9A00379C2678C49_METHOD_2_4186C2378364AF02_OFFSET UNITYSDK_OFFSET(0x17DF33F0)
#define CLASS_2_F9A00379C2678C49_METHOD_2_5B099EFC0259C285_OFFSET UNITYSDK_OFFSET(0x17DF2C10)
#define CLASS_2_F9A00379C2678C49_METHOD_2_8DCA4BB49D9B3469_OFFSET UNITYSDK_OFFSET(0x17DF3120)
#define CLASS_2_F9A00379C2678C49_METHOD_2_B3DBF903EFF6133D_OFFSET UNITYSDK_OFFSET(0x17DF2CF0)
#define CLASS_2_F9A00379C2678C49_METHOD_2_CF45B637E197CFE9_OFFSET UNITYSDK_OFFSET(0x17DF2FF0)
#define CLASS_2_F9A00379C2678C49__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF2C00)

inline static constexpr unsigned int Class_2_F9A00379C2678C49_TypeDefinitionIndex = 38788;

class Class_2_F9A00379C2678C49 : public ::Class_1_FD893FD36F6A3A6D
{
public:
	::Class_3_C4B4367065488983* Field_2_0; // 0x18
	::Class_1_867B6CE75953535A* Field_2_1; // 0x20

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_C4B4367065488983* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_C4B4367065488983*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_5B099EFC0259C285(::System::Single a1, ::System::Boolean a2, ::Class_0_16E4307DCC419505_203* a3)
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID, ::System::Single, ::System::Boolean, ::Class_0_16E4307DCC419505_203*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_5B099EFC0259C285_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C2963602F383E66F* Method_2_B3DBF903EFF6133D(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_B3DBF903EFF6133D_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_AF1A6B8C22890593* Method_2_CF45B637E197CFE9(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup& a1, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a2)
	{
		return ((::Class_1_AF1A6B8C22890593*(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup&, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_CF45B637E197CFE9_OFFSET))(this, a1, a2);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_8DCA4BB49D9B3469(::Class_1_AF1A6B8C22890593* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell& a2, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop> a3, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger> a4, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver> a5)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::Class_1_AF1A6B8C22890593*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell&, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger>, ::System::Nullable_1<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver>))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_8DCA4BB49D9B3469_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_54AE1C44DE8123D2* Method_2_4186C2378364AF02(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3Int& a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::UnityEngine::Vector3Int& a5, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig& a6)
	{
		return ((::Class_2_54AE1C44DE8123D2*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::UnityEngine::Vector3Int&, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig&))((::PBYTE)hIl2Cpp + CLASS_2_F9A00379C2678C49_METHOD_2_4186C2378364AF02_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
