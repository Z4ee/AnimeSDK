#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENEPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17142780)
#define RPG_GAMECORE_CUTSCENEPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17142940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutscenePropRow_TypeDefinitionIndex = 11952;

	class CutscenePropRow : public ::System::Object
	{
	public:
		::System::String* ResidentEffectKey; // 0x10
		::System::String* PropID; // 0x18
		::System::String* PropModelPath; // 0x20
		::System::String* ResidentPossessionKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CutscenePropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutscenePropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEPROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
