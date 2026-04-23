#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_39CF5B5369CF4936_OFFSET UNITYSDK_OFFSET(0x1899D590)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_9A02CFD5AACD43A5_OFFSET UNITYSDK_OFFSET(0x1899D420)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1899D4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalSavedValueConfig_TypeDefinitionIndex = 18352;

	class GridFightActionAddGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9A02CFD5AACD43A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_9A02CFD5AACD43A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_39CF5B5369CF4936(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_6_39CF5B5369CF4936_OFFSET))(a1, a2);
		}
	};
}
