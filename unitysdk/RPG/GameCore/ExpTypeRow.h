#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C39B0)
#define RPG_GAMECORE_EXPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188C3F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpTypeRow_TypeDefinitionIndex = 12044;

	class ExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 TypeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ExpTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
