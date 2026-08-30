#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_50.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define CLASS_1_5226E24814FA0066_GET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x1613BA70)
#define CLASS_1_5226E24814FA0066_GET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1613BA90)
#define CLASS_1_5226E24814FA0066_METHOD_1_5FD4F0CCAF05C452_OFFSET UNITYSDK_OFFSET(0x1613B800)
#define CLASS_1_5226E24814FA0066_SET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x1613BA80)
#define CLASS_1_5226E24814FA0066_SET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1613BAA0)
#define CLASS_1_5226E24814FA0066__CTOR_OFFSET UNITYSDK_OFFSET(0x1613B7F0)

inline static constexpr unsigned int Class_1_5226E24814FA0066_TypeDefinitionIndex = 62160;

class Class_1_5226E24814FA0066 : public ::System::Object
{
public:
	::RPG::GameCore::LevelSpatialIntVec2* _LowerUpperBounds_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* _CookedGridList_k__BackingField; // 0x18
	::Struct_2_CC45B4503679E14E_50 LCPBNMNGFDG; // 0x20

	::System::Void _ctor(::Struct_2_CC45B4503679E14E_50 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_50))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FD4F0CCAF05C452()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066_METHOD_1_5FD4F0CCAF05C452_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* get_CookedGridList()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066_GET_COOKEDGRIDLIST_OFFSET))(this);
	}

	::System::Void set_CookedGridList(::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066_SET_COOKEDGRIDLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelSpatialIntVec2* get_LowerUpperBounds()
	{
		return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066_GET_LOWERUPPERBOUNDS_OFFSET))(this);
	}

	::System::Void set_LowerUpperBounds(::RPG::GameCore::LevelSpatialIntVec2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + CLASS_1_5226E24814FA0066_SET_LOWERUPPERBOUNDS_OFFSET))(this, a1);
	}
};
