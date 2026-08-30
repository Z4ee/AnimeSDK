#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x1D0E0E10)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_2AAEC2282D173F5F_OFFSET UNITYSDK_OFFSET(0x1D0E0DA0)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_8D87B72FD1FC440D_OFFSET UNITYSDK_OFFSET(0x1D0E0AB0)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_D4BAA86619FFD488_OFFSET UNITYSDK_OFFSET(0x1D0E0B00)
#define RPG_GAMECORE_FIVEDIMDOORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDoorConfig_TypeDefinitionIndex = 18383;

	class FiveDimDoorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsFiveDimDoor; // 0x10
		::System::UInt32 RequireKeyNumber; // 0x14
		::Il2CppArray<::RPG::GameCore::FiveDimDynamicVar*>* BindLevelVarNames; // 0x18
		::System::Single OpenDelayDuration; // 0x20
		::System::Boolean SendEventOnInit; // 0x24
		::RPG::GameCore::LittleGameEvent* KeyChangeEvent; // 0x28
		::RPG::GameCore::LittleGameEvent* KeyCollectEvent; // 0x30
		::RPG::GameCore::LittleGameEvent* DoorUnlockEvent; // 0x38
		::RPG::GameCore::LittleGameEvent* DoorOpenEvent; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8D87B72FD1FC440D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDoorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDoorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_8D87B72FD1FC440D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4BAA86619FFD488(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDoorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDoorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_D4BAA86619FFD488_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>* Method_3_2AAEC2282D173F5F()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::UInt32>>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_2AAEC2282D173F5F_OFFSET))();
		}

		::System::Void Method_3_0D372435D9CAE4BC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDOORCONFIG_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
		}
	};
}
