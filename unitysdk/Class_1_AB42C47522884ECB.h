#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1264;
class Class_0_16E4307DCC419505_1290;
class Class_1_96586C089CD5CA69;
class Class_1_97F9E33E53026E4C;
class Class_1_E79EE3670D2EC49A;
namespace RPG::Client::FateRin::Battle { class FateRinPrepareBattleViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_AB42C47522884ECB_METHOD_1_3485A366AE089637_OFFSET UNITYSDK_OFFSET(0x146CD490)
#define CLASS_1_AB42C47522884ECB_METHOD_1_5A120AEEEEE07BAA_OFFSET UNITYSDK_OFFSET(0x146CD3A0)
#define CLASS_1_AB42C47522884ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x146CD270)

inline static constexpr unsigned int Class_1_AB42C47522884ECB_TypeDefinitionIndex = 76024;

class Class_1_AB42C47522884ECB : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1264* Field_1_0; // 0x10
	::Class_1_96586C089CD5CA69* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1290* Field_1_2; // 0x20
	::Class_1_97F9E33E53026E4C* Field_1_3; // 0x28
	::Class_1_E79EE3670D2EC49A* Field_1_4; // 0x30

	::System::Void _ctor(::Class_1_97F9E33E53026E4C* a1, ::Class_1_96586C089CD5CA69* a2, ::Class_0_16E4307DCC419505_1264* a3, ::Class_0_16E4307DCC419505_1290* a4, ::Class_1_E79EE3670D2EC49A* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97F9E33E53026E4C*, ::Class_1_96586C089CD5CA69*, ::Class_0_16E4307DCC419505_1264*, ::Class_0_16E4307DCC419505_1290*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + CLASS_1_AB42C47522884ECB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel* Method_1_5A120AEEEEE07BAA(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1)
	{
		return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel*(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*))((::PBYTE)hIl2Cpp + CLASS_1_AB42C47522884ECB_METHOD_1_5A120AEEEEE07BAA_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel* Method_1_3485A366AE089637(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
	{
		return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleViewModel*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_AB42C47522884ECB_METHOD_1_3485A366AE089637_OFFSET))(this, a1, a2);
	}
};
