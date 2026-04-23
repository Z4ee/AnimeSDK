#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StackWeakResistanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ResistanceItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKWEAKRESISTANCE_METHOD_3_63C42F7608FE7BF7_OFFSET UNITYSDK_OFFSET(0x18E88550)
#define RPG_GAMECORE_STACKWEAKRESISTANCE_METHOD_3_AD4D5E20631BE5EE_OFFSET UNITYSDK_OFFSET(0x18E885D0)
#define RPG_GAMECORE_STACKWEAKRESISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E885A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackWeakResistance_TypeDefinitionIndex = 22005;

	class StackWeakResistance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StackWeakResistanceType StackType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ResistanceItem*>* StackResistanceList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_63C42F7608FE7BF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackWeakResistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackWeakResistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE_METHOD_3_63C42F7608FE7BF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD4D5E20631BE5EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackWeakResistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackWeakResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKWEAKRESISTANCE_METHOD_3_AD4D5E20631BE5EE_OFFSET))(a1, a2);
		}
	};
}
