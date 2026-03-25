#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_6_7219BE497A6A4EE4_OFFSET UNITYSDK_OFFSET(0x1724DC60)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_6_D2FD965A46DAB647_OFFSET UNITYSDK_OFFSET(0x1724DAF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1724DBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpMaxConfig_TypeDefinitionIndex = 17720;

	class GridFightActionAddGlobalHpMaxConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D2FD965A46DAB647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_6_D2FD965A46DAB647_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7219BE497A6A4EE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpMaxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPMAXCONFIG_METHOD_6_7219BE497A6A4EE4_OFFSET))(a1, a2);
		}
	};
}
