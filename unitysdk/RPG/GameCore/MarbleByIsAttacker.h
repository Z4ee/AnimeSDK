#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_48DF30B15A40B92D_OFFSET UNITYSDK_OFFSET(0x1BD15E50)
#define RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_A963C18ED999C84E_OFFSET UNITYSDK_OFFSET(0x1BD15DF0)
#define RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD15E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsAttacker_TypeDefinitionIndex = 16202;

	class MarbleByIsAttacker : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A963C18ED999C84E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_A963C18ED999C84E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_48DF30B15A40B92D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISATTACKER_METHOD_4_48DF30B15A40B92D_OFFSET))(a1, a2);
		}
	};
}
