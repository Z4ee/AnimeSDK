#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17120AF0)
#define RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171210C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonActiveSkillConfigRow_TypeDefinitionIndex = 11911;

	class CommonActiveSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::UInt32 CommonActiveSkillID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CommonActiveSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonActiveSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONACTIVESKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
