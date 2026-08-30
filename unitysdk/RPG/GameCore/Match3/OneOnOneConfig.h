#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ONEONONECONFIG_METHOD_2_631FD98FBF79071D_OFFSET UNITYSDK_OFFSET(0x1D261090)
#define RPG_GAMECORE_MATCH3_ONEONONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D262C80)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int OneOnOneConfig_TypeDefinitionIndex = 24589;

	class OneOnOneConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single InputTimePerSection; // 0x10
		::System::UInt32 MaxSection; // 0x14
		::System::UInt32 StepPerSection; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ONEONONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_631FD98FBF79071D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::OneOnOneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::OneOnOneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ONEONONECONFIG_METHOD_2_631FD98FBF79071D_OFFSET))(a1, a2);
		}
	};
}
