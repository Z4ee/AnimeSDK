#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNIQUEPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178E3F00)
#define RPG_GAMECORE_UNIQUEPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178E4030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniquePropRow_TypeDefinitionIndex = 11956;

	class UniquePropRow : public ::System::Object
	{
	public:
		::System::String* PropID; // 0x10
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::UniquePropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniquePropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEPROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
