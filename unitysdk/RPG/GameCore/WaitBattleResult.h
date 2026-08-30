#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITBATTLERESULT_METHOD_3_39E83CF7C63B6FF6_OFFSET UNITYSDK_OFFSET(0x1DEB4E60)
#define RPG_GAMECORE_WAITBATTLERESULT_METHOD_3_D16A790D525624B9_OFFSET UNITYSDK_OFFSET(0x1DEB4EA0)
#define RPG_GAMECORE_WAITBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleResult_TypeDefinitionIndex = 23145;

	class WaitBattleResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WinTaskList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LoseTaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39E83CF7C63B6FF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT_METHOD_3_39E83CF7C63B6FF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D16A790D525624B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLERESULT_METHOD_3_D16A790D525624B9_OFFSET))(a1, a2);
		}
	};
}
