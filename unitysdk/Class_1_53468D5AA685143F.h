#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_428;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_53468D5AA685143F_METHOD_1_147A0D5D4F0F4793_OFFSET UNITYSDK_OFFSET(0x1A6CBE60)
#define CLASS_1_53468D5AA685143F_METHOD_1_55E03CE877AB6D4C_OFFSET UNITYSDK_OFFSET(0x1A6CBE10)
#define CLASS_1_53468D5AA685143F_METHOD_1_84024BF09FAFFF61_OFFSET UNITYSDK_OFFSET(0x1A6CBAC0)
#define CLASS_1_53468D5AA685143F_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1A6CBB10)
#define CLASS_1_53468D5AA685143F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CBA40)

inline static constexpr unsigned int Class_1_53468D5AA685143F_TypeDefinitionIndex = 52200;

class Class_1_53468D5AA685143F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* FGGPJCJAJBG; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_428*>* OGHCLELFCDB; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_428*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_428*>*))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_84024BF09FAFFF61()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_84024BF09FAFFF61_OFFSET))(this);
	}

	::System::UInt32 Method_1_55E03CE877AB6D4C()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_55E03CE877AB6D4C_OFFSET))(this);
	}

	::System::Single Method_1_147A0D5D4F0F4793(::RPG::GameCore::CombatPowerSource a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_147A0D5D4F0F4793_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53468D5AA685143F_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}
};
