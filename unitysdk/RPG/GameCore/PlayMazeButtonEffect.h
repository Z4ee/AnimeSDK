#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18C0D8D0)
#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0D850)
#define RPG_GAMECORE_PLAYMAZEBUTTONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0D8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMazeButtonEffect_TypeDefinitionIndex = 19455;

	class PlayMazeButtonEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::AdventureSkillType BtnType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMazeButtonEffect*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMazeButtonEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMazeButtonEffect* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMazeButtonEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMAZEBUTTONEFFECT_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
