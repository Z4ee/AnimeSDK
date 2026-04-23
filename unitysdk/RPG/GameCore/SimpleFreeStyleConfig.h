#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SIMPLEFREESTYLECONFIG_METHOD_2_E86703846AF790DF_OFFSET UNITYSDK_OFFSET(0x18E6CB90)
#define RPG_GAMECORE_SIMPLEFREESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6CD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleFreeStyleConfig_TypeDefinitionIndex = 20467;

	class SimpleFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Boolean LocalPlayer; // 0x18
		::System::String* StoryAvatarID; // 0x20
		::System::UInt32 StoryMotionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLEFREESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E86703846AF790DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SimpleFreeStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SimpleFreeStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLEFREESTYLECONFIG_METHOD_2_E86703846AF790DF_OFFSET))(a1, a2);
		}
	};
}
