#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM_METHOD_2_91A3A33AC994804D_OFFSET UNITYSDK_OFFSET(0x1CE653A0)
#define RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM_METHOD_2_E636238726A2A20B_OFFSET UNITYSDK_OFFSET(0x1CE65010)
#define RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE65390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelEffectParam_TypeDefinitionIndex = 15837;

	class BaseChimeraDuelEffectParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E636238726A2A20B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelEffectParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelEffectParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM_METHOD_2_E636238726A2A20B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_91A3A33AC994804D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelEffectParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELEFFECTPARAM_METHOD_2_91A3A33AC994804D_OFFSET))(a1, a2);
		}
	};
}
