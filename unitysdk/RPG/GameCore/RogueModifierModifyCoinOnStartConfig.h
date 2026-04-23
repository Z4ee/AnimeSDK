#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_METHOD_3_21849E633B82C6E7_OFFSET UNITYSDK_OFFSET(0x18D408E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_METHOD_3_CB725BF087C98AFE_OFFSET UNITYSDK_OFFSET(0x18D409B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnStartConfig_TypeDefinitionIndex = 17073;

	class RogueModifierModifyCoinOnStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21849E633B82C6E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_METHOD_3_21849E633B82C6E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB725BF087C98AFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_METHOD_3_CB725BF087C98AFE_OFFSET))(a1, a2);
		}
	};
}
