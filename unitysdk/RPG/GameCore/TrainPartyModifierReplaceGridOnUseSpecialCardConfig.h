#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_METHOD_3_510000A0880B76DD_OFFSET UNITYSDK_OFFSET(0x190ABBF0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_METHOD_3_EA2C04A18E5A8719_OFFSET UNITYSDK_OFFSET(0x190ABEF0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ABBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierReplaceGridOnUseSpecialCardConfig_TypeDefinitionIndex = 17203;

	class TrainPartyModifierReplaceGridOnUseSpecialCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA2C04A18E5A8719(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_METHOD_3_EA2C04A18E5A8719_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_510000A0880B76DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_METHOD_3_510000A0880B76DD_OFFSET))(a1, a2);
		}
	};
}
