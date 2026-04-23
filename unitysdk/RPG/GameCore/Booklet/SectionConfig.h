#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class SpreadConfig; }

#define RPG_GAMECORE_BOOKLET_SECTIONCONFIG_METHOD_2_663E6BC9252EA2C3_OFFSET UNITYSDK_OFFSET(0x187116F0)
#define RPG_GAMECORE_BOOKLET_SECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18711840)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SectionConfig_TypeDefinitionIndex = 23766;

	class SectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::Il2CppArray<::RPG::GameCore::Booklet::SpreadConfig*>* SpreadConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_663E6BC9252EA2C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SECTIONCONFIG_METHOD_2_663E6BC9252EA2C3_OFFSET))(a1, a2);
		}
	};
}
