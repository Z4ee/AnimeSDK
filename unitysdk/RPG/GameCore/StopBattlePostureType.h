#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_2046C967D5D8BC18_OFFSET UNITYSDK_OFFSET(0x1CAFC9A0)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_D5EF567A0AA7B255_OFFSET UNITYSDK_OFFSET(0x1CAFCA70)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFCA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopBattlePostureType_TypeDefinitionIndex = 20213;

	class StopBattlePostureType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2046C967D5D8BC18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_2046C967D5D8BC18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5EF567A0AA7B255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBattlePostureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_D5EF567A0AA7B255_OFFSET))(a1, a2);
		}
	};
}
