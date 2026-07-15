#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A502A00)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A502A40)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex = 76289;

	class ChimeraDuelBattleChimeraControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuel::ChimeraDuelBattleChimeraControl___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuel::ChimeraDuelBattleChimeraControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex)->GetStaticField(0x680E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLECHIMERACONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
