#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER_METHOD_3_3858AA5677DAA1C8_OFFSET UNITYSDK_OFFSET(0x1713BF20)
#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER_METHOD_3_9AEA0244DAE4CE91_OFFSET UNITYSDK_OFFSET(0x1713BEA0)
#define RPG_GAMECORE_CREATEFMCHANNELRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1713BEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateFMChannelReceiver_TypeDefinitionIndex = 18886;

	class CreateFMChannelReceiver : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::RPG::GameCore::DynamicString* ChannelName; // 0x20
		::RPG::GameCore::DynamicString* SaveDynamicValueName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9AEA0244DAE4CE91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateFMChannelReceiver*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateFMChannelReceiver*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER_METHOD_3_9AEA0244DAE4CE91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3858AA5677DAA1C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEFMCHANNELRECEIVER_METHOD_3_3858AA5677DAA1C8_OFFSET))(a1, a2);
		}
	};
}
