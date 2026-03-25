#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_METHOD_3_1F8F9C41C3D4E2EB_OFFSET UNITYSDK_OFFSET(0x17046A50)
#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_METHOD_3_78F4C3B6089F9118_OFFSET UNITYSDK_OFFSET(0x170452C0)
#define RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x170452A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionPropertyModifier_TypeDefinitionIndex = 16829;

	class CakeRaceActionPropertyModifier : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* PropertyModifiers; // 0x10
		::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::CakeRaceBasePredicateConfig* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F8F9C41C3D4E2EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionPropertyModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionPropertyModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_METHOD_3_1F8F9C41C3D4E2EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_78F4C3B6089F9118(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionPropertyModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONPROPERTYMODIFIER_METHOD_3_78F4C3B6089F9118_OFFSET))(a1, a2);
		}
	};
}
