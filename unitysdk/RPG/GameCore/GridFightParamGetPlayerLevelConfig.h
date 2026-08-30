#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_6_0543C08F9FA4698C_OFFSET UNITYSDK_OFFSET(0x1EE71CB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_6_5CA5140B78471E08_OFFSET UNITYSDK_OFFSET(0x1EE71D00)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE71CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPlayerLevelConfig_TypeDefinitionIndex = 19281;

	class GridFightParamGetPlayerLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0543C08F9FA4698C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_6_0543C08F9FA4698C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_5CA5140B78471E08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_6_5CA5140B78471E08_OFFSET))(a1, a2);
		}
	};
}
