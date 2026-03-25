#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DispelOrder.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DISPELSTATUS_METHOD_3_40C044C8BA1D2958_OFFSET UNITYSDK_OFFSET(0x171735B0)
#define RPG_GAMECORE_DISPELSTATUS_METHOD_3_E657D7E59E6A73F9_OFFSET UNITYSDK_OFFSET(0x17173510)
#define RPG_GAMECORE_DISPELSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x17173570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DispelStatus_TypeDefinitionIndex = 20867;

	class DispelStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnlyAlive; // 0x20
		::System::Boolean OnlyCanDispel; // 0x21
		::RPG::GameCore::EnumStatusType BuffType; // 0x24
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x28
		::RPG::GameCore::DynamicFloat* Numbers; // 0x30
		::RPG::GameCore::DispelOrder Order; // 0x38
		::System::String* DispelCountKey; // 0x40
		::System::Boolean IsSilentDispel; // 0x48
		::System::Boolean MuteAllVisualEffect; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E657D7E59E6A73F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DispelStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DispelStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS_METHOD_3_E657D7E59E6A73F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40C044C8BA1D2958(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DispelStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS_METHOD_3_40C044C8BA1D2958_OFFSET))(a1, a2);
		}
	};
}
