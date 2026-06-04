#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_28D28729FCF3943D_OFFSET UNITYSDK_OFFSET(0x1964D580)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_A15A6FF2330F11F4_OFFSET UNITYSDK_OFFSET(0x1964D600)
#define RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1964D5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTriggerPerformanceByPhase_TypeDefinitionIndex = 20506;

	class ChimeraTriggerPerformanceByPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerfect; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnComplete; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnJustSoSo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28D28729FCF3943D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_28D28729FCF3943D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A15A6FF2330F11F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerPerformanceByPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERPERFORMANCEBYPHASE_METHOD_3_A15A6FF2330F11F4_OFFSET))(a1, a2);
		}
	};
}
