#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENEACTORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171425B0)
#define RPG_GAMECORE_CUTSCENEACTORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17142770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutsceneActorRow_TypeDefinitionIndex = 11950;

	class CutsceneActorRow : public ::System::Object
	{
	public:
		::System::String* ActorModelPath; // 0x10
		::System::String* ResidentEffectKey; // 0x18
		::System::String* ActorID; // 0x20
		::System::String* ResidentPossessionKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEACTORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CutsceneActorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutsceneActorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEACTORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
