#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INCLINATIONTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A1B940)
#define RPG_GAMECORE_INCLINATIONTEXTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1BB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InclinationTextRow_TypeDefinitionIndex = 13078;

	class InclinationTextRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* InclinationTypeList; // 0x10
		::Il2CppArray<::System::UInt32>* InclinationAddValueList; // 0x18
		::System::UInt32 InclinationType; // 0x20
		::System::UInt32 TalkSentenceID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTEXTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InclinationTextRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InclinationTextRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCLINATIONTEXTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
