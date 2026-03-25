#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_METHOD_4_619117BBE6B7F6B8_OFFSET UNITYSDK_OFFSET(0x1768A5D0)
#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_METHOD_4_7F104796C36C2204_OFFSET UNITYSDK_OFFSET(0x17698910)
#define RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1768A580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfChangeAnimState_TypeDefinitionIndex = 19719;

	class ST_Side_ElfChangeAnimState : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Delay; // 0x18
		::System::UInt32 State; // 0x1C
		::System::String* AudioEventName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F104796C36C2204(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_METHOD_4_7F104796C36C2204_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_619117BBE6B7F6B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ElfChangeAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ElfChangeAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFCHANGEANIMSTATE_METHOD_4_619117BBE6B7F6B8_OFFSET))(a1, a2);
		}
	};
}
