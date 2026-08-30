#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_METHOD_3_42F232EF419661CE_OFFSET UNITYSDK_OFFSET(0x1E339C80)
#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_METHOD_3_A4417499989BFC74_OFFSET UNITYSDK_OFFSET(0x1E339CE0)
#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E339CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRandomEntitiesSelectorConfig_TypeDefinitionIndex = 15754;

	class ChimeraDuelRandomEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Source; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* MaxCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42F232EF419661CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_METHOD_3_42F232EF419661CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4417499989BFC74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_METHOD_3_A4417499989BFC74_OFFSET))(a1, a2);
		}
	};
}
