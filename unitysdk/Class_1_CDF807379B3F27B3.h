#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5ED9ADE4BC6ABA06;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_CDF807379B3F27B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB616DC0)
#define CLASS_1_CDF807379B3F27B3_GET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0xB617ED0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_0D65FE80E3B7388D_OFFSET UNITYSDK_OFFSET(0xB617930)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_1D8E701FE5A66C33_OFFSET UNITYSDK_OFFSET(0xB616E10)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_4A9A42AB5F2C9E26_OFFSET UNITYSDK_OFFSET(0xB617C00)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_4CC0755DCCEF577F_OFFSET UNITYSDK_OFFSET(0xB616F80)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_57C3183587B3E227_OFFSET UNITYSDK_OFFSET(0xB6173B0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_59099BD00711C1F0_OFFSET UNITYSDK_OFFSET(0xB616EE0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_5C9F7DCBA3264D1D_OFFSET UNITYSDK_OFFSET(0xB617AF0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0xB617EC0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0xB617EB0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_99D925E72C789690_OFFSET UNITYSDK_OFFSET(0xB617C50)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xB617DF0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB617E50)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_CE241D3CB7B401EC_OFFSET UNITYSDK_OFFSET(0xB617480)
#define CLASS_1_CDF807379B3F27B3_SET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0xB617EE0)
#define CLASS_1_CDF807379B3F27B3__CCTOR_OFFSET UNITYSDK_OFFSET(0xB617EF0)
#define CLASS_1_CDF807379B3F27B3__CTOR_OFFSET UNITYSDK_OFFSET(0xB616D60)

inline static constexpr unsigned int Class_1_CDF807379B3F27B3_TypeDefinitionIndex = 56055;

class Class_1_CDF807379B3F27B3 : public ::System::Object
{
public:
	static ::RPG::GameCore::PropertyAdsorptionConfig** StaticGet_FOKOFEOEENL()
	{
		return (::RPG::GameCore::PropertyAdsorptionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDF807379B3F27B3_TypeDefinitionIndex)->GetStaticField(0x54B90);
	}
	::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* _OnElationPointChanged_k__BackingField; // 0x10
	::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
	::RPG::GameCore::FixPoint PEBAJGKDIMJ; // 0x20
	::RPG::GameCore::FixPoint ELABCBPAHPC; // 0x28
	::RPG::GameCore::FixPoint PIJJEAOLBDM; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1D8E701FE5A66C33(::Class_1_5ED9ADE4BC6ABA06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5ED9ADE4BC6ABA06*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_1D8E701FE5A66C33_OFFSET))(this, a1);
	}

	::System::Void Method_1_57C3183587B3E227(::Class_1_5ED9ADE4BC6ABA06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5ED9ADE4BC6ABA06*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_57C3183587B3E227_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D65FE80E3B7388D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_0D65FE80E3B7388D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A9A42AB5F2C9E26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_4A9A42AB5F2C9E26_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_99D925E72C789690(::Enum_3_0A3761FE34514D6C_4 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_4))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_99D925E72C789690_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_5C9F7DCBA3264D1D(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_5C9F7DCBA3264D1D_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_1_59099BD00711C1F0(::RPG::GameCore::FixPoint a1, ::Class_1_5ED9ADE4BC6ABA06* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_5ED9ADE4BC6ABA06*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_59099BD00711C1F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CC0755DCCEF577F(::RPG::GameCore::FixPoint a1, ::Class_1_5ED9ADE4BC6ABA06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_5ED9ADE4BC6ABA06*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_4CC0755DCCEF577F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE241D3CB7B401EC(::RPG::GameCore::FixPoint a1, ::Class_1_5ED9ADE4BC6ABA06* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_5ED9ADE4BC6ABA06*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_CE241D3CB7B401EC_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* get_OnElationPointChanged()
	{
		return ((::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_GET_ONELATIONPOINTCHANGED_OFFSET))(this);
	}

	::System::Void set_OnElationPointChanged(::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_SET_ONELATIONPOINTCHANGED_OFFSET))(this, a1);
	}
};
