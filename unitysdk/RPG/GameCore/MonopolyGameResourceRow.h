#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743B230)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743B850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameResourceRow_TypeDefinitionIndex = 11055;

	class MonopolyGameResourceRow : public ::System::Object
	{
	public:
		::System::String* RuleIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconOutlinePath; // 0x20
		::System::UInt32 ResourceNum; // 0x28
		::System::UInt32 ResourceID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyGameResourceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGameResourceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
