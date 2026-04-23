#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_53468D5AA685143F_METHOD_1_147A0D5D4F0F4793_OFFSET UNITYSDK_OFFSET(0x12570640)
#define CLASS_1_53468D5AA685143F_METHOD_1_5D12300D3F7C388F_OFFSET UNITYSDK_OFFSET(0x125702B0)
#define CLASS_1_53468D5AA685143F_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x12570300)
#define CLASS_1_53468D5AA685143F_METHOD_1_F78E0C770F2975EF_OFFSET UNITYSDK_OFFSET(0x125705F0)
#define CLASS_1_53468D5AA685143F__CTOR_OFFSET UNITYSDK_OFFSET(0x12570230)

inline static constexpr unsigned int Class_1_53468D5AA685143F_TypeDefinitionIndex = 47926;

class Class_1_53468D5AA685143F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_355*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_355*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_355*>*))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_5D12300D3F7C388F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_5D12300D3F7C388F_OFFSET))(this);
	}

	::System::UInt32 Method_1_F78E0C770F2975EF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_F78E0C770F2975EF_OFFSET))(this);
	}

	::System::Single Method_1_147A0D5D4F0F4793(::RPG::GameCore::CombatPowerSource a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_147A0D5D4F0F4793_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}
};
