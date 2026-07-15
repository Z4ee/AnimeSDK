#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForbidSelectTimeRewindReason.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT_METHOD_3_1B814A44AFC840E6_OFFSET UNITYSDK_OFFSET(0x1C1531A0)
#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT_METHOD_3_96EA2A0BCBF5B8C7_OFFSET UNITYSDK_OFFSET(0x1C1531E0)
#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1531D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindForbidSelect_TypeDefinitionIndex = 19882;

	class TimeRewindForbidSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Forbid; // 0x18
		::RPG::GameCore::ForbidSelectTimeRewindReason Reason; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B814A44AFC840E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindForbidSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindForbidSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT_METHOD_3_1B814A44AFC840E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_96EA2A0BCBF5B8C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindForbidSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindForbidSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT_METHOD_3_96EA2A0BCBF5B8C7_OFFSET))(a1, a2);
		}
	};
}
