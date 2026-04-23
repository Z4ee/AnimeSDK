#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B4E400)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B4EB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizConfigRow_TypeDefinitionIndex = 11444;

	class MonopolyQuizConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuizTaskIDList; // 0x10
		::System::UInt32 QuizID; // 0x18
		::System::UInt32 Duration; // 0x1C
		::RPG::Client::TextID QuizDesc; // 0x20
		::RPG::Client::TextID QuizName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyQuizConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
