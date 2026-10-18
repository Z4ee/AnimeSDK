#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_20.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1ABDF1855FCDB08F;
class Class_2_D550E2FE83D255EF;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1F213CFFCE98A271_GET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C50E8D0)
#define CLASS_2_1F213CFFCE98A271_GET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C50E8F0)
#define CLASS_2_1F213CFFCE98A271_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C50E8B0)
#define CLASS_2_1F213CFFCE98A271_SET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C50E8E0)
#define CLASS_2_1F213CFFCE98A271_SET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C50E900)
#define CLASS_2_1F213CFFCE98A271_SET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C50E8C0)
#define CLASS_2_1F213CFFCE98A271__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50E910)

inline static constexpr unsigned int Class_2_1F213CFFCE98A271_TypeDefinitionIndex = 41747;

class Class_2_1F213CFFCE98A271 : public ::Class_1_43BD383C98B4C0C5_20
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_1ABDF1855FCDB08F*>* _AffectedPieces_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* _AffectedCells_k__BackingField; // 0x18
	::Class_2_D550E2FE83D255EF* _Buff_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271__CTOR_OFFSET))(this);
	}

	::Class_2_D550E2FE83D255EF* get_Buff()
	{
		return ((::Class_2_D550E2FE83D255EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_BUFF_OFFSET))(this);
	}

	::System::Void set_Buff(::Class_2_D550E2FE83D255EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D550E2FE83D255EF*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_BUFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* get_AffectedCells()
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_AFFECTEDCELLS_OFFSET))(this);
	}

	::System::Void set_AffectedCells(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_AFFECTEDCELLS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_1ABDF1855FCDB08F*>* get_AffectedPieces()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_1ABDF1855FCDB08F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_AFFECTEDPIECES_OFFSET))(this);
	}

	::System::Void set_AffectedPieces(::System::Collections::Generic::HashSet_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_AFFECTEDPIECES_OFFSET))(this, a1);
	}
};
