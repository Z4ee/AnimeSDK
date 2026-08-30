#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPTIMELINE_METHOD_3_515903F8FCB84DED_OFFSET UNITYSDK_OFFSET(0x1CAFE3F0)
#define RPG_GAMECORE_STOPTIMELINE_METHOD_3_B21D5A73996DBD2E_OFFSET UNITYSDK_OFFSET(0x1CAFE3B0)
#define RPG_GAMECORE_STOPTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFE3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopTimeline_TypeDefinitionIndex = 20385;

	class StopTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B21D5A73996DBD2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_METHOD_3_B21D5A73996DBD2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_515903F8FCB84DED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_METHOD_3_515903F8FCB84DED_OFFSET))(a1, a2);
		}
	};
}
