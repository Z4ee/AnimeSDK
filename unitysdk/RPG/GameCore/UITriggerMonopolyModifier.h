#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_METHOD_3_672CED75576CFD85_OFFSET UNITYSDK_OFFSET(0x190E1A20)
#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_METHOD_3_CF2561C7C8AC1E31_OFFSET UNITYSDK_OFFSET(0x190E1910)
#define RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E19F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UITriggerMonopolyModifier_TypeDefinitionIndex = 20573;

	class UITriggerMonopolyModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF2561C7C8AC1E31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UITriggerMonopolyModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UITriggerMonopolyModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_METHOD_3_CF2561C7C8AC1E31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_672CED75576CFD85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UITriggerMonopolyModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UITriggerMonopolyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UITRIGGERMONOPOLYMODIFIER_METHOD_3_672CED75576CFD85_OFFSET))(a1, a2);
		}
	};
}
