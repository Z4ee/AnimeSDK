#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPTIMELINE_METHOD_3_068A44B628BAA65C_OFFSET UNITYSDK_OFFSET(0x19CC13B0)
#define RPG_GAMECORE_STOPTIMELINE_METHOD_3_515903F8FCB84DED_OFFSET UNITYSDK_OFFSET(0x19CC1430)
#define RPG_GAMECORE_STOPTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC1400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopTimeline_TypeDefinitionIndex = 19481;

	class StopTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_068A44B628BAA65C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_METHOD_3_068A44B628BAA65C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_515903F8FCB84DED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_METHOD_3_515903F8FCB84DED_OFFSET))(a1, a2);
		}
	};
}
