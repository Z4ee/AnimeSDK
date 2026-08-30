#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_6_093ACBA6BAD4A9E3_OFFSET UNITYSDK_OFFSET(0x1EE712F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_6_858F58C4D19FB967_OFFSET UNITYSDK_OFFSET(0x1EE71340)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCampIdConfig_TypeDefinitionIndex = 19309;

	class GridFightParamGetCurCampIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_093ACBA6BAD4A9E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_6_093ACBA6BAD4A9E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_858F58C4D19FB967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_6_858F58C4D19FB967_OFFSET))(a1, a2);
		}
	};
}
