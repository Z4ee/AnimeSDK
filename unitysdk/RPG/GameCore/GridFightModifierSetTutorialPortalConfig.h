#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_METHOD_3_36B23D8515C954B4_OFFSET UNITYSDK_OFFSET(0x197EF750)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_METHOD_3_BA6DFFDFDDBC75FD_OFFSET UNITYSDK_OFFSET(0x197F3B70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EF700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialPortalConfig_TypeDefinitionIndex = 18439;

	class GridFightModifierSetTutorialPortalConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BA6DFFDFDDBC75FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_METHOD_3_BA6DFFDFDDBC75FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36B23D8515C954B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetTutorialPortalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALPORTALCONFIG_METHOD_3_36B23D8515C954B4_OFFSET))(a1, a2);
		}
	};
}
