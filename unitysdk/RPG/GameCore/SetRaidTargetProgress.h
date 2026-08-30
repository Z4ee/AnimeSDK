#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETRAIDTARGETPROGRESS_METHOD_3_C5E406D3A022C9B5_OFFSET UNITYSDK_OFFSET(0x1E08BDD0)
#define RPG_GAMECORE_SETRAIDTARGETPROGRESS_METHOD_3_E55AA99159641310_OFFSET UNITYSDK_OFFSET(0x1E08BD80)
#define RPG_GAMECORE_SETRAIDTARGETPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08BDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRaidTargetProgress_TypeDefinitionIndex = 23388;

	class SetRaidTargetProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RaidTargetID; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E55AA99159641310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRaidTargetProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRaidTargetProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS_METHOD_3_E55AA99159641310_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5E406D3A022C9B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETRAIDTARGETPROGRESS_METHOD_3_C5E406D3A022C9B5_OFFSET))(a1, a2);
		}
	};
}
