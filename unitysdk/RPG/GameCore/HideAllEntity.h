#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }

#define RPG_GAMECORE_HIDEALLENTITY_METHOD_3_23840EB6F6E9BBDE_OFFSET UNITYSDK_OFFSET(0x1B682950)
#define RPG_GAMECORE_HIDEALLENTITY_METHOD_3_D2E654C229E29501_OFFSET UNITYSDK_OFFSET(0x1B682990)
#define RPG_GAMECORE_HIDEALLENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B682980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideAllEntity_TypeDefinitionIndex = 20866;

	class HideAllEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::System::Boolean HideNPC; // 0x19
		::System::Boolean HideNPCMonster; // 0x1A
		::System::Boolean HideProp; // 0x1B
		::Il2CppArray<::RPG::GameCore::ClearNpcDistanceTrigger*>* NotHideEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23840EB6F6E9BBDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideAllEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideAllEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_METHOD_3_23840EB6F6E9BBDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2E654C229E29501(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideAllEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_METHOD_3_D2E654C229E29501_OFFSET))(a1, a2);
		}
	};
}
