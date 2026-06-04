#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }

#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_4DABD3277357C900_OFFSET UNITYSDK_OFFSET(0x196494C0)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_ADEA472A1F487C90_OFFSET UNITYSDK_OFFSET(0x19649520)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19649510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWrtTargetEffectParam_TypeDefinitionIndex = 15241;

	class ChimeraDuelWrtTargetEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DABD3277357C900(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_4DABD3277357C900_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ADEA472A1F487C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_ADEA472A1F487C90_OFFSET))(a1, a2);
		}
	};
}
