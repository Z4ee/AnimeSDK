#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_42B3EC61249E690A_OFFSET UNITYSDK_OFFSET(0x193D0950)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_A90264EB663E8783_OFFSET UNITYSDK_OFFSET(0x193D09D0)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x193D09A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFMChannelReceiver_TypeDefinitionIndex = 19437;

	class ActiveFMChannelReceiver : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::System::Boolean Active; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42B3EC61249E690A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelReceiver*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelReceiver*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_42B3EC61249E690A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A90264EB663E8783(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_A90264EB663E8783_OFFSET))(a1, a2);
		}
	};
}
