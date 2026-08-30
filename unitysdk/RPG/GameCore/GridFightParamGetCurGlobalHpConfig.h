#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_0EC05896EC555FD4_OFFSET UNITYSDK_OFFSET(0x1D15D0F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_434102A46B7024D8_OFFSET UNITYSDK_OFFSET(0x1D15D0A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurGlobalHpConfig_TypeDefinitionIndex = 19305;

	class GridFightParamGetCurGlobalHpConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_434102A46B7024D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_434102A46B7024D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0EC05896EC555FD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURGLOBALHPCONFIG_METHOD_6_0EC05896EC555FD4_OFFSET))(a1, a2);
		}
	};
}
