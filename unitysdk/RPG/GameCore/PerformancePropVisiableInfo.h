#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_METHOD_2_3605A98F76584145_OFFSET UNITYSDK_OFFSET(0x199F5150)
#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x199F5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformancePropVisiableInfo_TypeDefinitionIndex = 20633;

	class PerformancePropVisiableInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3605A98F76584145(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformancePropVisiableInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformancePropVisiableInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_METHOD_2_3605A98F76584145_OFFSET))(a1, a2);
		}
	};
}
