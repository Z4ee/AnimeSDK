#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSPECIALSP_METHOD_3_247ED945856FBCCA_OFFSET UNITYSDK_OFFSET(0x1D1BEA40)
#define RPG_GAMECORE_MODIFYSPECIALSP_METHOD_3_5A1201D32B047426_OFFSET UNITYSDK_OFFSET(0x1D1BE9F0)
#define RPG_GAMECORE_MODIFYSPECIALSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BEA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySpecialSP_TypeDefinitionIndex = 22811;

	class ModifySpecialSP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* SetValue; // 0x20
		::RPG::GameCore::DynamicFloat* SetMaxSPRatio; // 0x28
		::RPG::GameCore::DynamicFloat* AddValue; // 0x30
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x38
		::RPG::GameCore::DynamicFloat* AddMaxSPRatio; // 0x40
		::RPG::GameCore::DynamicFloat* FixedAddValue; // 0x48
		::RPG::GameCore::DynamicFloat* FixedAddRatio; // 0x50
		::RPG::GameCore::DynamicFloat* FixedAddMaxSPRatio; // 0x58
		::System::Boolean IgnoreBlock; // 0x60
		::System::Boolean SyncToSummoner; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A1201D32B047426(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySpecialSP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySpecialSP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP_METHOD_3_5A1201D32B047426_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_247ED945856FBCCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySpecialSP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySpecialSP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPECIALSP_METHOD_3_247ED945856FBCCA_OFFSET))(a1, a2);
		}
	};
}
