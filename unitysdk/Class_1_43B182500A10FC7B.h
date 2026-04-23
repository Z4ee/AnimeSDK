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

#define CLASS_1_43B182500A10FC7B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FC63A0)
#define CLASS_1_43B182500A10FC7B_GET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x8FC7250)
#define CLASS_1_43B182500A10FC7B_METHOD_1_550E8CE56610A57E_OFFSET UNITYSDK_OFFSET(0x8FC70E0)
#define CLASS_1_43B182500A10FC7B_METHOD_1_6C5FAA36997AA199_OFFSET UNITYSDK_OFFSET(0x8FC63F0)
#define CLASS_1_43B182500A10FC7B_METHOD_1_6D9294A7CA2A89A4_OFFSET UNITYSDK_OFFSET(0x8FC6B10)
#define CLASS_1_43B182500A10FC7B_METHOD_1_7196E13B3F6BA550_OFFSET UNITYSDK_OFFSET(0x8FC69F0)
#define CLASS_1_43B182500A10FC7B_METHOD_1_7CB0DE471D585B01_OFFSET UNITYSDK_OFFSET(0x8FC6F10)
#define CLASS_1_43B182500A10FC7B_METHOD_1_88316E5E841A5614_OFFSET UNITYSDK_OFFSET(0x8FC7060)
#define CLASS_1_43B182500A10FC7B_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x8FC7240)
#define CLASS_1_43B182500A10FC7B_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x8FC7230)
#define CLASS_1_43B182500A10FC7B_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x8FC71B0)
#define CLASS_1_43B182500A10FC7B_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8FC71F0)
#define CLASS_1_43B182500A10FC7B_METHOD_1_C0FF189B2A1BA5C3_OFFSET UNITYSDK_OFFSET(0x8FC6510)
#define CLASS_1_43B182500A10FC7B_METHOD_1_E67CC873F543B1EC_OFFSET UNITYSDK_OFFSET(0x8FC7130)
#define CLASS_1_43B182500A10FC7B_METHOD_1_FDF6FCA859280CC1_OFFSET UNITYSDK_OFFSET(0x8FC65E0)
#define CLASS_1_43B182500A10FC7B_SET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x8FC7260)
#define CLASS_1_43B182500A10FC7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FC7270)
#define CLASS_1_43B182500A10FC7B__CTOR_OFFSET UNITYSDK_OFFSET(0x8FC6360)

inline static constexpr unsigned int Class_1_43B182500A10FC7B_TypeDefinitionIndex = 51651;

class Class_1_43B182500A10FC7B : public ::System::Object
{
public:
	static ::RPG::GameCore::PropertyAdsorptionConfig** StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::PropertyAdsorptionConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B182500A10FC7B_TypeDefinitionIndex)->GetStaticField(0x64360);
	}
	::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* _OnElationPointChanged_k__BackingField; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_2; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6C5FAA36997AA199(::Class_1_7F9C42CEDE72E74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_6C5FAA36997AA199_OFFSET))(this, a1);
	}

	::System::Void Method_1_7196E13B3F6BA550(::Class_1_7F9C42CEDE72E74B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_7196E13B3F6BA550_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CB0DE471D585B01(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_7CB0DE471D585B01_OFFSET))(this, a1);
	}

	::System::Void Method_1_550E8CE56610A57E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_550E8CE56610A57E_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E67CC873F543B1EC(::RPG::GameCore::ElationPointReadType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ElationPointReadType))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_E67CC873F543B1EC_OFFSET))(this, a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_88316E5E841A5614(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_88316E5E841A5614_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint Method_1_C0FF189B2A1BA5C3(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_C0FF189B2A1BA5C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FDF6FCA859280CC1(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_FDF6FCA859280CC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D9294A7CA2A89A4(::RPG::GameCore::FixPoint a1, ::Class_1_7F9C42CEDE72E74B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_1_7F9C42CEDE72E74B*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_6D9294A7CA2A89A4_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* get_OnElationPointChanged()
	{
		return ((::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_GET_ONELATIONPOINTCHANGED_OFFSET))(this);
	}

	::System::Void set_OnElationPointChanged(::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_43B182500A10FC7B_SET_ONELATIONPOINTCHANGED_OFFSET))(this, value);
	}
};
