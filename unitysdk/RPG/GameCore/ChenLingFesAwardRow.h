#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESAWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E014050)
#define RPG_GAMECORE_CHENLINGFESAWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E014240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAwardRow_TypeDefinitionIndex = 11090;

	class ChenLingFesAwardRow : public ::System::Object
	{
	public:
		::System::UInt32 RerollNum; // 0x10
		::System::UInt32 ExtraItem; // 0x14
		::System::UInt32 ExtendNum; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 AdjustNum; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesAwardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesAwardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
