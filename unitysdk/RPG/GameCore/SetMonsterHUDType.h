#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_413959577DD5D5AB_OFFSET UNITYSDK_OFFSET(0x18E3ADC0)
#define RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_AB4C3F23F74160D8_OFFSET UNITYSDK_OFFSET(0x18E3AE40)
#define RPG_GAMECORE_SETMONSTERHUDTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3AE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDType_TypeDefinitionIndex = 21671;

	class SetMonsterHUDType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDType HUDType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_413959577DD5D5AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_413959577DD5D5AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4C3F23F74160D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_AB4C3F23F74160D8_OFFSET))(a1, a2);
		}
	};
}
