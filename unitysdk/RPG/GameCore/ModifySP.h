#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSP_METHOD_3_5D6BCECA4985B0C9_OFFSET UNITYSDK_OFFSET(0x1B1AC430)
#define RPG_GAMECORE_MODIFYSP_METHOD_3_B37C2DE6482AA758_OFFSET UNITYSDK_OFFSET(0x1B1AC480)
#define RPG_GAMECORE_MODIFYSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AC470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySP_TypeDefinitionIndex = 22721;

	class ModifySP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean IgnoreBlock; // 0x30
		::System::Boolean SyncToSummoner; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D6BCECA4985B0C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP_METHOD_3_5D6BCECA4985B0C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B37C2DE6482AA758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSP_METHOD_3_B37C2DE6482AA758_OFFSET))(a1, a2);
		}
	};
}
