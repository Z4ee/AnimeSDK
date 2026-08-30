#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMSKILLINFOCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD5057C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimSkillInfoCustomData_TypeDefinitionIndex = 76769;

	class MonoFiveDimSkillInfoCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 SkillID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMSKILLINFOCUSTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
