#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITTIMELINE_METHOD_3_444713DCF914282A_OFFSET UNITYSDK_OFFSET(0x1910A6E0)
#define RPG_GAMECORE_WAITTIMELINE_METHOD_3_7C1C6BBBAFE3051C_OFFSET UNITYSDK_OFFSET(0x1910A770)
#define RPG_GAMECORE_WAITTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1910A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTimeline_TypeDefinitionIndex = 21387;

	class WaitTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::System::Single NormalizedTimeEnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_444713DCF914282A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimeline*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimeline*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE_METHOD_3_444713DCF914282A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C1C6BBBAFE3051C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimeline* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE_METHOD_3_7C1C6BBBAFE3051C_OFFSET))(a1, a2);
		}
	};
}
