#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterVisionConfig.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCell.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellTrigger.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"
#include "unitysdk/Struct_2_882A7D00DFE0F598.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_0_16E4307DCC419505_238;
class Class_1_06AB2BCBCFDFE141;
class Class_1_0C69BC2A626C1DF1;
class Class_1_1B491017037D3E0C;
class Class_1_328908A2B3683652;
class Class_1_491EB966F6E7F361;
class Class_1_6CBA5AB92E154556;
class Class_1_B470ECE8B4D9EC2E;
class Class_1_BDA2C084533125A6;
class Class_1_BF18D4907D184EDF;
class Class_1_F1E790FCE2711921;
class Class_1_F31115D5F56C5F10;
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorldLevelGrid; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_197CC3E8889A3449_METHOD_2_000FFA7114A6DA99_OFFSET UNITYSDK_OFFSET(0x1C580D60)
#define CLASS_2_197CC3E8889A3449_METHOD_2_01C97B6254E92F2C_OFFSET UNITYSDK_OFFSET(0x1C581AF0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_07C860305FFE845C_OFFSET UNITYSDK_OFFSET(0x1C57FEF0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_0FEBCC205CCB8DF1_OFFSET UNITYSDK_OFFSET(0x1C581730)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_10_OFFSET UNITYSDK_OFFSET(0x1C5820F0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_11_OFFSET UNITYSDK_OFFSET(0x1C582570)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_12_OFFSET UNITYSDK_OFFSET(0x1C582680)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_13_OFFSET UNITYSDK_OFFSET(0x1C582790)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_14_OFFSET UNITYSDK_OFFSET(0x1C5828A0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_15_OFFSET UNITYSDK_OFFSET(0x1C5829B0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_16_OFFSET UNITYSDK_OFFSET(0x1C582AC0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_17_OFFSET UNITYSDK_OFFSET(0x1C582BD0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_18_OFFSET UNITYSDK_OFFSET(0x1C582CE0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_19_OFFSET UNITYSDK_OFFSET(0x1C582DF0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1C57FD50)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_20_OFFSET UNITYSDK_OFFSET(0x1C582F00)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_21_OFFSET UNITYSDK_OFFSET(0x1C583010)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x1C580130)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_3_OFFSET UNITYSDK_OFFSET(0x1C580550)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_4_OFFSET UNITYSDK_OFFSET(0x1C580AF0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_5_OFFSET UNITYSDK_OFFSET(0x1C581070)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_6_OFFSET UNITYSDK_OFFSET(0x1C581390)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_7_OFFSET UNITYSDK_OFFSET(0x1C5816D0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_8_OFFSET UNITYSDK_OFFSET(0x1C581A90)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_9_OFFSET UNITYSDK_OFFSET(0x1C581DD0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C57F910)
#define CLASS_2_197CC3E8889A3449_METHOD_2_208F785AB6C74960_OFFSET UNITYSDK_OFFSET(0x1C5805B0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_446B23C900223315_OFFSET UNITYSDK_OFFSET(0x1C581F10)
#define CLASS_2_197CC3E8889A3449_METHOD_2_4B551802159F0156_OFFSET UNITYSDK_OFFSET(0x1C5802F0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_72CB4A04003E1D50_OFFSET UNITYSDK_OFFSET(0x1C580B50)
#define CLASS_2_197CC3E8889A3449_METHOD_2_995B833D797D77C3_OFFSET UNITYSDK_OFFSET(0x1C580190)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AC06FA63AB410374_OFFSET UNITYSDK_OFFSET(0x1C581E30)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_10_OFFSET UNITYSDK_OFFSET(0x1C582470)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_1_OFFSET UNITYSDK_OFFSET(0x1C580030)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_2_OFFSET UNITYSDK_OFFSET(0x1C580450)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_3_OFFSET UNITYSDK_OFFSET(0x1C5809F0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_4_OFFSET UNITYSDK_OFFSET(0x1C580F70)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_5_OFFSET UNITYSDK_OFFSET(0x1C581290)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_6_OFFSET UNITYSDK_OFFSET(0x1C5815D0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_7_OFFSET UNITYSDK_OFFSET(0x1C581990)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_8_OFFSET UNITYSDK_OFFSET(0x1C581CD0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_9_OFFSET UNITYSDK_OFFSET(0x1C581FF0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_OFFSET UNITYSDK_OFFSET(0x1C57FC50)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_10_OFFSET UNITYSDK_OFFSET(0x1C582040)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_11_OFFSET UNITYSDK_OFFSET(0x1C5824C0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_12_OFFSET UNITYSDK_OFFSET(0x1C5825D0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_13_OFFSET UNITYSDK_OFFSET(0x1C5826E0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_14_OFFSET UNITYSDK_OFFSET(0x1C5827F0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_15_OFFSET UNITYSDK_OFFSET(0x1C582900)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_16_OFFSET UNITYSDK_OFFSET(0x1C582A10)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_17_OFFSET UNITYSDK_OFFSET(0x1C582B20)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_18_OFFSET UNITYSDK_OFFSET(0x1C582C30)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_19_OFFSET UNITYSDK_OFFSET(0x1C582D40)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1C57FCA0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_20_OFFSET UNITYSDK_OFFSET(0x1C582E50)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_21_OFFSET UNITYSDK_OFFSET(0x1C582F60)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_2_OFFSET UNITYSDK_OFFSET(0x1C580080)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_3_OFFSET UNITYSDK_OFFSET(0x1C5804A0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_4_OFFSET UNITYSDK_OFFSET(0x1C580A40)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_5_OFFSET UNITYSDK_OFFSET(0x1C580FC0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_6_OFFSET UNITYSDK_OFFSET(0x1C5812E0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_7_OFFSET UNITYSDK_OFFSET(0x1C581620)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_8_OFFSET UNITYSDK_OFFSET(0x1C5819E0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_9_OFFSET UNITYSDK_OFFSET(0x1C581D20)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1C57F860)
#define CLASS_2_197CC3E8889A3449_METHOD_2_AED30789A016BA1D_OFFSET UNITYSDK_OFFSET(0x1C581860)
#define CLASS_2_197CC3E8889A3449_METHOD_2_BAA8A7238E6674D4_OFFSET UNITYSDK_OFFSET(0x1C5814E0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_BE75E8B7F2C06B4A_OFFSET UNITYSDK_OFFSET(0x1C5822E0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_C440EB1021E4069E_OFFSET UNITYSDK_OFFSET(0x1C57FAE0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_CFBE547DAB44124C_OFFSET UNITYSDK_OFFSET(0x1C5813F0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_D148E1AC209E7F72_OFFSET UNITYSDK_OFFSET(0x1C5811B0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_D60F32FB09C03FB4_OFFSET UNITYSDK_OFFSET(0x1C581BE0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_DA8B3EEF7B1D95F3_OFFSET UNITYSDK_OFFSET(0x1C57FDB0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_E2BC625A6A683B01_OFFSET UNITYSDK_OFFSET(0x1C5810D0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_EF8282F0C66C9D61_OFFSET UNITYSDK_OFFSET(0x1C57F970)
#define CLASS_2_197CC3E8889A3449_METHOD_2_F1032660B8C62246_OFFSET UNITYSDK_OFFSET(0x1C5807D0)
#define CLASS_2_197CC3E8889A3449_METHOD_2_F471815433097EC4_OFFSET UNITYSDK_OFFSET(0x1C582150)
#define CLASS_2_197CC3E8889A3449__CTOR_OFFSET UNITYSDK_OFFSET(0x1C583070)

inline static constexpr unsigned int Class_2_197CC3E8889A3449_TypeDefinitionIndex = 40830;

class Class_2_197CC3E8889A3449 : public ::Entitas::Entity
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449__CTOR_OFFSET))(this);
	}

	::Class_1_F1E790FCE2711921* Method_2_AECF8BEC293ED42A()
	{
		return ((::Class_1_F1E790FCE2711921*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_EF8282F0C66C9D61(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_EF8282F0C66C9D61_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C440EB1021E4069E(::UnityEngine::Transform* a1, ::UnityEngine::Vector3Int a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig a4, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a5, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig, ::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_C440EB1021E4069E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_AD2B2AFEF3192F72()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_OFFSET))(this);
	}

	::Class_1_491EB966F6E7F361* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_491EB966F6E7F361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_DA8B3EEF7B1D95F3(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_DA8B3EEF7B1D95F3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_07C860305FFE845C(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::LittleGame::TimelineControlGameCharacterVisionConfig))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_07C860305FFE845C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_1_OFFSET))(this);
	}

	::Class_1_328908A2B3683652* Method_2_AECF8BEC293ED42A_2()
	{
		return ((::Class_1_328908A2B3683652*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Void Method_2_995B833D797D77C3(::UnityEngine::Vector3Int a1, ::Class_2_197CC3E8889A3449* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_197CC3E8889A3449*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_995B833D797D77C3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4B551802159F0156(::UnityEngine::Vector3Int a1, ::Class_2_197CC3E8889A3449* a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598> a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::Class_2_197CC3E8889A3449*, ::UnityEngine::Transform*, ::System::Nullable_1<::Struct_2_882A7D00DFE0F598>))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_4B551802159F0156_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_2_OFFSET))(this);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_AECF8BEC293ED42A_3()
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_3_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_3_OFFSET))(this);
	}

	::System::Void Method_2_208F785AB6C74960(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_238* a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_238*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_208F785AB6C74960_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_F1032660B8C62246(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode a8, ::Class_0_16E4307DCC419505_238* a9, ::System::Single a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::LittleGame::ETimelineControlGamePlayMode, ::Class_0_16E4307DCC419505_238*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_F1032660B8C62246_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_3_OFFSET))(this);
	}

	::Class_1_F31115D5F56C5F10* Method_2_AECF8BEC293ED42A_4()
	{
		return ((::Class_1_F31115D5F56C5F10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_4_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_4_OFFSET))(this);
	}

	::System::Void Method_2_72CB4A04003E1D50(::Class_1_06AB2BCBCFDFE141* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06AB2BCBCFDFE141*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_72CB4A04003E1D50_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_000FFA7114A6DA99(::Class_1_06AB2BCBCFDFE141* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a4, ::UnityEngine::Vector3Int a5, ::UnityEngine::Vector3Int a6, ::System::Single a7, ::UnityEngine::Vector2Int a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06AB2BCBCFDFE141*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCell, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int, ::System::Single, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_000FFA7114A6DA99_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_4_OFFSET))(this);
	}

	::Class_1_1B491017037D3E0C* Method_2_AECF8BEC293ED42A_5()
	{
		return ((::Class_1_1B491017037D3E0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_5_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_5_OFFSET))(this);
	}

	::System::Void Method_2_E2BC625A6A683B01(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_E2BC625A6A683B01_OFFSET))(this, a1);
	}

	::System::Void Method_2_D148E1AC209E7F72(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_D148E1AC209E7F72_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_5_OFFSET))(this);
	}

	::Class_1_BF18D4907D184EDF* Method_2_AECF8BEC293ED42A_6()
	{
		return ((::Class_1_BF18D4907D184EDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_6_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_6_OFFSET))(this);
	}

	::System::Void Method_2_CFBE547DAB44124C(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_CFBE547DAB44124C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BAA8A7238E6674D4(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_BAA8A7238E6674D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_6_OFFSET))(this);
	}

	::Class_1_6CBA5AB92E154556* Method_2_AECF8BEC293ED42A_7()
	{
		return ((::Class_1_6CBA5AB92E154556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_7_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_7_OFFSET))(this);
	}

	::System::Void Method_2_0FEBCC205CCB8DF1(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_0FEBCC205CCB8DF1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AED30789A016BA1D(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellTrigger, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AED30789A016BA1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_7_OFFSET))(this);
	}

	::Class_1_0C69BC2A626C1DF1* Method_2_AECF8BEC293ED42A_8()
	{
		return ((::Class_1_0C69BC2A626C1DF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_8_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_8_OFFSET))(this);
	}

	::System::Void Method_2_01C97B6254E92F2C(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_01C97B6254E92F2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D60F32FB09C03FB4(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::RPG::Client::LittleGame::TimelineControlGameWorldLevelGrid*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_D60F32FB09C03FB4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_8_OFFSET))(this);
	}

	::Class_1_BDA2C084533125A6* Method_2_AECF8BEC293ED42A_9()
	{
		return ((::Class_1_BDA2C084533125A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_9_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_9_OFFSET))(this);
	}

	::System::Void Method_2_AC06FA63AB410374(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AC06FA63AB410374_OFFSET))(this, a1);
	}

	::System::Void Method_2_446B23C900223315(::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_446B23C900223315_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_9_OFFSET))(this);
	}

	::Class_1_06AB2BCBCFDFE141* Method_2_AECF8BEC293ED42A_10()
	{
		return ((::Class_1_06AB2BCBCFDFE141*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_10_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_10()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_10_OFFSET))(this);
	}

	::System::Void Method_2_F471815433097EC4(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::Class_2_197CC3E8889A3449*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::Class_2_197CC3E8889A3449*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_F471815433097EC4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_BE75E8B7F2C06B4A(::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3Int a3, ::System::Boolean a4, ::Il2CppArray<::Class_2_197CC3E8889A3449*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3Int, ::System::Boolean, ::Il2CppArray<::Class_2_197CC3E8889A3449*>*))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_BE75E8B7F2C06B4A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AD2B2AFEF3192F72_10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AD2B2AFEF3192F72_10_OFFSET))(this);
	}

	::Class_1_F1E790FCE2711921* Method_2_AECF8BEC293ED42A_11()
	{
		return ((::Class_1_F1E790FCE2711921*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_11_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_11_OFFSET))(this);
	}

	::Class_1_491EB966F6E7F361* Method_2_AECF8BEC293ED42A_12()
	{
		return ((::Class_1_491EB966F6E7F361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_12_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_12()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_12_OFFSET))(this);
	}

	::Class_1_328908A2B3683652* Method_2_AECF8BEC293ED42A_13()
	{
		return ((::Class_1_328908A2B3683652*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_13_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_13()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_13_OFFSET))(this);
	}

	::Class_1_B470ECE8B4D9EC2E* Method_2_AECF8BEC293ED42A_14()
	{
		return ((::Class_1_B470ECE8B4D9EC2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_14_OFFSET))(this);
	}

	::Class_1_F31115D5F56C5F10* Method_2_AECF8BEC293ED42A_15()
	{
		return ((::Class_1_F31115D5F56C5F10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_15_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_15()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_15_OFFSET))(this);
	}

	::Class_1_1B491017037D3E0C* Method_2_AECF8BEC293ED42A_16()
	{
		return ((::Class_1_1B491017037D3E0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_16_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_16()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_16_OFFSET))(this);
	}

	::Class_1_BF18D4907D184EDF* Method_2_AECF8BEC293ED42A_17()
	{
		return ((::Class_1_BF18D4907D184EDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_17_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_17()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_17_OFFSET))(this);
	}

	::Class_1_6CBA5AB92E154556* Method_2_AECF8BEC293ED42A_18()
	{
		return ((::Class_1_6CBA5AB92E154556*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_18_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_18()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_18_OFFSET))(this);
	}

	::Class_1_0C69BC2A626C1DF1* Method_2_AECF8BEC293ED42A_19()
	{
		return ((::Class_1_0C69BC2A626C1DF1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_19_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_19()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_19_OFFSET))(this);
	}

	::Class_1_06AB2BCBCFDFE141* Method_2_AECF8BEC293ED42A_20()
	{
		return ((::Class_1_06AB2BCBCFDFE141*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_20_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_20()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_20_OFFSET))(this);
	}

	::Class_1_BDA2C084533125A6* Method_2_AECF8BEC293ED42A_21()
	{
		return ((::Class_1_BDA2C084533125A6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_AECF8BEC293ED42A_21_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_21()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_197CC3E8889A3449_METHOD_2_1808E1CF7A125519_21_OFFSET))(this);
	}
};
