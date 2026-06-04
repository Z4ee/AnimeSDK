#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HPSHOWRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1981A3E0)
#define RPG_GAMECORE_HPSHOWRULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1981AA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPShowRuleRow_TypeDefinitionIndex = 13065;

	class HPShowRuleRow : public ::System::Object
	{
	public:
		::System::String* Color; // 0x10
		::System::Single Max; // 0x18
		::System::Boolean IsDanger; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HPShowRuleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HPShowRuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HPSHOWRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
