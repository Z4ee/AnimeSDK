#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_METHOD_2_6E59DD0EA355FB4A_OFFSET UNITYSDK_OFFSET(0x19761E90)
#define RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19761ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorFSVSyncTemplateConfig_TypeDefinitionIndex = 16545;

	class FloorFSVSyncTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6E59DD0EA355FB4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorFSVSyncTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorFSVSyncTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORFSVSYNCTEMPLATECONFIG_METHOD_2_6E59DD0EA355FB4A_OFFSET))(a1, a2);
		}
	};
}
