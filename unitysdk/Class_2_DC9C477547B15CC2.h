#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_DC9C477547B15CC2_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_670DA05CE98605A7;
class Class_2_76CE3186892724E8;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DC9C477547B15CC2_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0xAF6E3E0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xAF6DB30)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0xAF6E590)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_3CFC15F4A20EC116_OFFSET UNITYSDK_OFFSET(0xAF6D770)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_4E23EAF81911C9F7_OFFSET UNITYSDK_OFFSET(0xAF6DAB0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0xAF6EB80)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_53712521C2C1703A_OFFSET UNITYSDK_OFFSET(0xAF6DD70)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAF6EDE0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAF6ED80)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_717E5AEDA9FD8F84_OFFSET UNITYSDK_OFFSET(0xAF6E9A0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xAF6D9B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xAF6E640)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xAF6E730)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xAF6E020)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xAF6D890)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xAF6E240)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0xAF6D680)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xAF6E6B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0xAF6D3D0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C5D09897CC7133B0_OFFSET UNITYSDK_OFFSET(0xAF6D830)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xAF6EE40)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0xAF6D6F0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0xAF6E900)
#define CLASS_2_DC9C477547B15CC2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xAF6E130)
#define CLASS_2_DC9C477547B15CC2_ONRETURN_OFFSET UNITYSDK_OFFSET(0xAF6E330)
#define CLASS_2_DC9C477547B15CC2__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF6ECE0)
#define CLASS_2_DC9C477547B15CC2__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6ECA0)
#define CLASS_2_DC9C477547B15CC2__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF6D200)
#define CLASS_2_DC9C477547B15CC2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAF6ED20)

inline static constexpr unsigned int Class_2_DC9C477547B15CC2_TypeDefinitionIndex = 66938;

class Class_2_DC9C477547B15CC2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DC9C477547B15CC2_TypeDefinitionIndex)->GetStaticField(0xBD80);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::UnityEngine::Animator* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::UnityEngine::ParticleSystem* Field_2_5; // 0x78
	::UnityEngine::ParticleSystem* Field_2_6; // 0x80
	::Class_2_670DA05CE98605A7* Field_2_7; // 0x88
	::Class_2_76CE3186892724E8* Field_2_8; // 0x90
	::RPG::GameCore::GameEntity* Field_2_9; // 0x98
	::UnityEngine::UI::Image* Field_2_10; // 0xA0
	::RPG::Client::LocalizedText* Field_2_11; // 0xA8
	::UnityEngine::UI::Image* Field_2_12; // 0xB0
	::UnityEngine::UI::Image* Field_2_13; // 0xB8
	::System::Int32 Field_2_14; // 0xC0
	::RPG::GameCore::EnergyBarState Field_2_15; // 0xC4
	::System::Boolean Field_2_16; // 0xC8
	::System::Boolean Field_2_17; // 0xC9
	::System::Boolean Field_2_18; // 0xCA
	::Class_2_DC9C477547B15CC2_CounterType Field_2_19; // 0xCC
	::System::Int32 Field_2_20; // 0xD0
	::System::Int32 Field_2_21; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_164DA41B84B6F6E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_164DA41B84B6F6E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_717E5AEDA9FD8F84(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_717E5AEDA9FD8F84_OFFSET))(this, a1);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_53712521C2C1703A(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_53712521C2C1703A_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_C5D09897CC7133B0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C5D09897CC7133B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CFC15F4A20EC116(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_3CFC15F4A20EC116_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_4E23EAF81911C9F7(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_4E23EAF81911C9F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
