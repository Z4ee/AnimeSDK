#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD0F9C0)
#define RPG_GAMECORE_MAPPINGINFOCONNECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD10060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoConnectionRow_TypeDefinitionIndex = 12095;

	class MappingInfoConnectionRow : public ::System::Object
	{
	public:
		::System::UInt32 SourceEntranceID; // 0x10
		::System::UInt32 TargetEntranceID; // 0x14
		::System::UInt32 TargetMappingInfoID; // 0x18
		::System::UInt32 SourceMappingInfoID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MappingInfoConnectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MappingInfoConnectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOCONNECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
