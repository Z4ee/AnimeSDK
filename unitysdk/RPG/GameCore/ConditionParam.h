#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONDITIONPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19672B00)
#define RPG_GAMECORE_CONDITIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19672C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConditionParam_TypeDefinitionIndex = 12444;

	class ConditionParam : public ::System::Object
	{
	public:
		::System::String* Param; // 0x10
		::RPG::GameCore::ConditionType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConditionParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConditionParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDITIONPARAM_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
