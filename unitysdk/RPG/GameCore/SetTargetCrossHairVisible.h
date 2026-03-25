#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_0EE3FE06A221A7C5_OFFSET UNITYSDK_OFFSET(0x176E16C0)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_292232884F995C79_OFFSET UNITYSDK_OFFSET(0x176E1740)
#define RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E1710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetCrossHairVisible_TypeDefinitionIndex = 21148;

	class SetTargetCrossHairVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EE3FE06A221A7C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCrossHairVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCrossHairVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_0EE3FE06A221A7C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_292232884F995C79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetCrossHairVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetCrossHairVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCROSSHAIRVISIBLE_METHOD_3_292232884F995C79_OFFSET))(a1, a2);
		}
	};
}
