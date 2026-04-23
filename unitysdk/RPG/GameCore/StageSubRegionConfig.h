#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGESUBREGIONCONFIG_METHOD_2_86ACD79CD46FF7AE_OFFSET UNITYSDK_OFFSET(0x18E935A0)
#define RPG_GAMECORE_STAGESUBREGIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E935E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageSubRegionConfig_TypeDefinitionIndex = 18218;

	class StageSubRegionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESUBREGIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_86ACD79CD46FF7AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageSubRegionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageSubRegionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESUBREGIONCONFIG_METHOD_2_86ACD79CD46FF7AE_OFFSET))(a1, a2);
		}
	};
}
