#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/QingQueEnergyBarIconType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_73D810C51FF41945;
namespace RPG::Client { class QingQueBattleEnergyBarNotify; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B6D63F36563E760A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12379100)
#define CLASS_2_B6D63F36563E760A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12379240)
#define CLASS_2_B6D63F36563E760A_METHOD_2_044EBFB1DFBC9292_OFFSET UNITYSDK_OFFSET(0x12378BB0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_17C034DA38E9B8A2_OFFSET UNITYSDK_OFFSET(0x12378800)
#define CLASS_2_B6D63F36563E760A_METHOD_2_1B3D8773D1869301_1_OFFSET UNITYSDK_OFFSET(0x12378E10)
#define CLASS_2_B6D63F36563E760A_METHOD_2_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x123782C0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x12378320)
#define CLASS_2_B6D63F36563E760A_METHOD_2_3AA20A0DA6990FBE_OFFSET UNITYSDK_OFFSET(0x123785D0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12378440)
#define CLASS_2_B6D63F36563E760A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x123796E0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x12378A10)
#define CLASS_2_B6D63F36563E760A_METHOD_2_6A5C5217AEC4B770_OFFSET UNITYSDK_OFFSET(0x12378AE0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_87843232729398E6_OFFSET UNITYSDK_OFFSET(0x12378D20)
#define CLASS_2_B6D63F36563E760A_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x12378250)
#define CLASS_2_B6D63F36563E760A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x12378F50)
#define CLASS_2_B6D63F36563E760A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12378C90)
#define CLASS_2_B6D63F36563E760A_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x12379670)
#define CLASS_2_B6D63F36563E760A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12378940)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x12379010)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x12378E60)
#define CLASS_2_B6D63F36563E760A_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x123781A0)
#define CLASS_2_B6D63F36563E760A_ONRETURN_OFFSET UNITYSDK_OFFSET(0x12378200)
#define CLASS_2_B6D63F36563E760A__CTOR_OFFSET UNITYSDK_OFFSET(0x12379360)
#define CLASS_2_B6D63F36563E760A__ONBIND_OFFSET UNITYSDK_OFFSET(0x12377E60)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12379740)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x123797A0)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12379610)

inline static constexpr unsigned int Class_2_B6D63F36563E760A_TypeDefinitionIndex = 66192;

class Class_2_B6D63F36563E760A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x4; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::System::Collections::Generic::List_1<::Class_2_73D810C51FF41945*>* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* Field_2_14; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::Client::QingQueEnergyBarIconType, ::System::String*>* Field_2_9; // 0x80
	::RPG::Client::RPGAnimationEvent* Field_2_4; // 0x88
	::UnityEngine::Transform* Field_2_5; // 0x90
	::UnityEngine::Transform* Field_2_6; // 0x98
	::UnityEngine::ParticleSystem* Field_2_7; // 0xA0
	::RPG::GameCore::GameEntity* Field_2_13; // 0xA8
	::UnityEngine::ParticleSystem* Field_2_8; // 0xB0
	::System::Boolean Field_2_15; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B3D8773D1869301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_1B3D8773D1869301_OFFSET))(this);
	}

	::System::Void Method_2_17C034DA38E9B8A2(::RPG::Client::QingQueBattleEnergyBarNotify* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::QingQueBattleEnergyBarNotify*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_17C034DA38E9B8A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A5C5217AEC4B770(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_6A5C5217AEC4B770_OFFSET))(this, a1);
	}

	::System::Void Method_2_044EBFB1DFBC9292(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_044EBFB1DFBC9292_OFFSET))(this, a1);
	}

	::System::Void Method_2_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_3AA20A0DA6990FBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_3AA20A0DA6990FBE_OFFSET))(this);
	}

	::System::String* Method_2_87843232729398E6(::RPG::Client::QingQueEnergyBarIconType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::QingQueEnergyBarIconType))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_87843232729398E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Method_2_1B3D8773D1869301_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_1B3D8773D1869301_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
