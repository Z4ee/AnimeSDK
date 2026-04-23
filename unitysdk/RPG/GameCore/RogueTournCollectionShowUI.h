#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_0A1E739F0C99B91C_OFFSET UNITYSDK_OFFSET(0x18D6FAA0)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_3EB674BFD6417B7F_OFFSET UNITYSDK_OFFSET(0x18D6FB20)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6FAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionShowUI_TypeDefinitionIndex = 20978;

	class RogueTournCollectionShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterUI; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A1E739F0C99B91C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_0A1E739F0C99B91C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3EB674BFD6417B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_3EB674BFD6417B7F_OFFSET))(a1, a2);
		}
	};
}
