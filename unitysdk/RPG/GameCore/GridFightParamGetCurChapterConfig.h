#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_6_42E029C64717A60E_OFFSET UNITYSDK_OFFSET(0x189C2520)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_6_C73CEE6A5F233368_OFFSET UNITYSDK_OFFSET(0x189C27D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C26A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurChapterConfig_TypeDefinitionIndex = 18547;

	class GridFightParamGetCurChapterConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_42E029C64717A60E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_6_42E029C64717A60E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C73CEE6A5F233368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurChapterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurChapterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCHAPTERCONFIG_METHOD_6_C73CEE6A5F233368_OFFSET))(a1, a2);
		}
	};
}
