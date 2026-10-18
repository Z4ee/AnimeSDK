#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B84DBACAB8E3F5B6.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_043F51C635F7D340_CLEAR_OFFSET UNITYSDK_OFFSET(0x164301C0)
#define CLASS_2_043F51C635F7D340_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x16430520)
#define CLASS_2_043F51C635F7D340_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x16430560)
#define CLASS_2_043F51C635F7D340_GET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0x16430540)
#define CLASS_2_043F51C635F7D340_METHOD_2_CF2C8F3FFFBA1184_OFFSET UNITYSDK_OFFSET(0x16430270)
#define CLASS_2_043F51C635F7D340_METHOD_2_DF0AB0BD2B90F87C_OFFSET UNITYSDK_OFFSET(0x164304C0)
#define CLASS_2_043F51C635F7D340_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x16430530)
#define CLASS_2_043F51C635F7D340_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x16430570)
#define CLASS_2_043F51C635F7D340_SET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0x16430550)
#define CLASS_2_043F51C635F7D340__CTOR_OFFSET UNITYSDK_OFFSET(0x16430580)

inline static constexpr unsigned int Class_2_043F51C635F7D340_TypeDefinitionIndex = 54442;

class Class_2_043F51C635F7D340 : public ::Class_1_B84DBACAB8E3F5B6
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* LNNGJBLKMHI; // 0x30
	::RPG::GameCore::FixPoint _LifeTime_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _MaxLayer_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _Layer_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CF2C8F3FFFBA1184(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_METHOD_2_CF2C8F3FFFBA1184_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF0AB0BD2B90F87C(::RPG::GameCore::ModifierBehaviorFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_METHOD_2_DF0AB0BD2B90F87C_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Layer()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_GET_LAYER_OFFSET))(this);
	}

	::System::Void set_Layer(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_SET_LAYER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxLayer()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_GET_MAXLAYER_OFFSET))(this);
	}

	::System::Void set_MaxLayer(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_SET_MAXLAYER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_LifeTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_GET_LIFETIME_OFFSET))(this);
	}

	::System::Void set_LifeTime(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_043F51C635F7D340_SET_LIFETIME_OFFSET))(this, a1);
	}
};
