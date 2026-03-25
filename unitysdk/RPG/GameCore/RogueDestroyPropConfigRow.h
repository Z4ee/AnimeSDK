#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17604D70)
#define RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176053E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDestroyPropConfigRow_TypeDefinitionIndex = 13393;

	class RogueDestroyPropConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoreRange; // 0x10
		::System::UInt32 ParamGroupID; // 0x18
		::System::UInt32 PrepareTime; // 0x1C
		::System::UInt32 GameTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDestroyPropConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDestroyPropConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDESTROYPROPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
