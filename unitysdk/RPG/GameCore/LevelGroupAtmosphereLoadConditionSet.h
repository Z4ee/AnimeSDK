#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_METHOD_2_927BC1B2EA9D9352_OFFSET UNITYSDK_OFFSET(0x1C116C10)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupAtmosphereLoadConditionSet_TypeDefinitionIndex = 17022;

	class LevelGroupAtmosphereLoadConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupAtmosphereLoadCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_927BC1B2EA9D9352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_METHOD_2_927BC1B2EA9D9352_OFFSET))(a1, a2);
		}
	};
}
