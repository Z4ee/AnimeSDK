#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TarotBookConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKCONDITIONPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFB090)
#define RPG_GAMECORE_TAROTBOOKCONDITIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFB1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookConditionParam_TypeDefinitionIndex = 14448;

	class TarotBookConditionParam : public ::System::Object
	{
	public:
		::System::String* Param; // 0x10
		::RPG::GameCore::TarotBookConditionType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCONDITIONPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookConditionParam*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookConditionParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKCONDITIONPARAM_FROMBINARY_OFFSET))(array, val);
		}
	};
}
