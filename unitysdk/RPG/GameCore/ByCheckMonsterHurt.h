#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_4E1537E8B0AE8FAE;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKMONSTERHURT_METHOD_4_31675C6D34F789F1_OFFSET UNITYSDK_OFFSET(0x170007A0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT_METHOD_4_6A8FB5FF143BD1F3_OFFSET UNITYSDK_OFFSET(0x170006D0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT__CTOR_OFFSET UNITYSDK_OFFSET(0x17000750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterHurt_TypeDefinitionIndex = 21667;

	class ByCheckMonsterHurt : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::System::Single HpPercent; // 0x24
		::Class_1_4E1537E8B0AE8FAE* OverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A8FB5FF143BD1F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterHurt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterHurt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_METHOD_4_6A8FB5FF143BD1F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31675C6D34F789F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_METHOD_4_31675C6D34F789F1_OFFSET))(a1, a2);
		}
	};
}
