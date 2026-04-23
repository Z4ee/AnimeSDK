#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_METHOD_3_A2598C6E02DF6B6A_OFFSET UNITYSDK_OFFSET(0x18841CC0)
#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_METHOD_3_C6CFF2C372B32B5B_OFFSET UNITYSDK_OFFSET(0x18841D40)
#define RPG_GAMECORE_CREATEBATTLEEVENTQTEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18841D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleEventQTEUI_TypeDefinitionIndex = 22311;

	class CreateBattleEventQTEUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EventID; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2598C6E02DF6B6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventQTEUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventQTEUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_METHOD_3_A2598C6E02DF6B6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6CFF2C372B32B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateBattleEventQTEUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateBattleEventQTEUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLEEVENTQTEUI_METHOD_3_C6CFF2C372B32B5B_OFFSET))(a1, a2);
		}
	};
}
