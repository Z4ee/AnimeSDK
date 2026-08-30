#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/RPG/GameCore/TimelineWrapMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYTIMELINE_METHOD_3_1A9150A900AAC9C3_OFFSET UNITYSDK_OFFSET(0x1D7A9170)
#define RPG_GAMECORE_PLAYTIMELINE_METHOD_3_CDA1DFAA16CF3267_OFFSET UNITYSDK_OFFSET(0x1D7A9120)
#define RPG_GAMECORE_PLAYTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTimeline_TypeDefinitionIndex = 20384;

	class PlayTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::RPG::GameCore::TimelineType Type; // 0x20
		::Il2CppArray<::System::String*>* Parameters; // 0x28
		::System::Boolean ReleaseVolume; // 0x30
		::RPG::GameCore::TimelineWrapMode WrapMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDA1DFAA16CF3267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_METHOD_3_CDA1DFAA16CF3267_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A9150A900AAC9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_METHOD_3_1A9150A900AAC9C3_OFFSET))(a1, a2);
		}
	};
}
