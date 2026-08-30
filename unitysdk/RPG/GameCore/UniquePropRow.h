#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNIQUEPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D61EB00)
#define RPG_GAMECORE_UNIQUEPROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61EC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniquePropRow_TypeDefinitionIndex = 13003;

	class UniquePropRow : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* PropID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEPROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniquePropRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniquePropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEPROPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
