#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_40ABEF8EAA245044_OFFSET UNITYSDK_OFFSET(0x1738BB60)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_AF80E9A315138B99_OFFSET UNITYSDK_OFFSET(0x1738BC40)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1738BBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByOtherFaction_TypeDefinitionIndex = 15451;

	class MarbleByOtherFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_40ABEF8EAA245044(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByOtherFaction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByOtherFaction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_40ABEF8EAA245044_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AF80E9A315138B99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByOtherFaction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByOtherFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_AF80E9A315138B99_OFFSET))(a1, a2);
		}
	};
}
