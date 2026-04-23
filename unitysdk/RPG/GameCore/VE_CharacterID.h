#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_AA99B2E8EE242863_OFFSET UNITYSDK_OFFSET(0x190ECBE0)
#define RPG_GAMECORE_VE_CHARACTERID_METHOD_3_EE065EB256F309E5_OFFSET UNITYSDK_OFFSET(0x190ECC80)
#define RPG_GAMECORE_VE_CHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x190ECC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_CharacterID_TypeDefinitionIndex = 23284;

	class VE_CharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA99B2E8EE242863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_CharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_CharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_AA99B2E8EE242863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE065EB256F309E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_METHOD_3_EE065EB256F309E5_OFFSET))(a1, a2);
		}
	};
}
