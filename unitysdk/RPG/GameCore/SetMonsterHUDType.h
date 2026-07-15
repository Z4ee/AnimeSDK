#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_989D6A1BF1F09563_OFFSET UNITYSDK_OFFSET(0x1C6022D0)
#define RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_AB4C3F23F74160D8_OFFSET UNITYSDK_OFFSET(0x1C602310)
#define RPG_GAMECORE_SETMONSTERHUDTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C602300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDType_TypeDefinitionIndex = 21946;

	class SetMonsterHUDType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDType HUDType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_989D6A1BF1F09563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_989D6A1BF1F09563_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB4C3F23F74160D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDTYPE_METHOD_3_AB4C3F23F74160D8_OFFSET))(a1, a2);
		}
	};
}
