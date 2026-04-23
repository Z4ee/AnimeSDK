#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_METHOD_2_3C8A5CF93A79E3D7_OFFSET UNITYSDK_OFFSET(0x1909D2D0)
#define RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1909D440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineEntityStateChangeCallback_TypeDefinitionIndex = 19604;

	class TimelineEntityStateChangeCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ListenState; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3C8A5CF93A79E3D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimelineEntityStateChangeCallback*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimelineEntityStateChangeCallback*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYSTATECHANGECALLBACK_METHOD_2_3C8A5CF93A79E3D7_OFFSET))(a1, a2);
		}
	};
}
