#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_0EC05896EC555FD4_OFFSET UNITYSDK_OFFSET(0x1726F460)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_D13169B8AC054A5A_OFFSET UNITYSDK_OFFSET(0x1726F1B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1726F330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurGlobalHpConfig_TypeDefinitionIndex = 17901;

	class GridFightParamGetCurGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D13169B8AC054A5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_D13169B8AC054A5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0EC05896EC555FD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_0EC05896EC555FD4_OFFSET))(a1, a2);
		}
	};
}
