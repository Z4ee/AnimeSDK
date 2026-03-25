#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_B09166E33F0A8C9E_OFFSET UNITYSDK_OFFSET(0x16F44120)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_BD8B6F89F67D33AC_OFFSET UNITYSDK_OFFSET(0x16F441A0)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F44170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSkillAddServerCheckSkillResultCallback_TypeDefinitionIndex = 18500;

	class AdvSkillAddServerCheckSkillResultCallback : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18
		::System::Boolean Block; // 0x20
		::System::Single BlockDelayTime; // 0x24
		::System::Single ShowWheelDelayTime; // 0x28
		::System::Boolean Transparent; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B09166E33F0A8C9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_B09166E33F0A8C9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD8B6F89F67D33AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_BD8B6F89F67D33AC_OFFSET))(a1, a2);
		}
	};
}
