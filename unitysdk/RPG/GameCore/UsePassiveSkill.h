#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USEPASSIVESKILL_METHOD_3_7FC60F7DB467D48F_OFFSET UNITYSDK_OFFSET(0x1B885D40)
#define RPG_GAMECORE_USEPASSIVESKILL_METHOD_3_9F76E6CD89681F74_OFFSET UNITYSDK_OFFSET(0x1B885D00)
#define RPG_GAMECORE_USEPASSIVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B885D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UsePassiveSkill_TypeDefinitionIndex = 22582;

	class UsePassiveSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9F76E6CD89681F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UsePassiveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UsePassiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL_METHOD_3_9F76E6CD89681F74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FC60F7DB467D48F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UsePassiveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UsePassiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL_METHOD_3_7FC60F7DB467D48F_OFFSET))(a1, a2);
		}
	};
}
