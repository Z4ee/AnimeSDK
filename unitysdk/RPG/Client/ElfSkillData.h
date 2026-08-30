#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE94B90)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSkillData_TypeDefinitionIndex = 63812;

	class ElfSkillData : public ::System::Object
	{
	public:
		::System::UInt32 MaxUse; // 0x10
		::System::Single Duration; // 0x14
		::System::Single CD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSKILLDATA__CTOR_OFFSET))(this);
		}
	};
}
