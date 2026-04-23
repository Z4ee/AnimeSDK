#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_4A0DD9E230B05D41_OFFSET UNITYSDK_OFFSET(0x18EA2780)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_D5EF567A0AA7B255_OFFSET UNITYSDK_OFFSET(0x18EA2890)
#define RPG_GAMECORE_STOPBATTLEPOSTURETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA2860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopBattlePostureType_TypeDefinitionIndex = 19406;

	class StopBattlePostureType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A0DD9E230B05D41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBattlePostureType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBattlePostureType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_4A0DD9E230B05D41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5EF567A0AA7B255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBattlePostureType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBATTLEPOSTURETYPE_METHOD_3_D5EF567A0AA7B255_OFFSET))(a1, a2);
		}
	};
}
