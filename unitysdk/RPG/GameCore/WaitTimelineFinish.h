#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITTIMELINEFINISH_METHOD_3_CD3F42F356C96246_OFFSET UNITYSDK_OFFSET(0x17906A90)
#define RPG_GAMECORE_WAITTIMELINEFINISH_METHOD_3_ED1D00621172FAAF_OFFSET UNITYSDK_OFFSET(0x17906A10)
#define RPG_GAMECORE_WAITTIMELINEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x17906A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTimelineFinish_TypeDefinitionIndex = 21978;

	class WaitTimelineFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::System::Boolean TriggerBeforeFinish; // 0x20
		::System::Boolean IgnoreWarning; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ED1D00621172FAAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimelineFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimelineFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH_METHOD_3_ED1D00621172FAAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD3F42F356C96246(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH_METHOD_3_CD3F42F356C96246_OFFSET))(a1, a2);
		}
	};
}
