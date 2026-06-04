#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeConditionLogicType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }

#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987E620)
#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1987E740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeConditionInfos_TypeDefinitionIndex = 16303;

	class LevelNavNodeConditionInfos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNavNodeConditionLogicType ConditionLogicType; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* Conditions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeConditionInfos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeConditionInfos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFOS_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
