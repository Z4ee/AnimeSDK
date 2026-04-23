#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_METHOD_2_1436B6DB26FEC618_OFFSET UNITYSDK_OFFSET(0x186FB970)
#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_METHOD_2_F412DFCC2181D785_OFFSET UNITYSDK_OFFSET(0x186FB810)
#define RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x186FB960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleExtraPropertyAdditionPair_TypeDefinitionIndex = 22628;

	class BattleExtraPropertyAdditionPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::BattleExtraPropertyAddition PropertyName; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::Il2CppArray<::System::UInt32>* CharacterConfigIDFilter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F412DFCC2181D785(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraPropertyAdditionPair*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraPropertyAdditionPair*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_METHOD_2_F412DFCC2181D785_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1436B6DB26FEC618(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleExtraPropertyAdditionPair* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleExtraPropertyAdditionPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEXTRAPROPERTYADDITIONPAIR_METHOD_2_1436B6DB26FEC618_OFFSET))(a1, a2);
		}
	};
}
