#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePauseEnvironmentData; }

#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_METHOD_3_02E6787D1F31849E_OFFSET UNITYSDK_OFFSET(0x1C2D5BF0)
#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_METHOD_3_CE71B7B143B5435F_OFFSET UNITYSDK_OFFSET(0x1C2D5C40)
#define RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D5C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPauseEnvironmentInfo_TypeDefinitionIndex = 21979;

	class SetBattleUIPauseEnvironmentInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::Il2CppArray<::RPG::GameCore::BattlePauseEnvironmentData*>* EnvironmentInfos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02E6787D1F31849E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_METHOD_3_02E6787D1F31849E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE71B7B143B5435F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBattleUIPauseEnvironmentInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPAUSEENVIRONMENTINFO_METHOD_3_CE71B7B143B5435F_OFFSET))(a1, a2);
		}
	};
}
