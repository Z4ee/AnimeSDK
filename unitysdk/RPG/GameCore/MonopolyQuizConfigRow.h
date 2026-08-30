#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2C4C20)
#define RPG_GAMECORE_MONOPOLYQUIZCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C5380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizConfigRow_TypeDefinitionIndex = 11978;

	class MonopolyQuizConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuizTaskIDList; // 0x10
		::System::UInt32 Duration; // 0x18
		::System::UInt32 QuizID; // 0x1C
		::RPG::Client::TextID QuizName; // 0x20
		::RPG::Client::TextID QuizDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyQuizConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
