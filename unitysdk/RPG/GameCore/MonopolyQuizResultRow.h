#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B504A0)
#define RPG_GAMECORE_MONOPOLYQUIZRESULTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B50B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizResultRow_TypeDefinitionIndex = 11450;

	class MonopolyQuizResultRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayerIDList; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 QuizID; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyQuizResultRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuizResultRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUIZRESULTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
