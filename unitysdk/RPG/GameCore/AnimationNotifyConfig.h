#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_METHOD_2_8B54E6C1CF65A389_OFFSET UNITYSDK_OFFSET(0x1A057B10)
#define RPG_GAMECORE_ANIMATIONNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A057D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationNotifyConfig_TypeDefinitionIndex = 16279;

	class AnimationNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x10
		::System::String* ParamName; // 0x18
		::System::Single FloatValue; // 0x20
		::System::Int32 IntValue; // 0x24
		::System::Boolean BoolValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8B54E6C1CF65A389(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimationNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimationNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONNOTIFYCONFIG_METHOD_2_8B54E6C1CF65A389_OFFSET))(a1, a2);
		}
	};
}
