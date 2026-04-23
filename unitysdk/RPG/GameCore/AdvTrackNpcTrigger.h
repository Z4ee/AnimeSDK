#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_1FF59433170975D3_OFFSET UNITYSDK_OFFSET(0x186678F0)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_51239E1B29ED6E0A_OFFSET UNITYSDK_OFFSET(0x18667870)
#define RPG_GAMECORE_ADVTRACKNPCTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x186678C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcTrigger_TypeDefinitionIndex = 21060;

	class AdvTrackNpcTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ValueDelta; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51239E1B29ED6E0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_51239E1B29ED6E0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FF59433170975D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCTRIGGER_METHOD_3_1FF59433170975D3_OFFSET))(a1, a2);
		}
	};
}
