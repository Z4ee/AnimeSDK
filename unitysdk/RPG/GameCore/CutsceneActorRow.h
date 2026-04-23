#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENEACTORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188496E0)
#define RPG_GAMECORE_CUTSCENEACTORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188498A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutsceneActorRow_TypeDefinitionIndex = 12381;

	class CutsceneActorRow : public ::System::Object
	{
	public:
		::System::String* ActorID; // 0x10
		::System::String* ResidentPossessionKey; // 0x18
		::System::String* ResidentEffectKey; // 0x20
		::System::String* ActorModelPath; // 0x28

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
