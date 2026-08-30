#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBAREFFECTCONFIG_METHOD_2_CF31B4BECADA7339_OFFSET UNITYSDK_OFFSET(0x1CD6EA10)
#define RPG_GAMECORE_ACTIONBAREFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6EBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarEffectConfig_TypeDefinitionIndex = 22690;

	class ActionBarEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ActionBarUIStatus Status; // 0x10
		::System::String* Path; // 0x18
		::System::Boolean IsExclusive; // 0x20
		::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* TextConfigs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CF31B4BECADA7339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionBarEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionBarEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTCONFIG_METHOD_2_CF31B4BECADA7339_OFFSET))(a1, a2);
		}
	};
}
