#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_METHOD_3_979B672261634BD7_OFFSET UNITYSDK_OFFSET(0x17906FD0)
#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_METHOD_3_98B01AB5B91619C3_OFFSET UNITYSDK_OFFSET(0x17906EC0)
#define RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17906FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTransferFinishedEvent_TypeDefinitionIndex = 19760;

	class WaitTransferFinishedEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98B01AB5B91619C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTransferFinishedEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTransferFinishedEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_METHOD_3_98B01AB5B91619C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_979B672261634BD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTransferFinishedEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTransferFinishedEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTRANSFERFINISHEDEVENT_METHOD_3_979B672261634BD7_OFFSET))(a1, a2);
		}
	};
}
