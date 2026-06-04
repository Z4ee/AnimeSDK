#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGroupSpatialBakedInfo; }
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define CLASS_1_25A913757D0756D0_GET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x14347320)
#define CLASS_1_25A913757D0756D0_GET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x14347340)
#define CLASS_1_25A913757D0756D0_METHOD_1_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x143471A0)
#define CLASS_1_25A913757D0756D0_SET_COOKEDGRIDLIST_OFFSET UNITYSDK_OFFSET(0x14347330)
#define CLASS_1_25A913757D0756D0_SET_LOWERUPPERBOUNDS_OFFSET UNITYSDK_OFFSET(0x14347350)
#define CLASS_1_25A913757D0756D0__CTOR_OFFSET UNITYSDK_OFFSET(0x14347190)

inline static constexpr unsigned int Class_1_25A913757D0756D0_TypeDefinitionIndex = 58059;

class Class_1_25A913757D0756D0 : public ::System::Object
{
public:
	::RPG::GameCore::LevelSpatialIntVec2* _LowerUpperBounds_k__BackingField; // 0x10
	::RPG::GameCore::LevelGroupSpatialBakedInfo* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* _CookedGridList_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::LevelGroupSpatialBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupSpatialBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0_METHOD_1_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* get_CookedGridList()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0_GET_COOKEDGRIDLIST_OFFSET))(this);
	}

	::System::Void set_CookedGridList(::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelSpatialIntVec2*>*))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0_SET_COOKEDGRIDLIST_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelSpatialIntVec2* get_LowerUpperBounds()
	{
		return ((::RPG::GameCore::LevelSpatialIntVec2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0_GET_LOWERUPPERBOUNDS_OFFSET))(this);
	}

	::System::Void set_LowerUpperBounds(::RPG::GameCore::LevelSpatialIntVec2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + CLASS_1_25A913757D0756D0_SET_LOWERUPPERBOUNDS_OFFSET))(this, a1);
	}
};
