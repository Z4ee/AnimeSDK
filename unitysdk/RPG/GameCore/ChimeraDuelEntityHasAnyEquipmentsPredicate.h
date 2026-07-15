#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityPredicateBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_5F4E712DE836A11A_OFFSET UNITYSDK_OFFSET(0x1C23E050)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_B29F6B8038C89818_OFFSET UNITYSDK_OFFSET(0x1C23DFF0)
#define RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C23E040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityHasAnyEquipmentsPredicate_TypeDefinitionIndex = 15310;

	class ChimeraDuelEntityHasAnyEquipmentsPredicate : public ::RPG::GameCore::ChimeraDuelEntityPredicateBase
	{
	public:
		::Il2CppArray<::System::UInt32>* ParticularEquipments; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B29F6B8038C89818(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_B29F6B8038C89818_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F4E712DE836A11A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityHasAnyEquipmentsPredicate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYHASANYEQUIPMENTSPREDICATE_METHOD_3_5F4E712DE836A11A_OFFSET))(a1, a2);
		}
	};
}
