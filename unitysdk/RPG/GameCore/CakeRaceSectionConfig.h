#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACESECTIONCONFIG_METHOD_2_5BA59EAA4EC8185A_OFFSET UNITYSDK_OFFSET(0x1B705F50)
#define RPG_GAMECORE_CAKERACESECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B706040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSectionConfig_TypeDefinitionIndex = 17673;

	class CakeRaceSectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* RegionIDList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5BA59EAA4EC8185A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceSectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceSectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONCONFIG_METHOD_2_5BA59EAA4EC8185A_OFFSET))(a1, a2);
		}
	};
}
