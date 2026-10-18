#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityVarConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_4_A95F493CCE886489_OFFSET UNITYSDK_OFFSET(0x1D68E220)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_4_CB26BDBCFF9111BE_OFFSET UNITYSDK_OFFSET(0x1D68E260)
#define RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVarConfig_TypeDefinitionIndex = 18632;

	class FiveDimEntityVarConfig : public ::RPG::GameCore::LittleGameEntityVarConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A95F493CCE886489(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_4_A95F493CCE886489_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB26BDBCFF9111BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVARCONFIG_METHOD_4_CB26BDBCFF9111BE_OFFSET))(a1, a2);
		}
	};
}
