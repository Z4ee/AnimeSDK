#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_METHOD_3_5CDB545D24D07606_OFFSET UNITYSDK_OFFSET(0x19BC6D70)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_METHOD_3_6EB74784776C0B75_OFFSET UNITYSDK_OFFSET(0x19BC6CF0)
#define RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC6D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExhibitionShowUI_TypeDefinitionIndex = 20895;

	class RogueTournExhibitionShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6EB74784776C0B75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournExhibitionShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExhibitionShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_METHOD_3_6EB74784776C0B75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5CDB545D24D07606(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournExhibitionShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExhibitionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXHIBITIONSHOWUI_METHOD_3_5CDB545D24D07606_OFFSET))(a1, a2);
		}
	};
}
