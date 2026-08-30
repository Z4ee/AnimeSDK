#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PreloadStateTransitionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_METHOD_2_70C3DE4C6B9AB9EA_OFFSET UNITYSDK_OFFSET(0x1D35B040)
#define RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35B1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadStateTransitionConfig_TypeDefinitionIndex = 16180;

	class PreloadStateTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PreloadStateTransitionType Type; // 0x10
		::System::Int32 ToStateIndex; // 0x14
		::System::String* SkillName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70C3DE4C6B9AB9EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadStateTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadStateTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTATETRANSITIONCONFIG_METHOD_2_70C3DE4C6B9AB9EA_OFFSET))(a1, a2);
		}
	};
}
