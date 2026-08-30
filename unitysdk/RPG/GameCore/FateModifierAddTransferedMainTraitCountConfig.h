#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_METHOD_3_6A6D454E32BBF007_OFFSET UNITYSDK_OFFSET(0x1E0CD9E0)
#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_METHOD_3_B4AA0969F2CF93AB_OFFSET UNITYSDK_OFFSET(0x1E0CDA30)
#define RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddTransferedMainTraitCountConfig_TypeDefinitionIndex = 19053;

	class FateModifierAddTransferedMainTraitCountConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6A6D454E32BBF007(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_METHOD_3_6A6D454E32BBF007_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4AA0969F2CF93AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierAddTransferedMainTraitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDTRANSFEREDMAINTRAITCOUNTCONFIG_METHOD_3_B4AA0969F2CF93AB_OFFSET))(a1, a2);
		}
	};
}
