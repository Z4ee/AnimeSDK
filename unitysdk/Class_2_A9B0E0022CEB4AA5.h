#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"

class Class_0_16E4307DCC419505_1054;
class Class_1_9268626D960D1854;
class Class_1_AD41F4EE5E042AFA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A9B0E0022CEB4AA5_METHOD_2_2FD130C34D806478_OFFSET UNITYSDK_OFFSET(0x16EF14C0)
#define CLASS_2_A9B0E0022CEB4AA5_METHOD_2_CE2CA94B9D1CC6CD_OFFSET UNITYSDK_OFFSET(0x16EF16C0)
#define CLASS_2_A9B0E0022CEB4AA5_METHOD_2_F942D9B5247738B6_OFFSET UNITYSDK_OFFSET(0x16EF1220)
#define CLASS_2_A9B0E0022CEB4AA5__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF1790)

inline static constexpr unsigned int Class_2_A9B0E0022CEB4AA5_TypeDefinitionIndex = 68557;

class Class_2_A9B0E0022CEB4AA5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::Class_1_AD41F4EE5E042AFA*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9B0E0022CEB4AA5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1054* Method_2_F942D9B5247738B6(::Class_1_9268626D960D1854* a1)
	{
		return ((::Class_0_16E4307DCC419505_1054*(*)(::PVOID, ::Class_1_9268626D960D1854*))((::PBYTE)hIl2Cpp + CLASS_2_A9B0E0022CEB4AA5_METHOD_2_F942D9B5247738B6_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_CE2CA94B9D1CC6CD(::RPG::GameCore::BattleScreenEffectType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_A9B0E0022CEB4AA5_METHOD_2_CE2CA94B9D1CC6CD_OFFSET))(a1);
	}

	::Class_0_16E4307DCC419505_1054* Method_2_2FD130C34D806478(::Class_1_9268626D960D1854* a1)
	{
		return ((::Class_0_16E4307DCC419505_1054*(*)(::PVOID, ::Class_1_9268626D960D1854*))((::PBYTE)hIl2Cpp + CLASS_2_A9B0E0022CEB4AA5_METHOD_2_2FD130C34D806478_OFFSET))(this, a1);
	}
};
