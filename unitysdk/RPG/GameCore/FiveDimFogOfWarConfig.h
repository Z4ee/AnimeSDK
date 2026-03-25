#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSectionConfig; }
namespace RPG::GameCore { class FiveDimSingleFogOfWarConfig; }

#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_METHOD_2_4F464EFE6E5226B6_OFFSET UNITYSDK_OFFSET(0x171F30E0)
#define RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171F3280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFogOfWarConfig_TypeDefinitionIndex = 16997;

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

		static ::System::Void Method_2_4F464EFE6E5226B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFogOfWarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFogOfWarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFOGOFWARCONFIG_METHOD_2_4F464EFE6E5226B6_OFFSET))(a1, a2);
		}
	};
}
