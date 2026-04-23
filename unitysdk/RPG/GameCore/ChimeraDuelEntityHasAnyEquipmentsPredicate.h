#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_575D78C799D6E8A5_OFFSET UNITYSDK_OFFSET(0x187FA4B0)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_CCF7A8512C1CB777_OFFSET UNITYSDK_OFFSET(0x187FA510)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x187FA500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityHasAnyEquipmentsPredicate_TypeDefinitionIndex = 15083;

	class ChimeraDuelEntityHasAnyEquipmentsPredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::Il2CppArray<::System::UInt32>* ParticularEquipments; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_575D78C799D6E8A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_575D78C799D6E8A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCF7A8512C1CB777(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_CCF7A8512C1CB777_OFFSET))(a1, a2);
		}
	};
}
