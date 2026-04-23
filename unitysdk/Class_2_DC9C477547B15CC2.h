#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_DC9C477547B15CC2_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_670DA05CE98605A7;
class Class_2_A2DF1DC9B9C38AD0;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_DC9C477547B15CC2_METHOD_2_164DA41B84B6F6E5_OFFSET UNITYSDK_OFFSET(0x95DEF00)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x95DF6B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x95DF0B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_3CFC15F4A20EC116_OFFSET UNITYSDK_OFFSET(0x95DE2D0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_44DA14892550A4E3_OFFSET UNITYSDK_OFFSET(0x95DE590)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_53712521C2C1703A_OFFSET UNITYSDK_OFFSET(0x95DE860)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x95DF920)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x95DED50)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_717E5AEDA9FD8F84_OFFSET UNITYSDK_OFFSET(0x95DF4D0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_8564CF04F3A7AFB3_OFFSET UNITYSDK_OFFSET(0x95DDD90)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x95DF170)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x95DEB10)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x95DE3F0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x95DE1E0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x95DF1E0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C5D09897CC7133B0_OFFSET UNITYSDK_OFFSET(0x95DE390)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x95DE500)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x95DF260)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x95DF8B0)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x95DF980)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x95DE610)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x95DE250)
#define CLASS_2_DC9C477547B15CC2_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x95DF430)
#define CLASS_2_DC9C477547B15CC2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x95DEC30)
#define CLASS_2_DC9C477547B15CC2_ONRETURN_OFFSET UNITYSDK_OFFSET(0x95DEE50)
#define CLASS_2_DC9C477547B15CC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x95DF810)
#define CLASS_2_DC9C477547B15CC2__CTOR_OFFSET UNITYSDK_OFFSET(0x95DF7C0)
#define CLASS_2_DC9C477547B15CC2__ONBIND_OFFSET UNITYSDK_OFFSET(0x95DDBC0)
#define CLASS_2_DC9C477547B15CC2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x95DF850)

inline static constexpr unsigned int Class_2_DC9C477547B15CC2_TypeDefinitionIndex = 66005;

class Class_2_DC9C477547B15CC2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_DC9C477547B15CC2_TypeDefinitionIndex)->GetStaticField(0x10530);
	}
	// static const ::System::String* Field_2_21; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_3; // 0x68
	::UnityEngine::UI::Image* Field_2_0; // 0x70
	::UnityEngine::Animator* Field_2_8; // 0x78
	::UnityEngine::ParticleSystem* Field_2_5; // 0x80
	::RPG::Client::LocalizedText* Field_2_4; // 0x88
	::Class_2_A2DF1DC9B9C38AD0* Field_2_10; // 0x90
	::Class_2_670DA05CE98605A7* Field_2_9; // 0x98
	::RPG::GameCore::GameEntity* Field_2_11; // 0xA0
	::UnityEngine::UI::Image* Field_2_1; // 0xA8
	::UnityEngine::Transform* Field_2_7; // 0xB0
	::UnityEngine::ParticleSystem* Field_2_6; // 0xB8
	::System::Int32 Field_2_14; // 0xC0
	::System::Int32 Field_2_13; // 0xC4
	::System::Int32 Field_2_12; // 0xC8
	::System::Boolean Field_2_18; // 0xCC
	::System::Boolean Field_2_19; // 0xCD
	::System::Boolean Field_2_20; // 0xCE
	::Class_2_DC9C477547B15CC2_CounterType Field_2_15; // 0xD0
	::RPG::GameCore::EnergyBarState Field_2_16; // 0xD4

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

	::System::Void Method_2_8564CF04F3A7AFB3(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_8564CF04F3A7AFB3_OFFSET))(this, a1);
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

	::System::Void Method_2_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_5835DC16FC46989B_OFFSET))(this);
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

	::System::Void Method_2_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C782C60E11964C7F_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_335AB672C838D49D_OFFSET))(this);
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

	::System::Void Method_2_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Void Method_2_44DA14892550A4E3(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_44DA14892550A4E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DC9C477547B15CC2_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
