#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOUNATLASCHANGELNFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174761B0)
#define RPG_GAMECORE_NOUNATLASCHANGELNFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174762D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NounAtlasChangelnfoRow_TypeDefinitionIndex = 11581;

	class NounAtlasChangelnfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeNounIDList; // 0x10
		::System::UInt32 NounID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASCHANGELNFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NounAtlasChangelnfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NounAtlasChangelnfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASCHANGELNFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
