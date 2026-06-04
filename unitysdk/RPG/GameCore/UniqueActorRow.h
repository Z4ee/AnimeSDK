#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNIQUEACTORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E33270)
#define RPG_GAMECORE_UNIQUEACTORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E333A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniqueActorRow_TypeDefinitionIndex = 12473;

	class UniqueActorRow : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::String* ActorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEACTORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniqueActorRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniqueActorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIQUEACTORROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
