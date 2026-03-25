#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_METHOD_2_A537AE75FA701A55_OFFSET UNITYSDK_OFFSET(0x1720BAF0)
#define RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1720BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSingleFogOfWarConfig_TypeDefinitionIndex = 16999;

	class FiveDimSingleFogOfWarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LocalFogID; // 0x10
		::System::UInt32 GlobalFogID; // 0x14
		::Il2CppArray<::System::UInt32>* SectionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A537AE75FA701A55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSingleFogOfWarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSingleFogOfWarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_METHOD_2_A537AE75FA701A55_OFFSET))(a1, a2);
		}
	};
}
