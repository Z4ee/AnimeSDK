#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_METHOD_3_501C7D920EC04CD8_OFFSET UNITYSDK_OFFSET(0x187FF7D0)
#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_METHOD_3_CC3169581E016068_OFFSET UNITYSDK_OFFSET(0x187FF830)
#define RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187FF820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterIDValueGetter_TypeDefinitionIndex = 15159;

	class ChimeraDuelMasterIDValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_501C7D920EC04CD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_METHOD_3_501C7D920EC04CD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC3169581E016068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterIDValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERIDVALUEGETTER_METHOD_3_CC3169581E016068_OFFSET))(a1, a2);
		}
	};
}
