#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierModifyBlackboardBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_METHOD_4_8166D242BD4EC3FD_OFFSET UNITYSDK_OFFSET(0x17633910)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_METHOD_4_FDAB0FE7F55BA2B4_OFFSET UNITYSDK_OFFSET(0x176338A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17633850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBlackboardByCoinConfig_TypeDefinitionIndex = 16251;

	class RogueModifierModifyBlackboardByCoinConfig : public ::RPG::GameCore::RogueModifierModifyBlackboardBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8166D242BD4EC3FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_METHOD_4_8166D242BD4EC3FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDAB0FE7F55BA2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBlackboardByCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBLACKBOARDBYCOINCONFIG_METHOD_4_FDAB0FE7F55BA2B4_OFFSET))(a1, a2);
		}
	};
}
