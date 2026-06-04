#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_METHOD_2_27BD2A9318FDE584_OFFSET UNITYSDK_OFFSET(0x19BD6440)
#define RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD65C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityPropertyRangeGroup_TypeDefinitionIndex = 16785;

	class RtAbilityPropertyRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtAbilityProperty Property; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_27BD2A9318FDE584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtAbilityPropertyRangeGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtAbilityPropertyRangeGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_METHOD_2_27BD2A9318FDE584_OFFSET))(a1, a2);
		}
	};
}
