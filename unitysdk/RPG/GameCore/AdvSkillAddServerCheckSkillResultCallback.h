#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_8E7CB0B4EAA20403_OFFSET UNITYSDK_OFFSET(0x19439C90)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_ECD351E4700F5E43_OFFSET UNITYSDK_OFFSET(0x19439C10)
#define RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19439C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSkillAddServerCheckSkillResultCallback_TypeDefinitionIndex = 19081;

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

		static ::System::Void Method_3_ECD351E4700F5E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_ECD351E4700F5E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E7CB0B4EAA20403(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSKILLADDSERVERCHECKSKILLRESULTCALLBACK_METHOD_3_8E7CB0B4EAA20403_OFFSET))(a1, a2);
		}
	};
}
