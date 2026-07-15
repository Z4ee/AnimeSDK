#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_660BD7690044EF45_OFFSET UNITYSDK_OFFSET(0x1BD16230)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_9F097322B7E777FF_OFFSET UNITYSDK_OFFSET(0x1BD16290)
#define RPG_GAMECORE_MARBLEBYOTHERFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD16280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByOtherFaction_TypeDefinitionIndex = 16206;

	class MarbleByOtherFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_660BD7690044EF45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByOtherFaction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByOtherFaction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_660BD7690044EF45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9F097322B7E777FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByOtherFaction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByOtherFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYOTHERFACTION_METHOD_4_9F097322B7E777FF_OFFSET))(a1, a2);
		}
	};
}
