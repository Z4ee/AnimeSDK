#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_0EAC3E5782F11F24_OFFSET UNITYSDK_OFFSET(0x199ADD20)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_344A84D56D0DED34_OFFSET UNITYSDK_OFFSET(0x199ADCA0)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x199ADCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterResearchSubmit_TypeDefinitionIndex = 19933;

	class MonsterResearchSubmit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ActivityMonsterResearchID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion1; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion2; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion3; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_344A84D56D0DED34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterResearchSubmit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResearchSubmit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_344A84D56D0DED34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0EAC3E5782F11F24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_METHOD_3_0EAC3E5782F11F24_OFFSET))(a1, a2);
		}
	};
}
