#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_44102F3EE6DE291A_OFFSET UNITYSDK_OFFSET(0x1D95FC40)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_CD747DC922583276_OFFSET UNITYSDK_OFFSET(0x1D95F9D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCopyNpcConfig_TypeDefinitionIndex = 19069;

	class GridFightActionCopyNpcConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_44102F3EE6DE291A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_44102F3EE6DE291A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CD747DC922583276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCopyNpcConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCopyNpcConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOPYNPCCONFIG_METHOD_6_CD747DC922583276_OFFSET))(a1, a2);
		}
	};
}
