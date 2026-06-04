#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193EA6A0)
#define RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193EA7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightConstValueRow_TypeDefinitionIndex = 11097;

	class ActivityFightConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFightConstValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFightConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTCONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
