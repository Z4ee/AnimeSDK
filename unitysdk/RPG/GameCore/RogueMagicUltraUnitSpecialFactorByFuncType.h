#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseRogueMagicUltraUnitSpecialFactor.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_METHOD_3_599F3883C41A7474_OFFSET UNITYSDK_OFFSET(0x18D24620)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_METHOD_3_8A751F1CA62AED1C_OFFSET UNITYSDK_OFFSET(0x18D24680)
#define RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D24670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUltraUnitSpecialFactorByFuncType_TypeDefinitionIndex = 17022;

	class RogueMagicUltraUnitSpecialFactorByFuncType : public ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor
	{
	public:
		::RPG::GameCore::RogueMagicScepterFuncType ScepterFuncType; // 0x10
		::Il2CppArray<::System::Single>* MatchFactors; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_599F3883C41A7474(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_METHOD_3_599F3883C41A7474_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A751F1CA62AED1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicUltraUnitSpecialFactorByFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICULTRAUNITSPECIALFACTORBYFUNCTYPE_METHOD_3_8A751F1CA62AED1C_OFFSET))(a1, a2);
		}
	};
}
