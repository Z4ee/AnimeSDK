#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PVSManager_PVSLevelData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PVSMANAGER_STARTWITHLEVEL_OFFSET UNITYSDK_OFFSET(0x1C557C90)
#define PVSMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1C557B70)
#define PVSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C558070)

inline static constexpr unsigned int PVSManager_TypeDefinitionIndex = 35830;

class PVSManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* totalObjects; // 0x18
	::System::Single perCellSize; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* invisibleIndexes; // 0x28
	::System::Collections::Generic::List_1<::PVSManager_PVSLevelData>* levelDatas; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2Int>* _levelDataDict; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PVSMANAGER_START_OFFSET))(this);
	}

	::System::Void StartWithLevel(::System::Int32 levelID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PVSMANAGER_STARTWITHLEVEL_OFFSET))(this, levelID);
	}
};
