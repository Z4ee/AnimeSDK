#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP_METHOD_3_995B64AB9FF9D2EF_OFFSET UNITYSDK_OFFSET(0x1CDB5AD0)
#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP_METHOD_3_D222763753E57829_OFFSET UNITYSDK_OFFSET(0x1CDB5B50)
#define RPG_GAMECORE_ADDRESHAEASTEREGGPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB5B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaEasterEggProp_TypeDefinitionIndex = 21783;

	class AddReShaEasterEggProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* SuccessSound; // 0x20
		::RPG::GameCore::DynamicString* FailSound; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_995B64AB9FF9D2EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP_METHOD_3_995B64AB9FF9D2EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D222763753E57829(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGPROP_METHOD_3_D222763753E57829_OFFSET))(a1, a2);
		}
	};
}
