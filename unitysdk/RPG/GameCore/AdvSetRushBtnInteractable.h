#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_METHOD_3_308557A1B314959B_OFFSET UNITYSDK_OFFSET(0x16F42740)
#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_METHOD_3_8D47425D35CD4132_OFFSET UNITYSDK_OFFSET(0x16F426C0)
#define RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F42710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetRushBtnInteractable_TypeDefinitionIndex = 18487;

	class AdvSetRushBtnInteractable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsInteractable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D47425D35CD4132(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetRushBtnInteractable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetRushBtnInteractable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_METHOD_3_8D47425D35CD4132_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_308557A1B314959B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetRushBtnInteractable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetRushBtnInteractable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETRUSHBTNINTERACTABLE_METHOD_3_308557A1B314959B_OFFSET))(a1, a2);
		}
	};
}
