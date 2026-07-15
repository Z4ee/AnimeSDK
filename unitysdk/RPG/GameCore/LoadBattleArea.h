#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADBATTLEAREA_METHOD_3_4C3AD656ADDCAEE6_OFFSET UNITYSDK_OFFSET(0x1BCC8430)
#define RPG_GAMECORE_LOADBATTLEAREA_METHOD_3_71886D9B8E928425_OFFSET UNITYSDK_OFFSET(0x1BCC8470)
#define RPG_GAMECORE_LOADBATTLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC8460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadBattleArea_TypeDefinitionIndex = 22483;

	class LoadBattleArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLoad; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C3AD656ADDCAEE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadBattleArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadBattleArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA_METHOD_3_4C3AD656ADDCAEE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71886D9B8E928425(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadBattleArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadBattleArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADBATTLEAREA_METHOD_3_71886D9B8E928425_OFFSET))(a1, a2);
		}
	};
}
