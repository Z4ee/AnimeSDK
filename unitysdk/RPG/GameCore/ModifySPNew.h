#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYSPNEW_METHOD_3_3EAEFD5AE835CF73_OFFSET UNITYSDK_OFFSET(0x1D2B6A40)
#define RPG_GAMECORE_MODIFYSPNEW_METHOD_3_A49DA89F0D8D1147_OFFSET UNITYSDK_OFFSET(0x1D2B69F0)
#define RPG_GAMECORE_MODIFYSPNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifySPNew_TypeDefinitionIndex = 22372;

	class ModifySPNew : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* Tag; // 0x20
		::RPG::GameCore::DynamicFloat* SetValue; // 0x28
		::RPG::GameCore::DynamicFloat* SetMaxSPRatio; // 0x30
		::RPG::GameCore::DynamicFloat* AddValue; // 0x38
		::RPG::GameCore::DynamicFloat* AddRatio; // 0x40
		::RPG::GameCore::DynamicFloat* AddMaxSPRatio; // 0x48
		::RPG::GameCore::DynamicFloat* FixedAddValue; // 0x50
		::RPG::GameCore::DynamicFloat* FixedAddRatio; // 0x58
		::RPG::GameCore::DynamicFloat* FixedAddMaxSPRatio; // 0x60
		::System::Boolean IgnoreBlock; // 0x68
		::System::Boolean SyncToSummoner; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A49DA89F0D8D1147(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySPNew*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySPNew*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW_METHOD_3_A49DA89F0D8D1147_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3EAEFD5AE835CF73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifySPNew* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifySPNew*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSPNEW_METHOD_3_3EAEFD5AE835CF73_OFFSET))(a1, a2);
		}
	};
}
