#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_CD747DC922583276_OFFSET UNITYSDK_OFFSET(0x1724FEF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_D707F19B91C747E5_OFFSET UNITYSDK_OFFSET(0x172508C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1724FE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyNpcConfig_TypeDefinitionIndex = 17723;

	class GridFightActionCopyNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D707F19B91C747E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_D707F19B91C747E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CD747DC922583276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_CD747DC922583276_OFFSET))(a1, a2);
		}
	};
}
