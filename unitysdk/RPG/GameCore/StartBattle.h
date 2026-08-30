#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTBATTLE_METHOD_3_727A7A9BAD2BF6D8_OFFSET UNITYSDK_OFFSET(0x1CAF4130)
#define RPG_GAMECORE_STARTBATTLE_METHOD_3_86CA1652D591F315_OFFSET UNITYSDK_OFFSET(0x1CAF4200)
#define RPG_GAMECORE_STARTBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF41F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattle_TypeDefinitionIndex = 23140;

	class StartBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_727A7A9BAD2BF6D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE_METHOD_3_727A7A9BAD2BF6D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_86CA1652D591F315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLE_METHOD_3_86CA1652D591F315_OFFSET))(a1, a2);
		}
	};
}
