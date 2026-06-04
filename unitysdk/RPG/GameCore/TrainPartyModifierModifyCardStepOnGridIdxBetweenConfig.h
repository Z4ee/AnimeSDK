#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_METHOD_3_6BEC3EB5BC9C0BF8_OFFSET UNITYSDK_OFFSET(0x19DF6830)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_METHOD_3_ECDFAE4779D62EBC_OFFSET UNITYSDK_OFFSET(0x19DF6A90)
#define RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF6820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig_TypeDefinitionIndex = 17222;

	class TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECDFAE4779D62EBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_METHOD_3_ECDFAE4779D62EBC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BEC3EB5BC9C0BF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierModifyCardStepOnGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERMODIFYCARDSTEPONGRIDIDXBETWEENCONFIG_METHOD_3_6BEC3EB5BC9C0BF8_OFFSET))(a1, a2);
		}
	};
}
