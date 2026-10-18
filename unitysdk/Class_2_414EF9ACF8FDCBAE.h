#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_63584EDDDCD0EE84;
namespace RPG::Client { class BattleMonsterSingleBlockData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_414EF9ACF8FDCBAE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCCFB90)
#define CLASS_2_414EF9ACF8FDCBAE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDCCFCB0)
#define CLASS_2_414EF9ACF8FDCBAE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xDCCF890)
#define CLASS_2_414EF9ACF8FDCBAE_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xDCCF900)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0xDCCF500)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_160CA2767B0C334B_1_OFFSET UNITYSDK_OFFSET(0xDCCF6D0)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_160CA2767B0C334B_OFFSET UNITYSDK_OFFSET(0xDCCF660)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xDCCF740)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xDCCF550)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_A1C74FADFFCE9232_OFFSET UNITYSDK_OFFSET(0xDCCF390)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xDCCF250)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_E39CBF2FEF0477CC_1_OFFSET UNITYSDK_OFFSET(0xDCCFA80)
#define CLASS_2_414EF9ACF8FDCBAE_METHOD_2_E39CBF2FEF0477CC_OFFSET UNITYSDK_OFFSET(0xDCCF970)
#define CLASS_2_414EF9ACF8FDCBAE_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xDCCF2D0)
#define CLASS_2_414EF9ACF8FDCBAE_ONRETURN_OFFSET UNITYSDK_OFFSET(0xDCCF430)
#define CLASS_2_414EF9ACF8FDCBAE__CTOR_OFFSET UNITYSDK_OFFSET(0xDCCFDA0)
#define CLASS_2_414EF9ACF8FDCBAE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xDCCF600)
#define CLASS_2_414EF9ACF8FDCBAE___ENSURESINGLEBLOCKPANEL_B__9_0_OFFSET UNITYSDK_OFFSET(0xDCCFDD0)

inline static constexpr unsigned int Class_2_414EF9ACF8FDCBAE_TypeDefinitionIndex = 71766;

class Class_2_414EF9ACF8FDCBAE : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::BattleMonsterSingleBlockData* APPIHABBCGK; // 0x60
	::Class_2_63584EDDDCD0EE84* EIHIEJAOHPC; // 0x68
	::System::Action* HACFEIKFPOA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A1C74FADFFCE9232(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_A1C74FADFFCE9232_OFFSET))(this, a1);
	}

	::System::Void Method_2_160CA2767B0C334B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_160CA2767B0C334B_OFFSET))(this, a1);
	}

	::System::Void Method_2_160CA2767B0C334B_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_160CA2767B0C334B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D3D37F2BAE9FB65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_5D3D37F2BAE9FB65_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_E39CBF2FEF0477CC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_E39CBF2FEF0477CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E39CBF2FEF0477CC_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_METHOD_2_E39CBF2FEF0477CC_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __EnsureSingleBlockPanel_b__9_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414EF9ACF8FDCBAE___ENSURESINGLEBLOCKPANEL_B__9_0_OFFSET))(this);
	}
};
