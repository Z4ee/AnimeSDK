#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18605A90)
#define RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18605FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstValueSilverWolfRow_TypeDefinitionIndex = 11681;

	class ActivityConstValueSilverWolfRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* ConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityConstValueSilverWolfRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityConstValueSilverWolfRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTVALUESILVERWOLFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
