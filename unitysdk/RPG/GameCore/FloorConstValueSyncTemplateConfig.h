#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_METHOD_2_9FD804C90432C869_OFFSET UNITYSDK_OFFSET(0x19760720)
#define RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19760760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorConstValueSyncTemplateConfig_TypeDefinitionIndex = 16548;

	class FloorConstValueSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9FD804C90432C869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorConstValueSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorConstValueSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCONSTVALUESYNCTEMPLATECONFIG_METHOD_2_9FD804C90432C869_OFFSET))(a1, a2);
		}
	};
}
