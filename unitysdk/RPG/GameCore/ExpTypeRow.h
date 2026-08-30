#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7D96D0)
#define RPG_GAMECORE_EXPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpTypeRow_TypeDefinitionIndex = 12657;

	class ExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 TypeID; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
