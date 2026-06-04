#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtDirSourceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTDIRCONFIG_METHOD_2_CF8A800990B564A7_OFFSET UNITYSDK_OFFSET(0x19BE9720)
#define RPG_GAMECORE_RTDIRCONFIG_METHOD_2_E183EEAD0E1702C1_OFFSET UNITYSDK_OFFSET(0x19BE99C0)
#define RPG_GAMECORE_RTDIRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE9950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDirConfig_TypeDefinitionIndex = 22945;

	class RtDirConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtDirSourceType DirSource; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType2; // 0x20
		::RPG::GameCore::DynamicFloat* YawOffset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CF8A800990B564A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDirConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDirConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG_METHOD_2_CF8A800990B564A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_E183EEAD0E1702C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtDirConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtDirConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDIRCONFIG_METHOD_2_E183EEAD0E1702C1_OFFSET))(a1, a2);
		}
	};
}
