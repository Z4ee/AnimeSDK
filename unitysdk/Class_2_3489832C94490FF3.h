#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_813FDB0DF0F3263D;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_3489832C94490FF3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17C956C0)
#define CLASS_2_3489832C94490FF3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17C95880)
#define CLASS_2_3489832C94490FF3_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x17C94E90)
#define CLASS_2_3489832C94490FF3_METHOD_2_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x17C947F0)
#define CLASS_2_3489832C94490FF3_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17C94930)
#define CLASS_2_3489832C94490FF3_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0x17C949C0)
#define CLASS_2_3489832C94490FF3_METHOD_2_6019D70B15213230_OFFSET UNITYSDK_OFFSET(0x17C95190)
#define CLASS_2_3489832C94490FF3_METHOD_2_6A5C5217AEC4B770_OFFSET UNITYSDK_OFFSET(0x17C95220)
#define CLASS_2_3489832C94490FF3_METHOD_2_6CB74AF8628673F7_OFFSET UNITYSDK_OFFSET(0x17C94B30)
#define CLASS_2_3489832C94490FF3_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x17C94F70)
#define CLASS_2_3489832C94490FF3_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x17C94600)
#define CLASS_2_3489832C94490FF3_METHOD_2_A401D30DEFAC53C9_OFFSET UNITYSDK_OFFSET(0x17C94E30)
#define CLASS_2_3489832C94490FF3_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x17C95580)
#define CLASS_2_3489832C94490FF3_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x17C950B0)
#define CLASS_2_3489832C94490FF3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17C94980)
#define CLASS_2_3489832C94490FF3_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x17C94700)
#define CLASS_2_3489832C94490FF3_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x17C94DB0)
#define CLASS_2_3489832C94490FF3_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x17C952D0)
#define CLASS_2_3489832C94490FF3_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x17C94EE0)
#define CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17C95400)
#define CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17C954C0)
#define CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17C95340)
#define CLASS_2_3489832C94490FF3_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x17C94840)
#define CLASS_2_3489832C94490FF3_METHOD_2_FF50A28543309FF7_OFFSET UNITYSDK_OFFSET(0x17C95060)
#define CLASS_2_3489832C94490FF3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17C94660)
#define CLASS_2_3489832C94490FF3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17C94770)
#define CLASS_2_3489832C94490FF3__CTOR_OFFSET UNITYSDK_OFFSET(0x17C95A20)
#define CLASS_2_3489832C94490FF3__ONBIND_OFFSET UNITYSDK_OFFSET(0x17C943A0)

inline static constexpr unsigned int Class_2_3489832C94490FF3_TypeDefinitionIndex = 71361;

class Class_2_3489832C94490FF3 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* PELJGAPBLLI; // 0x0
	// static const ::System::String* FOJHBNDBANG; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::Il2CppArray<::Class_2_813FDB0DF0F3263D*>* MLJDAEMEBFJ; // 0x70
	::System::Int32 EJNMGLJJEOO; // 0x78
	::System::Boolean EPCCCGMNGLO; // 0x7C
	::System::Int32 CIDELCPIDHH; // 0x80
	::System::Int32 BFLNNOEKIGE; // 0x84
	::RPG::GameCore::EnergyBarState LODNGAGNLCB; // 0x88
	::System::Int32 JBCBNGCPAKP; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_6CB74AF8628673F7(::RPG::GameCore::AvatarEnergyBarState* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_6CB74AF8628673F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF50A28543309FF7(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_FF50A28543309FF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_6019D70B15213230(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_6019D70B15213230_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A5C5217AEC4B770(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_6A5C5217AEC4B770_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A401D30DEFAC53C9(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_A401D30DEFAC53C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3489832C94490FF3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
