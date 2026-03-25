#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB15150)
#define RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB15190)

namespace RPG::View
{
	inline static constexpr unsigned int ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex = 41924;

	class ChimeraDuelBattleChimeraControl___c : public ::System::Object
	{
	public:
		static ::RPG::View::ChimeraDuelBattleChimeraControl___c** StaticGet___9()
		{
			return (::RPG::View::ChimeraDuelBattleChimeraControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelBattleChimeraControl___c_TypeDefinitionIndex)->GetStaticField(0x47160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_CHIMERADUELBATTLECHIMERACONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
