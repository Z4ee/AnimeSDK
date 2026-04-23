#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMRTPCCONFIG_METHOD_2_BDD4A582CCB26203_OFFSET UNITYSDK_OFFSET(0x18918170)
#define RPG_GAMECORE_FIVEDIMRTPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189183E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRTPCConfig_TypeDefinitionIndex = 15832;

	class FiveDimRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single DefaultValue; // 0x18
		::System::Single Min; // 0x1C
		::System::Single Max; // 0x20
		::System::Single ResetTime; // 0x24
		::System::String* EventOnLeaveDefault; // 0x28
		::System::String* EventOnBackToDefault; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BDD4A582CCB26203(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRTPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRTPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCCONFIG_METHOD_2_BDD4A582CCB26203_OFFSET))(a1, a2);
		}
	};
}
