#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D25560)
#define RPG_GAMECORE_ROGUEMAGICWORKBENCHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D256B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicWorkbenchRow_TypeDefinitionIndex = 14073;

	class RogueMagicWorkbenchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FuncList; // 0x10
		::System::UInt32 WorkbenchID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicWorkbenchRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicWorkbenchRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
