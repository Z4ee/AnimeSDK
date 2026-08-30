#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityBase; }

#define RPG_GAMECORE_CHIMERAABILITYLIST_METHOD_2_30928B1A8F1AF327_OFFSET UNITYSDK_OFFSET(0x1E01E350)
#define RPG_GAMECORE_CHIMERAABILITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityList_TypeDefinitionIndex = 15665;

	class ChimeraAbilityList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::Il2CppArray<::RPG::GameCore::ChimeraAbilityBase*>* Abilities; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_30928B1A8F1AF327(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYLIST_METHOD_2_30928B1A8F1AF327_OFFSET))(a1, a2);
		}
	};
}
