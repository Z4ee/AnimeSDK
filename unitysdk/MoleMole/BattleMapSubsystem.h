#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BattleMapSubsystem_BattleCellInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_889E5B2995035C6D.h"
#include "unitysdk/Struct_2_CD3644488168ACA0.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigPointScoreCalculatePipe; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLEMAPSUBSYSTEM_CALCULATESPAWNPOINTSCORE_OFFSET UNITYSDK_OFFSET(0x106ACB30)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_DRAWINFO_OFFSET UNITYSDK_OFFSET(0x106ACD00)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_1_OFFSET UNITYSDK_OFFSET(0x106AC2B0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_OFFSET UNITYSDK_OFFSET(0x106ABF70)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLUNIQUEINDEX_OFFSET UNITYSDK_OFFSET(0x106ABCE0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x106ABEA0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_REGISTERSPAWNPOINTINFO_OFFSET UNITYSDK_OFFSET(0x106AC430)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_UNIQUEINDEX2POSITION_OFFSET UNITYSDK_OFFSET(0x106ABDB0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_UPDATEENTITYBOUNDS_OFFSET UNITYSDK_OFFSET(0x106AC6B0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x106ACE20)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x106ACD40)

namespace MoleMole
{
	inline static constexpr unsigned int BattleMapSubsystem_TypeDefinitionIndex = 73505;

	class BattleMapSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattleMapSubsystem*>
	{
	public:
		static ::System::Boolean* StaticGet_EnableRandomByScore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2E0);
		}
		static ::System::Boolean* StaticGet_EnableBattleMapSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2E1);
		}
		static ::MoleMole::BattleMapSubsystem_BattleCellInfo* StaticGet_EmptyBattleCellInfo()
		{
			return (::MoleMole::BattleMapSubsystem_BattleCellInfo*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2E2);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::MoleMole::BattleMapSubsystem_BattleCellInfo>* _battleCellMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Struct_2_889E5B2995035C6D>* _battleMapEntityInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::Struct_2_CD3644488168ACA0 GetCellUniqueIndex(::UnityEngine::Vector3 position)
		{
			return ((::Struct_2_CD3644488168ACA0(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLUNIQUEINDEX_OFFSET))(position);
		}

		static ::UnityEngine::Vector3 UniqueIndex2Position(::Struct_2_CD3644488168ACA0 index)
		{
			return ((::UnityEngine::Vector3(*)(::Struct_2_CD3644488168ACA0))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_UNIQUEINDEX2POSITION_OFFSET))(index);
		}

		static ::MoleMole::BattleMapSubsystem* Get()
		{
			return ((::MoleMole::BattleMapSubsystem*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GET_OFFSET))();
		}

		::MoleMole::BattleMapSubsystem_BattleCellInfo GetCellInfoByPosition(::UnityEngine::Vector3 position)
		{
			return ((::MoleMole::BattleMapSubsystem_BattleCellInfo(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_OFFSET))(this, position);
		}

		::MoleMole::BattleMapSubsystem_BattleCellInfo GetCellInfoByPosition_1(::Struct_2_CD3644488168ACA0 index)
		{
			return ((::MoleMole::BattleMapSubsystem_BattleCellInfo(*)(::PVOID, ::Struct_2_CD3644488168ACA0))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_1_OFFSET))(this, index);
		}

		::System::Void RegisterSpawnPointInfo(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_REGISTERSPAWNPOINTINFO_OFFSET))(this, position);
		}

		::System::Void UpdateEntityBounds(::MoleMole::EntityHandle entityHandle, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_UPDATEENTITYBOUNDS_OFFSET))(this, entityHandle, bounds);
		}

		::System::Int32 CalculateSpawnPointScore(::UnityEngine::Vector3 spawnPointPosition, ::MoleMole::ConfigPointScoreCalculatePipe* config)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::ConfigPointScoreCalculatePipe*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_CALCULATESPAWNPOINTSCORE_OFFSET))(this, spawnPointPosition, config);
		}

		::System::Void DrawInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_DRAWINFO_OFFSET))(this);
		}
	};
}
