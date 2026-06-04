#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPLAYVO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x198871B0)
#define RPG_GAMECORE_LEVELPLAYVO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19887130)
#define RPG_GAMECORE_LEVELPLAYVO__CTOR_OFFSET UNITYSDK_OFFSET(0x19887180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayVO_TypeDefinitionIndex = 22115;

	class LevelPlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterVOType VOType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPlayVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPlayVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPlayVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
