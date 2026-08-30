#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationSlotConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FORMATIONPATTERNCONFIG_METHOD_2_81A0E38BDDD5ECEB_OFFSET UNITYSDK_OFFSET(0x1D1120C0)
#define RPG_GAMECORE_FORMATIONPATTERNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D112210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationPatternConfig_TypeDefinitionIndex = 15447;

	class FormationPatternConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::RPG::GameCore::FormationSlotConfig*>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONPATTERNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_81A0E38BDDD5ECEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationPatternConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationPatternConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONPATTERNCONFIG_METHOD_2_81A0E38BDDD5ECEB_OFFSET))(a1, a2);
		}
	};
}
