#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA06D10)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA07290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConstValueRow_TypeDefinitionIndex = 11590;

	class ActivityFindTrotterConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFindTrotterConstValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFindTrotterConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
