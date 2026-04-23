#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPATHWAYLINKINFO_METHOD_2_C2E95358F282F669_OFFSET UNITYSDK_OFFSET(0x18A52A80)
#define RPG_GAMECORE_LEVELPATHWAYLINKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A52B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPathwayLinkInfo_TypeDefinitionIndex = 16371;

	class LevelPathwayLinkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* To; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYLINKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C2E95358F282F669(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPathwayLinkInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPathwayLinkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPATHWAYLINKINFO_METHOD_2_C2E95358F282F669_OFFSET))(a1, a2);
		}
	};
}
