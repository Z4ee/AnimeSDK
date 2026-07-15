#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B007D50)
#define RPG_GAMECORE_IDLELIVESPECIALROOMICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B007E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpecialRoomIconRow_TypeDefinitionIndex = 11423;

	class IdleLiveSpecialRoomIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALROOMICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
