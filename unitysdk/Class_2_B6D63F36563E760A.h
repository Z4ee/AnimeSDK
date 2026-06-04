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

#define CLASS_2_B6D63F36563E760A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7E54C0)
#define CLASS_2_B6D63F36563E760A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7E5640)
#define CLASS_2_B6D63F36563E760A_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xD7E4710)
#define CLASS_2_B6D63F36563E760A_METHOD_2_044EBFB1DFBC9292_OFFSET UNITYSDK_OFFSET(0xD7E5000)
#define CLASS_2_B6D63F36563E760A_METHOD_2_17C034DA38E9B8A2_OFFSET UNITYSDK_OFFSET(0xD7E4C50)
#define CLASS_2_B6D63F36563E760A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7E5B10)
#define CLASS_2_B6D63F36563E760A_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xD7E5AB0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_6A5C5217AEC4B770_OFFSET UNITYSDK_OFFSET(0xD7E4F30)
#define CLASS_2_B6D63F36563E760A_METHOD_2_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0xD7E49E0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_87843232729398E6_OFFSET UNITYSDK_OFFSET(0xD7E5170)
#define CLASS_2_B6D63F36563E760A_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xD7E4650)
#define CLASS_2_B6D63F36563E760A_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD7E5360)
#define CLASS_2_B6D63F36563E760A_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD7E50E0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xD7E4E60)
#define CLASS_2_B6D63F36563E760A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD7E4D90)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0xD7E46B0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xD7E4840)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xD7E5400)
#define CLASS_2_B6D63F36563E760A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD7E52A0)
#define CLASS_2_B6D63F36563E760A_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0xD7E5250)
#define CLASS_2_B6D63F36563E760A_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xD7E45A0)
#define CLASS_2_B6D63F36563E760A_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD7E4600)
#define CLASS_2_B6D63F36563E760A__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E57A0)
#define CLASS_2_B6D63F36563E760A__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7E3F00)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD7E5B70)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD7E5BD0)
#define CLASS_2_B6D63F36563E760A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7E5A50)

inline static constexpr unsigned int Class_2_B6D63F36563E760A_TypeDefinitionIndex = 67129;

class Class_2_B6D63F36563E760A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_0 = 0x4; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::RPG::Client::RPGAnimationEvent* Field_2_4; // 0x60
	::RPG::GameCore::GameEntity* Field_2_5; // 0x68
	::UnityEngine::ParticleSystem* Field_2_6; // 0x70
	::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* Field_2_7; // 0x78
	::UnityEngine::Transform* Field_2_8; // 0x80
	::UnityEngine::Transform* Field_2_9; // 0x88
	::UnityEngine::Animation* Field_2_10; // 0x90
	::UnityEngine::ParticleSystem* Field_2_11; // 0x98
	::System::Collections::Generic::List_1<::Class_2_73D810C51FF41945*>* Field_2_12; // 0xA0
	::UnityEngine::Transform* Field_2_13; // 0xA8
	::System::Collections::Generic::Dictionary_2<::RPG::Client::QingQueEnergyBarIconType, ::System::String*>* Field_2_14; // 0xB0
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

	::System::Void Method_2_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_F17676F976AEF1D8_OFFSET))(this);
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

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_7B32E6463125895B_OFFSET))(this);
	}

	::System::String* Method_2_87843232729398E6(::RPG::Client::QingQueEnergyBarIconType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::QingQueEnergyBarIconType))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_87843232729398E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_FD647A48096EB173_OFFSET))(this);
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

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_B6D63F36563E760A_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
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
