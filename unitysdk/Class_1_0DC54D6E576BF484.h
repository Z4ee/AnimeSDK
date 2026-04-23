#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGroupSpatialBakedInfo; }
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define CLASS_1_0DC54D6E576BF484_GET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x12AA64D0)
#define CLASS_1_0DC54D6E576BF484_GET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x12AA64F0)
#define CLASS_1_0DC54D6E576BF484_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x12AA6320)
#define CLASS_1_0DC54D6E576BF484_SET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x12AA64E0)
#define CLASS_1_0DC54D6E576BF484_SET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x12AA6500)
#define CLASS_1_0DC54D6E576BF484__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA6310)

inline static constexpr unsigned int Class_1_0DC54D6E576BF484_TypeDefinitionIndex = 57269;

class Class_1_0DC54D6E576BF484 : public ::System::Object
{
public:
	::RPG::GameCore::LevelGroupSpatialBakedInfo* Field_1_2; // 0x10
	::RPG::GameCore::LevelSpatialIntVec2* _LowerUpperBounds_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* _CookedGridList_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::LevelGroupSpatialBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupSpatialBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* get_CookedGridList()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484_GET_COOKEDGRIDLIST_OFFSET))(this);
	}

	::System::Void set_CookedGridList(::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484_SET_COOKEDGRIDLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelSpatialIntVec2* get_LowerUpperBounds()
	{
		return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484_GET_LOWERUPPERBOUNDS_OFFSET))(this);
	}

	::System::Void set_LowerUpperBounds(::RPG::GameCore::LevelSpatialIntVec2* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + CLASS_1_0DC54D6E576BF484_SET_LOWERUPPERBOUNDS_OFFSET))(this, value);
	}
};
