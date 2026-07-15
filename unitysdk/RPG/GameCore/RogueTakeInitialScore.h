#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_C2AC8B3BB5B44EF8_OFFSET UNITYSDK_OFFSET(0x1BB6ADE0)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_DAFAC9E8BDB9E335_OFFSET UNITYSDK_OFFSET(0x1BB6AD10)
#define RPG_GAMECORE_ROGUETAKEINITIALSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6ADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTakeInitialScore_TypeDefinitionIndex = 21478;

	class RogueTakeInitialScore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAFAC9E8BDB9E335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTakeInitialScore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTakeInitialScore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_DAFAC9E8BDB9E335_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2AC8B3BB5B44EF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTakeInitialScore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTakeInitialScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETAKEINITIALSCORE_METHOD_3_C2AC8B3BB5B44EF8_OFFSET))(a1, a2);
		}
	};
}
