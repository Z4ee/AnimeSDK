#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSECTIONCONFIG_METHOD_2_6EAFC17C956680DA_OFFSET UNITYSDK_OFFSET(0x1D877340)
#define RPG_GAMECORE_FIVEDIMSECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D877450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSectionConfig_TypeDefinitionIndex = 18311;

	class FiveDimSectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::Il2CppArray<::System::UInt32>* Indices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6EAFC17C956680DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSECTIONCONFIG_METHOD_2_6EAFC17C956680DA_OFFSET))(a1, a2);
		}
	};
}
