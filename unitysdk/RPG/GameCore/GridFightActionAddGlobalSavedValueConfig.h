#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_39CF5B5369CF4936_OFFSET UNITYSDK_OFFSET(0x1D149600)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_A90464F79DEB50DA_OFFSET UNITYSDK_OFFSET(0x1D1495B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1495F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalSavedValueConfig_TypeDefinitionIndex = 19088;

	class GridFightActionAddGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A90464F79DEB50DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_A90464F79DEB50DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_39CF5B5369CF4936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_39CF5B5369CF4936_OFFSET))(a1, a2);
		}
	};
}
