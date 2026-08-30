#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2BE960)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BEFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameResourceRow_TypeDefinitionIndex = 11992;

	class MonopolyGameResourceRow : public ::System::Object
	{
	public:
		::System::String* IconOutlinePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* RuleIconPath; // 0x20
		::System::UInt32 ResourceID; // 0x28
		::System::UInt32 ResourceNum; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyGameResourceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGameResourceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
