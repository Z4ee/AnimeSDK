#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_METHOD_2_E6FA2DD678481E1A_OFFSET UNITYSDK_OFFSET(0x1BEBCC40)
#define RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBCC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorFCVSyncTemplateConfig_TypeDefinitionIndex = 16704;

	class FloorFCVSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6FA2DD678481E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorFCVSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorFCVSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFCVSYNCTEMPLATECONFIG_METHOD_2_E6FA2DD678481E1A_OFFSET))(a1, a2);
		}
	};
}
