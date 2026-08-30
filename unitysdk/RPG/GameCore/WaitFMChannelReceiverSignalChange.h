#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_METHOD_3_88EC0C9E04324199_OFFSET UNITYSDK_OFFSET(0x1DEB74C0)
#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_METHOD_3_946D81445F1927AA_OFFSET UNITYSDK_OFFSET(0x1DEB7500)
#define RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB74F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFMChannelReceiverSignalChange_TypeDefinitionIndex = 20342;

	class WaitFMChannelReceiverSignalChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* ReceiverName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_88EC0C9E04324199(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_METHOD_3_88EC0C9E04324199_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_946D81445F1927AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFMChannelReceiverSignalChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFMChannelReceiverSignalChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFMCHANNELRECEIVERSIGNALCHANGE_METHOD_3_946D81445F1927AA_OFFSET))(a1, a2);
		}
	};
}
