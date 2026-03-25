#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STORYSTATECONFIG_METHOD_2_097E85F76FCBDA62_OFFSET UNITYSDK_OFFSET(0x17781780)
#define RPG_GAMECORE_STORYSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17781920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryStateConfig_TypeDefinitionIndex = 14996;

	class StoryStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StoryStateGroup; // 0x10
		::System::String* StoryState_C; // 0x18
		::System::String* StoryState_A; // 0x20
		::System::String* StoryState_D; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_097E85F76FCBDA62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYSTATECONFIG_METHOD_2_097E85F76FCBDA62_OFFSET))(a1, a2);
		}
	};
}
