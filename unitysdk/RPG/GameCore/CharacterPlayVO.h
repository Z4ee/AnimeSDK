#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERPLAYVO_METHOD_3_0738828ADA3C76BE_OFFSET UNITYSDK_OFFSET(0x19613350)
#define RPG_GAMECORE_CHARACTERPLAYVO_METHOD_3_A5608D858DFDB948_OFFSET UNITYSDK_OFFSET(0x196133D0)
#define RPG_GAMECORE_CHARACTERPLAYVO__CTOR_OFFSET UNITYSDK_OFFSET(0x196133A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPlayVO_TypeDefinitionIndex = 21251;

	class CharacterPlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CharacterVOType VOType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0738828ADA3C76BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPlayVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPlayVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO_METHOD_3_0738828ADA3C76BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A5608D858DFDB948(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPlayVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPLAYVO_METHOD_3_A5608D858DFDB948_OFFSET))(a1, a2);
		}
	};
}
