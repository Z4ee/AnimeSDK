#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_METHOD_3_97BF6FCA13CBADE8_OFFSET UNITYSDK_OFFSET(0x16F7CCA0)
#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_METHOD_3_EA9E89FE3BD7CAB1_OFFSET UNITYSDK_OFFSET(0x16F7CD20)
#define RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7CCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyTransportFocusCamera_TypeDefinitionIndex = 22332;

	class AlleyTransportFocusCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_97BF6FCA13CBADE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyTransportFocusCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyTransportFocusCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_METHOD_3_97BF6FCA13CBADE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA9E89FE3BD7CAB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyTransportFocusCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyTransportFocusCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYTRANSPORTFOCUSCAMERA_METHOD_3_EA9E89FE3BD7CAB1_OFFSET))(a1, a2);
		}
	};
}
