#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_67AB705E275B3098_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0B2280)
#define CLASS_1_67AB705E275B3098_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xC0B2670)
#define CLASS_1_67AB705E275B3098_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xC0B2690)
#define CLASS_1_67AB705E275B3098_GET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xC0B26B0)
#define CLASS_1_67AB705E275B3098_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xC0B26D0)
#define CLASS_1_67AB705E275B3098_METHOD_1_0053A7FE4D917F9B_OFFSET UNITYSDK_OFFSET(0xC0B2430)
#define CLASS_1_67AB705E275B3098_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC0B2160)
#define CLASS_1_67AB705E275B3098_METHOD_1_3787E759DAEA35A4_OFFSET UNITYSDK_OFFSET(0xC0B25A0)
#define CLASS_1_67AB705E275B3098_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xC0B2650)
#define CLASS_1_67AB705E275B3098_METHOD_1_814020D25F22C9C7_OFFSET UNITYSDK_OFFSET(0xC0B24B0)
#define CLASS_1_67AB705E275B3098_METHOD_1_8BC02E77E033A800_OFFSET UNITYSDK_OFFSET(0xC0B22D0)
#define CLASS_1_67AB705E275B3098_METHOD_1_F270E28843D1EC50_OFFSET UNITYSDK_OFFSET(0xC0B23B0)
#define CLASS_1_67AB705E275B3098_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xC0B2680)
#define CLASS_1_67AB705E275B3098_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xC0B26A0)
#define CLASS_1_67AB705E275B3098_SET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xC0B26C0)
#define CLASS_1_67AB705E275B3098_SET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xC0B26E0)
#define CLASS_1_67AB705E275B3098__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B20E0)

inline static constexpr unsigned int Class_1_67AB705E275B3098_TypeDefinitionIndex = 50221;

class Class_1_67AB705E275B3098 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* _Modifier_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _MaxStack_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _MaxShield_k__BackingField; // 0x28
	::RPG::GameCore::StringHash Field_1_4; // 0x30
	::RPG::GameCore::StringHash Field_1_5; // 0x34

	::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_8BC02E77E033A800(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_8BC02E77E033A800_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_814020D25F22C9C7(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_814020D25F22C9C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3787E759DAEA35A4(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_3787E759DAEA35A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0053A7FE4D917F9B(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_0053A7FE4D917F9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F270E28843D1EC50(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_F270E28843D1EC50_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CurShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_GET_CURSHIELD_OFFSET))(this);
	}

	::System::Void set_CurShield(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_SET_CURSHIELD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxShield()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_GET_MAXSHIELD_OFFSET))(this);
	}

	::System::Void set_MaxShield(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_SET_MAXSHIELD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxStack()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_GET_MAXSTACK_OFFSET))(this);
	}

	::System::Void set_MaxStack(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_SET_MAXSTACK_OFFSET))(this, value);
	}

	::RPG::GameCore::TurnBasedModifierInstance* get_Modifier()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_GET_MODIFIER_OFFSET))(this);
	}

	::System::Void set_Modifier(::RPG::GameCore::TurnBasedModifierInstance* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_SET_MODIFIER_OFFSET))(this, value);
	}

	::Class_1_2CAAA2FDF9170110* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AB705E275B3098_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}
};
