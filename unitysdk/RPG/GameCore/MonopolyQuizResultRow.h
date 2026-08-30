#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1CD330)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CDA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizResultRow_TypeDefinitionIndex = 11984;

	class MonopolyQuizResultRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerIDList; // 0x10
		::System::UInt32 QuizID; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::Client::TextID Desc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyQuizResultRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizResultRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
