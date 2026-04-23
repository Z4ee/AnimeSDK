#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }

#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_8885CECE45D09DAD_OFFSET UNITYSDK_OFFSET(0x18807C50)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_C2E81330861459A5_OFFSET UNITYSDK_OFFSET(0x18807CB0)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18807CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWrtTargetEffectParam_TypeDefinitionIndex = 15180;

	class ChimeraDuelWrtTargetEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8885CECE45D09DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_8885CECE45D09DAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2E81330861459A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_METHOD_3_C2E81330861459A5_OFFSET))(a1, a2);
		}
	};
}
