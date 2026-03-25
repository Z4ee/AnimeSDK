#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_95ED2DCA5EFC5D49_OFFSET UNITYSDK_OFFSET(0x17025F80)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_C531167F2342AD43_OFFSET UNITYSDK_OFFSET(0x17025EB0)
#define RPG_GAMECORE_BYHAVEABILITYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17025F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveAbilityTarget_TypeDefinitionIndex = 18535;

	class ByHaveAbilityTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C531167F2342AD43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveAbilityTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveAbilityTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_C531167F2342AD43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95ED2DCA5EFC5D49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_METHOD_4_95ED2DCA5EFC5D49_OFFSET))(a1, a2);
		}
	};
}
