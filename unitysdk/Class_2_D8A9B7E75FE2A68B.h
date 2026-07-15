#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/TrashSummonPeriodState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_42FA9CFF35EE5F45;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetTrashSummonHUDState; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_D8A9B7E75FE2A68B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17329610)
#define CLASS_2_D8A9B7E75FE2A68B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17329960)
#define CLASS_2_D8A9B7E75FE2A68B_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x17328B70)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_1_OFFSET UNITYSDK_OFFSET(0x17328CD0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_2_OFFSET UNITYSDK_OFFSET(0x17328E10)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_3_OFFSET UNITYSDK_OFFSET(0x17328F50)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_4_OFFSET UNITYSDK_OFFSET(0x17329090)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_5_OFFSET UNITYSDK_OFFSET(0x173291D0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_OFFSET UNITYSDK_OFFSET(0x17328B90)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x173278A0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x17328610)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_16217AC4866DF381_OFFSET UNITYSDK_OFFSET(0x17328700)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_2E6CE24AEEE07F97_OFFSET UNITYSDK_OFFSET(0x17328770)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17327AE0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17328450)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5DCEB987504D0925_OFFSET UNITYSDK_OFFSET(0x173281B0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_652C3128668FAE6D_OFFSET UNITYSDK_OFFSET(0x173282F0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x17327960)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x173279F0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_7A9FB9D364317F9C_OFFSET UNITYSDK_OFFSET(0x173284B0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x17327D20)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_2_OFFSET UNITYSDK_OFFSET(0x17327DE0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_3_OFFSET UNITYSDK_OFFSET(0x17327EA0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_4_OFFSET UNITYSDK_OFFSET(0x17327F60)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_5_OFFSET UNITYSDK_OFFSET(0x17328020)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17327C60)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x173275E0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x17327640)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x17328A20)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x173289E0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_D605EA254A6B8350_OFFSET UNITYSDK_OFFSET(0x173280E0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x17328B00)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x173293D0)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x17329490)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x17329550)
#define CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17329310)
#define CLASS_2_D8A9B7E75FE2A68B_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x17328B80)
#define CLASS_2_D8A9B7E75FE2A68B__CTOR_OFFSET UNITYSDK_OFFSET(0x17329C80)
#define CLASS_2_D8A9B7E75FE2A68B__ONBIND_OFFSET UNITYSDK_OFFSET(0x173272B0)
#define CLASS_2_D8A9B7E75FE2A68B___ONBINDHANDLERS_B__6_1_OFFSET UNITYSDK_OFFSET(0x17329CE0)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B_TypeDefinitionIndex = 69078;

class Class_2_D8A9B7E75FE2A68B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x60
	::RPG::Client::LongPressEvent* Field_2_10; // 0x68
	::Il2CppArray<::Class_2_42FA9CFF35EE5F45*>* Field_2_11; // 0x70
	::UnityEngine::Animator* Field_2_12; // 0x78
	::System::Int32 Field_2_13; // 0x80
	::System::Int32 Field_2_14; // 0x84
	::System::Int32 Field_2_15; // 0x88
	::System::Boolean Field_2_16; // 0x8C
	::System::Boolean Field_2_17; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_2_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_3_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_4_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_89D1F247B9D324EE_5_OFFSET))(this);
	}

	::System::Void Method_2_D605EA254A6B8350(::RPG::GameCore::SetTrashSummonHUDState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_D605EA254A6B8350_OFFSET))(this, a1);
	}

	::System::Void Method_2_5DCEB987504D0925(::RPG::GameCore::TrashSummonPeriodState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrashSummonPeriodState))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_5DCEB987504D0925_OFFSET))(this, a1);
	}

	::System::Void Method_2_652C3128668FAE6D(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_652C3128668FAE6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A9FB9D364317F9C(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_7A9FB9D364317F9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_16217AC4866DF381()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_16217AC4866DF381_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E6CE24AEEE07F97(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_2E6CE24AEEE07F97_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_GET_ENTITY_OFFSET))(this);
	}

	::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_SET_ENTITY_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_01509228E3A9577B_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_01509228E3A9577B_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___ONBINDHANDLERS_B__6_1_OFFSET))(this);
	}
};
