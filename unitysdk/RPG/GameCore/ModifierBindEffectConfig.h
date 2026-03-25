#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_METHOD_2_87D13AC2FFF5576F_OFFSET UNITYSDK_OFFSET(0x17426E80)
#define RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17426FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBindEffectConfig_TypeDefinitionIndex = 15095;

	class ModifierBindEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* BindEffectList; // 0x10
		::Il2CppArray<::System::String*>* TriggerEffectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_87D13AC2FFF5576F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBindEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBindEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBINDEFFECTCONFIG_METHOD_2_87D13AC2FFF5576F_OFFSET))(a1, a2);
		}
	};
}
