#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_METHOD_3_27E023B9D22CE487_OFFSET UNITYSDK_OFFSET(0x19C46410)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_METHOD_3_FBEE9758FE6F0C83_OFFSET UNITYSDK_OFFSET(0x19C465C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x19C46500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTotalHPFromMonsterID_TypeDefinitionIndex = 21529;

	class SetDynamicValueByTotalHPFromMonsterID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x28
		::RPG::GameCore::DynamicFloat* WaveIndex; // 0x30
		::RPG::GameCore::DynamicFloat* OverrideLevel; // 0x38
		::RPG::GameCore::DynamicFloat* OverrideHardLevelGroup; // 0x40
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup; // 0x48
		::RPG::GameCore::DynamicFloat* OverrideEliteGroup2; // 0x50
		::RPG::GameCore::DynamicFloat* Phase; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27E023B9D22CE487(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_METHOD_3_27E023B9D22CE487_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBEE9758FE6F0C83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOTALHPFROMMONSTERID_METHOD_3_FBEE9758FE6F0C83_OFFSET))(a1, a2);
		}
	};
}
