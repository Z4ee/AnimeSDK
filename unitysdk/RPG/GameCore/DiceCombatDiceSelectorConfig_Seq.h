#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_6B351C9BB1A26F97_OFFSET UNITYSDK_OFFSET(0x18867860)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_F045F6C2034479F5_OFFSET UNITYSDK_OFFSET(0x188683D0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x18867800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_Seq_TypeDefinitionIndex = 15310;

	class DiceCombatDiceSelectorConfig_Seq : public ::RPG::GameCore::DiceCombatDiceSelectorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MinLength; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F045F6C2034479F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_F045F6C2034479F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B351C9BB1A26F97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Seq*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_SEQ_METHOD_3_6B351C9BB1A26F97_OFFSET))(a1, a2);
		}
	};
}
