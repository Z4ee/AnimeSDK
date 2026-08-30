#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_04B19FFFAFE23C40_OFFSET UNITYSDK_OFFSET(0x1CDDDF60)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_1FF59433170975D3_OFFSET UNITYSDK_OFFSET(0x1CDDDFA0)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDDF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcTrigger_TypeDefinitionIndex = 21944;

	class AdvTrackNpcTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ValueDelta; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04B19FFFAFE23C40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_04B19FFFAFE23C40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FF59433170975D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_1FF59433170975D3_OFFSET))(a1, a2);
		}
	};
}
