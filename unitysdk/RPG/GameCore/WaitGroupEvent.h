#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITGROUPEVENT_METHOD_4_88885C73CE8EC5EA_OFFSET UNITYSDK_OFFSET(0x1D6A4A80)
#define RPG_GAMECORE_WAITGROUPEVENT_METHOD_4_DD381AAA6EE524B7_OFFSET UNITYSDK_OFFSET(0x1D6A4A30)
#define RPG_GAMECORE_WAITGROUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupEvent_TypeDefinitionIndex = 20951;

	class WaitGroupEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DD381AAA6EE524B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT_METHOD_4_DD381AAA6EE524B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88885C73CE8EC5EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT_METHOD_4_88885C73CE8EC5EA_OFFSET))(a1, a2);
		}
	};
}
