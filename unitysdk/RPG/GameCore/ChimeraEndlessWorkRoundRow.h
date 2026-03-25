#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAENDLESSWORKROUNDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170A8930)
#define RPG_GAMECORE_CHIMERAENDLESSWORKROUNDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170A8A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEndlessWorkRoundRow_TypeDefinitionIndex = 11899;

	class ChimeraEndlessWorkRoundRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WorkList; // 0x10
		::System::UInt32 EndlessRoundID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAENDLESSWORKROUNDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraEndlessWorkRoundRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAENDLESSWORKROUNDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
