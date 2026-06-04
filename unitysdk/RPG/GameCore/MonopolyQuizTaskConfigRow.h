#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A1210)
#define RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199A18A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizTaskConfigRow_TypeDefinitionIndex = 11491;

	class MonopolyQuizTaskConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PriorityPlayerIDList; // 0x10
		::System::UInt32 QuizTaskID; // 0x18
		::RPG::Client::TextID TaskDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyQuizTaskConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizTaskConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZTASKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
