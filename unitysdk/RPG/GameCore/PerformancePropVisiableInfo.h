#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_METHOD_2_77F2A9CAFDAB80FE_OFFSET UNITYSDK_OFFSET(0x1D31A210)
#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31A330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformancePropVisiableInfo_TypeDefinitionIndex = 21606;

	class PerformancePropVisiableInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_77F2A9CAFDAB80FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformancePropVisiableInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformancePropVisiableInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_METHOD_2_77F2A9CAFDAB80FE_OFFSET))(a1, a2);
		}
	};
}
