#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_METHOD_3_6FD465F625C3897E_OFFSET UNITYSDK_OFFSET(0x194218B0)
#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_METHOD_3_F694572AC15F1A88_OFFSET UNITYSDK_OFFSET(0x19421930)
#define RPG_GAMECORE_ADVENABLEOWNERIDLESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19421900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableOwnerIdleShow_TypeDefinitionIndex = 19419;

	class AdvEnableOwnerIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FD465F625C3897E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableOwnerIdleShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_METHOD_3_6FD465F625C3897E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F694572AC15F1A88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableOwnerIdleShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableOwnerIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEOWNERIDLESHOW_METHOD_3_F694572AC15F1A88_OFFSET))(a1, a2);
		}
	};
}
