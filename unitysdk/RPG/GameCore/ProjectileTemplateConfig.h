#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileTemplateData; }

#define RPG_GAMECORE_PROJECTILETEMPLATECONFIG_METHOD_2_EBDF3B3C5FEF7D7A_OFFSET UNITYSDK_OFFSET(0x1D172F70)
#define RPG_GAMECORE_PROJECTILETEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D173050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileTemplateConfig_TypeDefinitionIndex = 15481;

	class ProjectileTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProjectileTemplateData*>* TemplateDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EBDF3B3C5FEF7D7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILETEMPLATECONFIG_METHOD_2_EBDF3B3C5FEF7D7A_OFFSET))(a1, a2);
		}
	};
}
