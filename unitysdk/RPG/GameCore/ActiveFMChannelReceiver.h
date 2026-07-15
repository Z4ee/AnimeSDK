#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_63F268E8126B5A18_OFFSET UNITYSDK_OFFSET(0x1AAD96A0)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_A90264EB663E8783_OFFSET UNITYSDK_OFFSET(0x1AAD96E0)
#define RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD96D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActiveFMChannelReceiver_TypeDefinitionIndex = 19795;

	class ActiveFMChannelReceiver : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::System::Boolean Active; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_63F268E8126B5A18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelReceiver*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelReceiver*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_63F268E8126B5A18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A90264EB663E8783(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActiveFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActiveFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEFMCHANNELRECEIVER_METHOD_3_A90264EB663E8783_OFFSET))(a1, a2);
		}
	};
}
