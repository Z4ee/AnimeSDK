#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionCustomValue; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_METHOD_4_A89BF22EC3BBEFED_OFFSET UNITYSDK_OFFSET(0x19101E30)
#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_METHOD_4_F94FAD5D89AFE754_OFFSET UNITYSDK_OFFSET(0x19101D50)
#define RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19101DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMissionCustomValueChange_TypeDefinitionIndex = 20528;

	class WaitMissionCustomValueChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::RPG::GameCore::MissionCustomValue* MissionCustomValue; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::RPG::GameCore::PredicateConfig* Condition; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F94FAD5D89AFE754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMissionCustomValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMissionCustomValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_METHOD_4_F94FAD5D89AFE754_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A89BF22EC3BBEFED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONCUSTOMVALUECHANGE_METHOD_4_A89BF22EC3BBEFED_OFFSET))(a1, a2);
		}
	};
}
