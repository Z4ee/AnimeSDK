#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSectionConfig; }
namespace RPG::GameCore { class FiveDimSingleFogOfWarConfig; }

#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_METHOD_2_61D9ABF5DE2CC6D4_OFFSET UNITYSDK_OFFSET(0x1D85FB00)
#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85FC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFogOfWarConfig_TypeDefinitionIndex = 18310;

	class FiveDimFogOfWarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector2>* SectionVertices; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimSectionConfig*>* Sections; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimSingleFogOfWarConfig*>* FogOfWars; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_61D9ABF5DE2CC6D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFogOfWarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFogOfWarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_METHOD_2_61D9ABF5DE2CC6D4_OFFSET))(a1, a2);
		}
	};
}
