#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EraRegion; }

#define RPG_GAMECORE_ERAFLIPPERCONFIG_METHOD_2_8ACF04680296B79E_OFFSET UNITYSDK_OFFSET(0x1C05DDF0)
#define RPG_GAMECORE_ERAFLIPPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EraFlipperConfig_TypeDefinitionIndex = 15967;

	class EraFlipperConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EraStateType FloorDefaultEraState; // 0x10
		::Il2CppArray<::RPG::GameCore::EraRegion*>* EraRegions; // 0x18
		::System::Boolean FrozeDefaultState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8ACF04680296B79E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EraFlipperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EraFlipperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERCONFIG_METHOD_2_8ACF04680296B79E_OFFSET))(a1, a2);
		}
	};
}
