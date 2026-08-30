#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_A165820FBE30C8ED_OFFSET UNITYSDK_OFFSET(0x1D23E930)
#define RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_F3928209EA43B130_OFFSET UNITYSDK_OFFSET(0x1D23E8D0)
#define RPG_GAMECORE_MARBLETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22D0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTaskConfig_TypeDefinitionIndex = 16651;

	class MarbleTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F3928209EA43B130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_F3928209EA43B130_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A165820FBE30C8ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_A165820FBE30C8ED_OFFSET))(a1, a2);
		}
	};
}
