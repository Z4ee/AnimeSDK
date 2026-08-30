#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_32722BAFC1BEC531_OFFSET UNITYSDK_OFFSET(0x1D14A420)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_7ECB6DB90BE30955_OFFSET UNITYSDK_OFFSET(0x1D149FC0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D149FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetKeepWinNumConfig_TypeDefinitionIndex = 19072;

	class GridFightActionSetKeepWinNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_32722BAFC1BEC531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_32722BAFC1BEC531_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7ECB6DB90BE30955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_7ECB6DB90BE30955_OFFSET))(a1, a2);
		}
	};
}
