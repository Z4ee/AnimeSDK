#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoYoGroupStreamingTemplateItem; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_METHOD_2_243CA06D8E991B51_OFFSET UNITYSDK_OFFSET(0x172B2020)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172B2120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingTemplateConfig_TypeDefinitionIndex = 15936;

	class HoYoGroupStreamingTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::HoYoGroupStreamingTemplateItem*>* Items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_243CA06D8E991B51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoYoGroupStreamingTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoYoGroupStreamingTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATECONFIG_METHOD_2_243CA06D8E991B51_OFFSET))(a1, a2);
		}
	};
}
