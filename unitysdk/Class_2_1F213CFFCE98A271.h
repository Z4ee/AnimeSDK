#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_20.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_5E2D533DC7C7E714;
class Class_2_11547817CAC659C4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_1F213CFFCE98A271_GET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C53CD90)
#define CLASS_2_1F213CFFCE98A271_GET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C53CDB0)
#define CLASS_2_1F213CFFCE98A271_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C53CD70)
#define CLASS_2_1F213CFFCE98A271_SET_AFFECTEDCELLS_OFFSET UNITYSDK_OFFSET(0x1C53CDA0)
#define CLASS_2_1F213CFFCE98A271_SET_AFFECTEDPIECES_OFFSET UNITYSDK_OFFSET(0x1C53CDC0)
#define CLASS_2_1F213CFFCE98A271_SET_BUFF_OFFSET UNITYSDK_OFFSET(0x1C53CD80)
#define CLASS_2_1F213CFFCE98A271__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53CDD0)

inline static constexpr unsigned int Class_2_1F213CFFCE98A271_TypeDefinitionIndex = 41747;

class Class_2_1F213CFFCE98A271 : public ::Class_1_43BD383C98B4C0C5_20
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_5E2D533DC7C7E714*>* _AffectedPieces_k__BackingField; // 0x10
	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* _AffectedCells_k__BackingField; // 0x18
	::Class_2_11547817CAC659C4* _Buff_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271__CTOR_OFFSET))(this);
	}

	::Class_2_11547817CAC659C4* get_Buff()
	{
		return ((::Class_2_11547817CAC659C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_BUFF_OFFSET))(this);
	}

	::System::Void set_Buff(::Class_2_11547817CAC659C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_11547817CAC659C4*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_BUFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* get_AffectedCells()
	{
		return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_AFFECTEDCELLS_OFFSET))(this);
	}

	::System::Void set_AffectedCells(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_AFFECTEDCELLS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::Class_1_5E2D533DC7C7E714*>* get_AffectedPieces()
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_1_5E2D533DC7C7E714*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_GET_AFFECTEDPIECES_OFFSET))(this);
	}

	::System::Void set_AffectedPieces(::System::Collections::Generic::HashSet_1<::Class_1_5E2D533DC7C7E714*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_5E2D533DC7C7E714*>*))((::PBYTE)hIl2Cpp + CLASS_2_1F213CFFCE98A271_SET_AFFECTEDPIECES_OFFSET))(this, a1);
	}
};
