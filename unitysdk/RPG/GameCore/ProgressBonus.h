#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROGRESSBONUS_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17513BE0)
#define RPG_GAMECORE_PROGRESSBONUS__CTOR_OFFSET UNITYSDK_OFFSET(0x17513CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProgressBonus_TypeDefinitionIndex = 14067;

	class ProgressBonus : public ::System::Object
	{
	public:
		::System::UInt32 AddStar; // 0x10
		::System::UInt32 Progress; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROGRESSBONUS__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ProgressBonus*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProgressBonus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROGRESSBONUS_FROMBINARY_OFFSET))(array, val);
		}
	};
}
