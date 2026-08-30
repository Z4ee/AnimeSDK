#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class ChenLingBattleEffect_AddBuff; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_40CF0901FDB19BDF_METHOD_1_15779B1774CF3F78_OFFSET UNITYSDK_OFFSET(0xB766390)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_4F75F988A9F2C6D0_OFFSET UNITYSDK_OFFSET(0xB766F80)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_8098E45C09C8D756_OFFSET UNITYSDK_OFFSET(0xB766C00)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_88915B65639F14F2_1_OFFSET UNITYSDK_OFFSET(0xB766B10)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_88915B65639F14F2_OFFSET UNITYSDK_OFFSET(0xB766A20)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_919211F2EC8E5FD0_OFFSET UNITYSDK_OFFSET(0xB766E50)
#define CLASS_1_40CF0901FDB19BDF_METHOD_1_FE0A982EE5B4189E_OFFSET UNITYSDK_OFFSET(0xB766800)
#define CLASS_1_40CF0901FDB19BDF__CTOR_OFFSET UNITYSDK_OFFSET(0xB7670D0)

inline static constexpr unsigned int Class_1_40CF0901FDB19BDF_TypeDefinitionIndex = 77409;

class Class_1_40CF0901FDB19BDF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_15779B1774CF3F78(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_15779B1774CF3F78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FE0A982EE5B4189E(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_FE0A982EE5B4189E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88915B65639F14F2(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_88915B65639F14F2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_88915B65639F14F2_1(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_88915B65639F14F2_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8098E45C09C8D756(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_8098E45C09C8D756_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_919211F2EC8E5FD0(::Class_2_6B60059019300BAD* a1, ::RPG::GameCore::ChenLingBattleEffect_AddBuff* a2, ::Class_1_B8FF829EFDD29B81* a3, ::RPG::GameCore::ChenLingBattleBuffType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_919211F2EC8E5FD0_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::FixPoint Method_1_4F75F988A9F2C6D0(::RPG::GameCore::ChenLingBattleEffect_AddBuff* a1, ::Class_1_B8FF829EFDD29B81* a2, ::System::Int32 a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffect_AddBuff*, ::Class_1_B8FF829EFDD29B81*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_40CF0901FDB19BDF_METHOD_1_4F75F988A9F2C6D0_OFFSET))(this, a1, a2, a3);
	}
};
