#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClearNpcDistanceTrigger; }

#define RPG_GAMECORE_HIDEALLENTITY_METHOD_3_A91F4447CF0AF3D8_OFFSET UNITYSDK_OFFSET(0x189FD680)
#define RPG_GAMECORE_HIDEALLENTITY_METHOD_3_BE222FC82982BAAA_OFFSET UNITYSDK_OFFSET(0x189FD600)
#define RPG_GAMECORE_HIDEALLENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x189FD650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideAllEntity_TypeDefinitionIndex = 20515;

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

		static ::System::Void Method_3_BE222FC82982BAAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideAllEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideAllEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_METHOD_3_BE222FC82982BAAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A91F4447CF0AF3D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideAllEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideAllEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEALLENTITY_METHOD_3_A91F4447CF0AF3D8_OFFSET))(a1, a2);
		}
	};
}
