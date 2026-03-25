#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCSETFROZEN_METHOD_3_535959F4F27CD99C_OFFSET UNITYSDK_OFFSET(0x16F35540)
#define RPG_GAMECORE_ADVNPCSETFROZEN_METHOD_3_7D0E86508A4B598D_OFFSET UNITYSDK_OFFSET(0x16F355C0)
#define RPG_GAMECORE_ADVNPCSETFROZEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F35590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCSetFrozen_TypeDefinitionIndex = 18624;

	class AdvNPCSetFrozen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsFrozen; // 0x18
		::System::Boolean AffectCollider; // 0x19
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_535959F4F27CD99C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSetFrozen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSetFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN_METHOD_3_535959F4F27CD99C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D0E86508A4B598D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCSetFrozen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCSetFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCSETFROZEN_METHOD_3_7D0E86508A4B598D_OFFSET))(a1, a2);
		}
	};
}
