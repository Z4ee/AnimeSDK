#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_4C93DF72C4416C8A_OFFSET UNITYSDK_OFFSET(0x19BC3910)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_4F2DEB40336D8F19_OFFSET UNITYSDK_OFFSET(0x19BC3990)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC3960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionShowUI_TypeDefinitionIndex = 20890;

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

		static ::System::Void Method_3_4C93DF72C4416C8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionShowUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionShowUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_4C93DF72C4416C8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F2DEB40336D8F19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONSHOWUI_METHOD_3_4F2DEB40336D8F19_OFFSET))(a1, a2);
		}
	};
}
