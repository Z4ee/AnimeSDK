#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelRegionStateCondition; }

#define RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0884F0)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B088620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateConditionSet_TypeDefinitionIndex = 16687;

	class LevelRegionStateConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRegionStateCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITIONSET_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
