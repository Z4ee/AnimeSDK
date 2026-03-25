#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F65A20)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F65F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideQuestTypeRow_TypeDefinitionIndex = 10262;

	class AetherDivideQuestTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeGroupList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideQuestTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideQuestTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
