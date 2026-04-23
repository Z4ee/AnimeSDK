#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x190BFB70)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_METHOD_3_0580BEEFC66C2ECC_OFFSET UNITYSDK_OFFSET(0x190BF780)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING_METHOD_3_84236F4B2910CEA0_OFFSET UNITYSDK_OFFSET(0x190BF940)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x190BF910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomString_TypeDefinitionIndex = 22778;

	class TriggerCustomString : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* NORMAL_END_STORY_SIGNAL; // 0x0
		// static const ::System::String* FORCE_END_STORY_SIGNAL; // 0x0
		// static const ::System::String* EARLY_OPEN_ENDMASK; // 0x0
		// static const ::System::String* PERFORMANCE_REPLAY_END; // 0x0
		::RPG::GameCore::DynamicString* CustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0580BEEFC66C2ECC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_METHOD_3_0580BEEFC66C2ECC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84236F4B2910CEA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_METHOD_3_84236F4B2910CEA0_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRING_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
