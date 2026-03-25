#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIG_METHOD_2_E917D271ED2ECFE6_OFFSET UNITYSDK_OFFSET(0x17214AC0)
#define RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17214B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorGroupSyncTemplateConfig_TypeDefinitionIndex = 15981;

	class FloorGroupSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E917D271ED2ECFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorGroupSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorGroupSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORGROUPSYNCTEMPLATECONFIG_METHOD_2_E917D271ED2ECFE6_OFFSET))(a1, a2);
		}
	};
}
