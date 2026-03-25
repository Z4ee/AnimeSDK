#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooPageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_METHOD_3_96044B4DADE250A6_OFFSET UNITYSDK_OFFSET(0x17704080)
#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_METHOD_3_B8E6A9AB5619356F_OFFSET UNITYSDK_OFFSET(0x17704000)
#define RPG_GAMECORE_SHOWSPACEZOOMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17704050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSpaceZooMainPage_TypeDefinitionIndex = 19235;

	class ShowSpaceZooMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SpaceZooPageType PageType; // 0x18
		::System::Boolean WaitUIClose; // 0x1C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::System::String* Param; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8E6A9AB5619356F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpaceZooMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpaceZooMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_METHOD_3_B8E6A9AB5619356F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96044B4DADE250A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpaceZooMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpaceZooMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPACEZOOMAINPAGE_METHOD_3_96044B4DADE250A6_OFFSET))(a1, a2);
		}
	};
}
