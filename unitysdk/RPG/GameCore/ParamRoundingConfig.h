#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamRoundingType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_4_8513F566F2E95B1F_OFFSET UNITYSDK_OFFSET(0x17489C90)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_4_C672F52FED544892_OFFSET UNITYSDK_OFFSET(0x17489B50)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17489C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamRoundingConfig_TypeDefinitionIndex = 15653;

	class ParamRoundingConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamRoundingType RoundingType; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C672F52FED544892(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamRoundingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamRoundingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_4_C672F52FED544892_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8513F566F2E95B1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamRoundingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamRoundingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_4_8513F566F2E95B1F_OFFSET))(a1, a2);
		}
	};
}
