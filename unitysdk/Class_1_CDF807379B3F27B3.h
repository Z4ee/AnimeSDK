#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointReadType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_7F9C42CEDE72E74B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_CDF807379B3F27B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF495C0)
#define CLASS_1_CDF807379B3F27B3_GET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AF4A6D0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_0D65FE80E3B7388D_OFFSET UNITYSDK_OFFSET(0x1AF4A130)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_1D8E701FE5A66C33_OFFSET UNITYSDK_OFFSET(0x1AF49610)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_4A9A42AB5F2C9E26_OFFSET UNITYSDK_OFFSET(0x1AF4A400)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_4CC0755DCCEF577F_OFFSET UNITYSDK_OFFSET(0x1AF49780)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_57C3183587B3E227_OFFSET UNITYSDK_OFFSET(0x1AF49BB0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_59099BD00711C1F0_OFFSET UNITYSDK_OFFSET(0x1AF496E0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_5C9F7DCBA3264D1D_OFFSET UNITYSDK_OFFSET(0x1AF4A2F0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x1AF4A6C0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x1AF4A6B0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x1AF4A5F0)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1AF4A650)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_CE241D3CB7B401EC_OFFSET UNITYSDK_OFFSET(0x1AF49C80)
#define CLASS_1_CDF807379B3F27B3_METHOD_1_DD89DF62D3E22669_OFFSET UNITYSDK_OFFSET(0x1AF4A450)
#define CLASS_1_CDF807379B3F27B3_SET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AF4A6E0)
#define CLASS_1_CDF807379B3F27B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF4A6F0)
#define CLASS_1_CDF807379B3F27B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF49560)

inline static constexpr unsigned int Class_1_CDF807379B3F27B3_TypeDefinitionIndex = 56242;

class Class_1_CDF807379B3F27B3 : public ::System::Object
{
public:
	static ::RPG::GameCore::PropertyAdsorptionConfig** StaticGet_FOKOFEOEENL()
	{
		return (::RPG::GameCore::PropertyAdsorptionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CDF807379B3F27B3_TypeDefinitionIndex)->GetStaticField(0x66ED0);
	}
	::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* _OnElationPointChanged_k__BackingField; // 0x10
	::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
	::RPG::GameCore::FixPoint ELABCBPAHPC; // 0x20
	::RPG::GameCore::FixPoint PIJJEAOLBDM; // 0x28
	::RPG::GameCore::FixPoint PEBAJGKDIMJ; // 0x30

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

	::System::Void Method_1_1D8E701FE5A66C33(::Class_1_7F9C42CEDE72E74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_1D8E701FE5A66C33_OFFSET))(this, a1);
	}

	::System::Void Method_1_57C3183587B3E227(::Class_1_7F9C42CEDE72E74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_57C3183587B3E227_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D65FE80E3B7388D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_0D65FE80E3B7388D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A9A42AB5F2C9E26()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_4A9A42AB5F2C9E26_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_DD89DF62D3E22669(::RPG::GameCore::ElationPointReadType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ElationPointReadType))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_DD89DF62D3E22669_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_5C9F7DCBA3264D1D(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_5C9F7DCBA3264D1D_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_1_59099BD00711C1F0(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_59099BD00711C1F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4CC0755DCCEF577F(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_4CC0755DCCEF577F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CE241D3CB7B401EC(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_CDF807379B3F27B3_METHOD_1_CE241D3CB7B401EC_OFFSET))(this, a1, a2);
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
