#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class NavMeshDataInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshData; }

#define ADVANCEDNAVMESHAREACALCULATOR_ADDNEWNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x12F08030)
#define ADVANCEDNAVMESHAREACALCULATOR_CALCULATECURRENTNAVMESHAREA_OFFSET UNITYSDK_OFFSET(0x12F07DB0)
#define ADVANCEDNAVMESHAREACALCULATOR_CALCULATETOTALAREA_OFFSET UNITYSDK_OFFSET(0x12F07780)
#define ADVANCEDNAVMESHAREACALCULATOR_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0x12F08420)
#define ADVANCEDNAVMESHAREACALCULATOR_GETNAVMESHDATAINFOLDER_OFFSET UNITYSDK_OFFSET(0x12F08500)
#define ADVANCEDNAVMESHAREACALCULATOR_GET_TOTALAREA_OFFSET UNITYSDK_OFFSET(0x12F07590)
#define ADVANCEDNAVMESHAREACALCULATOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12F075B0)
#define ADVANCEDNAVMESHAREACALCULATOR_REMOVENAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x12F08140)
#define ADVANCEDNAVMESHAREACALCULATOR_SET_TOTALAREA_OFFSET UNITYSDK_OFFSET(0x12F075A0)
#define ADVANCEDNAVMESHAREACALCULATOR_TOGGLENAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x12F08200)
#define ADVANCEDNAVMESHAREACALCULATOR_UNLOADALLNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x12F07600)
#define ADVANCEDNAVMESHAREACALCULATOR_UPDATENAVMESHDATAASSET_OFFSET UNITYSDK_OFFSET(0x12F08370)
#define ADVANCEDNAVMESHAREACALCULATOR_UPDATENAVMESHDATANAME_OFFSET UNITYSDK_OFFSET(0x12F082B0)
#define ADVANCEDNAVMESHAREACALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12F085B0)

inline static constexpr unsigned int AdvancedNavMeshAreaCalculator_TypeDefinitionIndex = 79413;

class AdvancedNavMeshAreaCalculator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::NavMeshDataInfo*>* navMeshDatas; // 0x18
	::System::Single _totalArea_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshDataInstance>* loadedInstances; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* individualAreas; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR__CTOR_OFFSET))(this);
	}

	::System::Single get_totalArea()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_GET_TOTALAREA_OFFSET))(this);
	}

	::System::Void set_totalArea(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_SET_TOTALAREA_OFFSET))(this, value);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_ONDESTROY_OFFSET))(this);
	}

	::System::Void CalculateTotalArea()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_CALCULATETOTALAREA_OFFSET))(this);
	}

	::System::Single CalculateCurrentNavMeshArea()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_CALCULATECURRENTNAVMESHAREA_OFFSET))(this);
	}

	::System::Void UnloadAllNavMeshData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_UNLOADALLNAVMESHDATA_OFFSET))(this);
	}

	::System::Void AddNewNavMeshData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_ADDNEWNAVMESHDATA_OFFSET))(this);
	}

	::System::Void RemoveNavMeshData(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_REMOVENAVMESHDATA_OFFSET))(this, index);
	}

	::System::Void ToggleNavMeshData(::System::Int32 index, ::System::Boolean include)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_TOGGLENAVMESHDATA_OFFSET))(this, index, include);
	}

	::System::Void UpdateNavMeshDataName(::System::Int32 index, ::System::String* newName)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_UPDATENAVMESHDATANAME_OFFSET))(this, index, newName);
	}

	::System::Void UpdateNavMeshDataAsset(::System::Int32 index, ::UnityEngine::AI::NavMeshData* newData)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_UPDATENAVMESHDATAASSET_OFFSET))(this, index, newData);
	}

	::System::Void ClearAllData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_CLEARALLDATA_OFFSET))(this);
	}

	::System::Void GetNavMeshDataInFolder(::System::String* folderPath)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADVANCEDNAVMESHAREACALCULATOR_GETNAVMESHDATAINFOLDER_OFFSET))(this, folderPath);
	}
};
