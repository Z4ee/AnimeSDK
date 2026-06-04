#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UIPANELGROUP_METHOD_2_DCF6237C6FD54892_OFFSET UNITYSDK_OFFSET(0x19E31390)
#define RPG_GAMECORE_UIPANELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E31450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIPanelGroup_TypeDefinitionIndex = 16276;

	class UIPanelGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPANELGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DCF6237C6FD54892(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UIPanelGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UIPanelGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIPANELGROUP_METHOD_2_DCF6237C6FD54892_OFFSET))(a1, a2);
		}
	};
}
