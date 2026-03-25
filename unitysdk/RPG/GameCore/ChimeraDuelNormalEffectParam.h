#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_1489FFA34F0562A0_OFFSET UNITYSDK_OFFSET(0x170A1300)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_80EC19AA4C0131B0_OFFSET UNITYSDK_OFFSET(0x170A1360)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x170A1350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNormalEffectParam_TypeDefinitionIndex = 14707;

	class ChimeraDuelNormalEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1489FFA34F0562A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_1489FFA34F0562A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80EC19AA4C0131B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_80EC19AA4C0131B0_OFFSET))(a1, a2);
		}
	};
}
