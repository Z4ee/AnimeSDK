#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_47274F553540E3D8_OFFSET UNITYSDK_OFFSET(0x18ECDA60)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_DB6A12516A134BF1_OFFSET UNITYSDK_OFFSET(0x18ECDAF0)
#define RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECDAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFTriggerComponentConfig_TypeDefinitionIndex = 17953;

	class TRFTriggerComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* ActiveEntities; // 0x10
		::Il2CppArray<::System::UInt32>* DeactiveEntities; // 0x18
		::System::Boolean TriggerOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47274F553540E3D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTriggerComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTriggerComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_47274F553540E3D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB6A12516A134BF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFTriggerComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFTriggerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTRIGGERCOMPONENTCONFIG_METHOD_3_DB6A12516A134BF1_OFFSET))(a1, a2);
		}
	};
}
