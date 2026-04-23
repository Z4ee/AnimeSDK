#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET UNITYSDK_OFFSET(0x18747F00)
#define RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_D5D6821474F075EC_OFFSET UNITYSDK_OFFSET(0x18747E30)
#define RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18747EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasAssistAvatar_TypeDefinitionIndex = 19784;

	class ByHasAssistAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5D6821474F075EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_D5D6821474F075EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7450135CE2471DA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_METHOD_4_7450135CE2471DA6_OFFSET))(a1, a2);
		}
	};
}
