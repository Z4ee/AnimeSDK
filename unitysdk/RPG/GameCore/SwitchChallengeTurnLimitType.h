#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE_METHOD_3_54A41B6145012593_OFFSET UNITYSDK_OFFSET(0x19CD94F0)
#define RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE_METHOD_3_FC4C4CC271833794_OFFSET UNITYSDK_OFFSET(0x19CD9470)
#define RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD94C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchChallengeTurnLimitType_TypeDefinitionIndex = 22172;

	class SwitchChallengeTurnLimitType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NoneTaskList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* LoseTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WinTaskList; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CustomTaskList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC4C4CC271833794(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchChallengeTurnLimitType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchChallengeTurnLimitType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE_METHOD_3_FC4C4CC271833794_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54A41B6145012593(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchChallengeTurnLimitType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchChallengeTurnLimitType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGETURNLIMITTYPE_METHOD_3_54A41B6145012593_OFFSET))(a1, a2);
		}
	};
}
