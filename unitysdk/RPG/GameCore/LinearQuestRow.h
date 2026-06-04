#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LINEARQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988FF30)
#define RPG_GAMECORE_LINEARQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198905B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LinearQuestRow_TypeDefinitionIndex = 13841;

	class LinearQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 MinLevel; // 0x1C
		::System::UInt32 LinearID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LinearQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LinearQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEARQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
