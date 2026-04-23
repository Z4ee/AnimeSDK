#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_7ECB6DB90BE30955_OFFSET UNITYSDK_OFFSET(0x1899FE30)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_FB7DDC539684A156_OFFSET UNITYSDK_OFFSET(0x189A09B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899FD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetKeepWinNumConfig_TypeDefinitionIndex = 18339;

	class GridFightActionSetKeepWinNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FB7DDC539684A156(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_FB7DDC539684A156_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7ECB6DB90BE30955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetKeepWinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETKEEPWINNUMCONFIG_METHOD_6_7ECB6DB90BE30955_OFFSET))(a1, a2);
		}
	};
}
