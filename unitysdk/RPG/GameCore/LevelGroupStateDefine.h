#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELGROUPSTATEDEFINE_METHOD_2_8219782B8DABDFA9_OFFSET UNITYSDK_OFFSET(0x1D1D5950)
#define RPG_GAMECORE_LEVELGROUPSTATEDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D5990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupStateDefine_TypeDefinitionIndex = 17136;

	class LevelGroupStateDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSTATEDEFINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8219782B8DABDFA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupStateDefine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupStateDefine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSTATEDEFINE_METHOD_2_8219782B8DABDFA9_OFFSET))(a1, a2);
		}
	};
}
