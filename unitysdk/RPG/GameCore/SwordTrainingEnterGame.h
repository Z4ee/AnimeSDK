#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGENTERGAME_METHOD_3_B703B7DE70656140_OFFSET UNITYSDK_OFFSET(0x1779CA50)
#define RPG_GAMECORE_SWORDTRAININGENTERGAME_METHOD_3_DD91AAEA9E0B3B49_OFFSET UNITYSDK_OFFSET(0x1779CAD0)
#define RPG_GAMECORE_SWORDTRAININGENTERGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1779CAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEnterGame_TypeDefinitionIndex = 18616;

	class SwordTrainingEnterGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B703B7DE70656140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingEnterGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEnterGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME_METHOD_3_B703B7DE70656140_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD91AAEA9E0B3B49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingEnterGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingEnterGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGENTERGAME_METHOD_3_DD91AAEA9E0B3B49_OFFSET))(a1, a2);
		}
	};
}
