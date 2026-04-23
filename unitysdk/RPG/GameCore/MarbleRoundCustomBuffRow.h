#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEROUNDCUSTOMBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA50D0)
#define RPG_GAMECORE_MARBLEROUNDCUSTOMBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA5290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRoundCustomBuffRow_TypeDefinitionIndex = 11331;

	class MarbleRoundCustomBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Round; // 0x1C
		::System::UInt32 EnemySelectBuff; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEROUNDCUSTOMBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleRoundCustomBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRoundCustomBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEROUNDCUSTOMBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
