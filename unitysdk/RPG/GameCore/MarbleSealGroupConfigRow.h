#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA63F0)
#define RPG_GAMECORE_MARBLESEALGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA6540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealGroupConfigRow_TypeDefinitionIndex = 11302;

	class MarbleSealGroupConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SealList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleSealGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
