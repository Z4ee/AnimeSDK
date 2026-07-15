#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_METHOD_2_C00A38C43C0B293D_OFFSET UNITYSDK_OFFSET(0x1B706C00)
#define RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B706D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTrapCellParamConfig_TypeDefinitionIndex = 17679;

	class CakeRaceTrapCellParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::System::UInt32 Param; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C00A38C43C0B293D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceTrapCellParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTrapCellParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRAPCELLPARAMCONFIG_METHOD_2_C00A38C43C0B293D_OFFSET))(a1, a2);
		}
	};
}
