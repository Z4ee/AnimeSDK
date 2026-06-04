#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A2160)
#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199A27D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyRaiseConfigRow_TypeDefinitionIndex = 11501;

	class MonopolyRaiseConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 RaiseCurveID; // 0x14
		::System::UInt32 RaiseValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyRaiseConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyRaiseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
