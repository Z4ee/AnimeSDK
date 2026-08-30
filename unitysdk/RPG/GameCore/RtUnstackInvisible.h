#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTUNSTACKINVISIBLE_METHOD_3_3E77E18DD2C48824_OFFSET UNITYSDK_OFFSET(0x1CCF5D00)
#define RPG_GAMECORE_RTUNSTACKINVISIBLE_METHOD_3_DF4059D1CAA071A1_OFFSET UNITYSDK_OFFSET(0x1CCF5DD0)
#define RPG_GAMECORE_RTUNSTACKINVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF5DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtUnstackInvisible_TypeDefinitionIndex = 23846;

	class RtUnstackInvisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTUNSTACKINVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E77E18DD2C48824(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtUnstackInvisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtUnstackInvisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTUNSTACKINVISIBLE_METHOD_3_3E77E18DD2C48824_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF4059D1CAA071A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtUnstackInvisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtUnstackInvisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTUNSTACKINVISIBLE_METHOD_3_DF4059D1CAA071A1_OFFSET))(a1, a2);
		}
	};
}
