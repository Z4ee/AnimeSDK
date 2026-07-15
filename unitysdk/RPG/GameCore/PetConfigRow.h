#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4BB120)
#define RPG_GAMECORE_PETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BB7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetConfigRow_TypeDefinitionIndex = 13864;

	class PetConfigRow : public ::System::Object
	{
	public:
		::System::String* ManikinJsonPath; // 0x10
		::System::String* UIIdleShow; // 0x18
		::System::String* UIPetModelPath; // 0x20
		::System::UInt32 PetID; // 0x28
		::System::UInt32 PetItemID; // 0x2C
		::System::UInt32 SummonUnitID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
