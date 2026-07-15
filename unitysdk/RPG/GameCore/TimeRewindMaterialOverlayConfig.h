#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimeRewindOverlayMaterials; }

#define RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_METHOD_2_0B83937208F5943C_OFFSET UNITYSDK_OFFSET(0x1C1536A0)
#define RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C153800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindMaterialOverlayConfig_TypeDefinitionIndex = 16855;

	class TimeRewindMaterialOverlayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimeRewindView>* ExcludeView; // 0x10
		::Il2CppArray<::RPG::GameCore::TimeRewindOverlayMaterials*>* Paths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0B83937208F5943C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDMATERIALOVERLAYCONFIG_METHOD_2_0B83937208F5943C_OFFSET))(a1, a2);
		}
	};
}
