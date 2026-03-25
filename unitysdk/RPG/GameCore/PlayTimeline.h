#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/RPG/GameCore/TimelineWrapMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYTIMELINE_METHOD_3_DB982F5CED19516C_OFFSET UNITYSDK_OFFSET(0x174C7780)
#define RPG_GAMECORE_PLAYTIMELINE_METHOD_3_F81839EEA09F025E_OFFSET UNITYSDK_OFFSET(0x174C76F0)
#define RPG_GAMECORE_PLAYTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x174C7750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTimeline_TypeDefinitionIndex = 18935;

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

		static ::System::Void Method_3_F81839EEA09F025E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_METHOD_3_F81839EEA09F025E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB982F5CED19516C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTIMELINE_METHOD_3_DB982F5CED19516C_OFFSET))(a1, a2);
		}
	};
}
