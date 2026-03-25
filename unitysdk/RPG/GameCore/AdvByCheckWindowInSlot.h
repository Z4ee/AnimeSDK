#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_METHOD_4_1487FD0462CF124B_OFFSET UNITYSDK_OFFSET(0x16F24D00)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_METHOD_4_6B226727F04CD919_OFFSET UNITYSDK_OFFSET(0x16F24DD0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowInSlot_TypeDefinitionIndex = 19587;

	class AdvByCheckWindowInSlot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::System::UInt32 WindowIndex; // 0x30
		::System::UInt32 SlotIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1487FD0462CF124B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowInSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowInSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_METHOD_4_1487FD0462CF124B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B226727F04CD919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWINSLOT_METHOD_4_6B226727F04CD919_OFFSET))(a1, a2);
		}
	};
}
