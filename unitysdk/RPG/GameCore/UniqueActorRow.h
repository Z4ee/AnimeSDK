#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNIQUEACTORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190E25E0)
#define RPG_GAMECORE_UNIQUEACTORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190E2710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniqueActorRow_TypeDefinitionIndex = 12385;

	class UniqueActorRow : public ::System::Object
	{
	public:
		::System::String* ActorID; // 0x10
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEACTORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::UniqueActorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniqueActorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEACTORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
