#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_0168E2E28520C2C5_OFFSET UNITYSDK_OFFSET(0x1CFCAB60)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_C7EE8492F165C34D_OFFSET UNITYSDK_OFFSET(0x1CFCAB00)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNormalEffectParam_TypeDefinitionIndex = 15839;

	class ChimeraDuelNormalEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7EE8492F165C34D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_C7EE8492F165C34D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0168E2E28520C2C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_METHOD_3_0168E2E28520C2C5_OFFSET))(a1, a2);
		}
	};
}
