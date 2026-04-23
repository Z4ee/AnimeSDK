#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }

#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_08DA8F697E7FE503_OFFSET UNITYSDK_OFFSET(0x18805B40)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_50F2EAF228CF1273_OFFSET UNITYSDK_OFFSET(0x18805BA0)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18805B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusEffectParam_TypeDefinitionIndex = 15176;

	class ChimeraDuelStatusEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelStatusConfig*>* StatusConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_08DA8F697E7FE503(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_08DA8F697E7FE503_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50F2EAF228CF1273(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_METHOD_3_50F2EAF228CF1273_OFFSET))(a1, a2);
		}
	};
}
