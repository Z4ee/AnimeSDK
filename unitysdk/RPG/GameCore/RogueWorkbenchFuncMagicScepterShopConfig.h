#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_METHOD_3_07885B1F7B6F446B_OFFSET UNITYSDK_OFFSET(0x17673550)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_METHOD_3_B5065799C68CDBC7_OFFSET UNITYSDK_OFFSET(0x176737B0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17673540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncMagicScepterShopConfig_TypeDefinitionIndex = 16569;

	class RogueWorkbenchFuncMagicScepterShopConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5065799C68CDBC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_METHOD_3_B5065799C68CDBC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07885B1F7B6F446B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICSCEPTERSHOPCONFIG_METHOD_3_07885B1F7B6F446B_OFFSET))(a1, a2);
		}
	};
}
