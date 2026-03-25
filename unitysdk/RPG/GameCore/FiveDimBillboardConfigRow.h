#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171EAE70)
#define RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171EAF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBillboardConfigRow_TypeDefinitionIndex = 11445;

	class FiveDimBillboardConfigRow : public ::System::Object
	{
	public:
		::System::String* BillboardPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FiveDimBillboardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBillboardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBILLBOARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
