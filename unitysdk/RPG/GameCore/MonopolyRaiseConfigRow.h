#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17445800)
#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17445E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyRaiseConfigRow_TypeDefinitionIndex = 11053;

	class MonopolyRaiseConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RaiseValue; // 0x10
		::System::UInt32 Cost; // 0x14
		::System::UInt32 RaiseCurveID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyRaiseConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyRaiseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
