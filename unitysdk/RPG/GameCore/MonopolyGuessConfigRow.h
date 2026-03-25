#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743BBD0)
#define RPG_GAMECORE_MONOPOLYGUESSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743BD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGuessConfigRow_TypeDefinitionIndex = 11061;

	class MonopolyGuessConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GuessPlayerIDList; // 0x10
		::System::UInt32 GuessID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyGuessConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGuessConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
