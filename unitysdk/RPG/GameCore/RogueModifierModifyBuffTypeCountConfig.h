#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG_METHOD_3_95500E33EC5F417E_OFFSET UNITYSDK_OFFSET(0x18D40710)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG_METHOD_3_EB6250A6A0187D67_OFFSET UNITYSDK_OFFSET(0x18D40640)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D406C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBuffTypeCountConfig_TypeDefinitionIndex = 17032;

	class RogueModifierModifyBuffTypeCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB6250A6A0187D67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffTypeCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffTypeCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG_METHOD_3_EB6250A6A0187D67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95500E33EC5F417E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffTypeCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffTypeCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFTYPECOUNTCONFIG_METHOD_3_95500E33EC5F417E_OFFSET))(a1, a2);
		}
	};
}
