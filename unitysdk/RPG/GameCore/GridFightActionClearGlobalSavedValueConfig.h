#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_6_7F290339874214B8_OFFSET UNITYSDK_OFFSET(0x1D95F3E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_6_80FBAC7AB6D93C7C_OFFSET UNITYSDK_OFFSET(0x1D95F390)
#define RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionClearGlobalSavedValueConfig_TypeDefinitionIndex = 19090;

	class GridFightActionClearGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_80FBAC7AB6D93C7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_6_80FBAC7AB6D93C7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7F290339874214B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionClearGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCLEARGLOBALSAVEDVALUECONFIG_METHOD_6_7F290339874214B8_OFFSET))(a1, a2);
		}
	};
}
