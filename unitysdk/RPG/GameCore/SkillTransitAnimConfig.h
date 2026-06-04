#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SKILLTRANSITANIMCONFIG_METHOD_2_9F5BFB09BA7A9AB6_OFFSET UNITYSDK_OFFSET(0x19C8EC00)
#define RPG_GAMECORE_SKILLTRANSITANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8EE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTransitAnimConfig_TypeDefinitionIndex = 15679;

	class SkillTransitAnimConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 From; // 0x10
		::System::Int32 To; // 0x14
		::System::String* AnimStateName; // 0x18
		::System::Single TransitionInTime; // 0x20
		::System::Single ReverseOutroTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTRANSITANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9F5BFB09BA7A9AB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillTransitAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillTransitAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLTRANSITANIMCONFIG_METHOD_2_9F5BFB09BA7A9AB6_OFFSET))(a1, a2);
		}
	};
}
