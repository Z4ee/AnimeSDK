#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_61863E8E46098B07_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEDA7750)
#define CLASS_2_61863E8E46098B07_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEDA78D0)
#define CLASS_2_61863E8E46098B07_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xEDA6920)
#define CLASS_2_61863E8E46098B07_METHOD_2_17C034DA38E9B8A2_OFFSET UNITYSDK_OFFSET(0xEDA6E60)
#define CLASS_2_61863E8E46098B07_METHOD_2_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0xEDA6BF0)
#define CLASS_2_61863E8E46098B07_METHOD_2_87843232729398E6_OFFSET UNITYSDK_OFFSET(0xEDA7380)
#define CLASS_2_61863E8E46098B07_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xEDA6860)
#define CLASS_2_61863E8E46098B07_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xEDA72F0)
#define CLASS_2_61863E8E46098B07_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xEDA7070)
#define CLASS_2_61863E8E46098B07_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0xEDA7660)
#define CLASS_2_61863E8E46098B07_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xEDA74B0)
#define CLASS_2_61863E8E46098B07_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xEDA6FA0)
#define CLASS_2_61863E8E46098B07_METHOD_2_E3476CD41ED7268E_OFFSET UNITYSDK_OFFSET(0xEDA7210)
#define CLASS_2_61863E8E46098B07_METHOD_2_E4782AED5DFF01B2_OFFSET UNITYSDK_OFFSET(0xEDA7140)
#define CLASS_2_61863E8E46098B07_METHOD_2_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0xEDA68C0)
#define CLASS_2_61863E8E46098B07_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xEDA6A50)
#define CLASS_2_61863E8E46098B07_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xEDA75A0)
#define CLASS_2_61863E8E46098B07_METHOD_2_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0xEDA7460)
#define CLASS_2_61863E8E46098B07_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xEDA67B0)
#define CLASS_2_61863E8E46098B07_ONRETURN_OFFSET UNITYSDK_OFFSET(0xEDA6810)
#define CLASS_2_61863E8E46098B07__CTOR_OFFSET UNITYSDK_OFFSET(0xEDA7A30)
#define CLASS_2_61863E8E46098B07__ONBIND_OFFSET UNITYSDK_OFFSET(0xEDA6110)

inline static constexpr unsigned int Class_2_61863E8E46098B07_TypeDefinitionIndex = 71771;

class Class_2_61863E8E46098B07 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 CFPLMPKMIIP = 0x4; // 0x0
	// static const ::System::String* PFNJHKKKAHC; // 0x0
	// static const ::System::String* CJHAIOKMMDA; // 0x0
	// static const ::System::String* FMLEGIJHOFK; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::QingQueEnergyBarIconType>* BNBOBEDOJEM; // 0x60
	::UnityEngine::ParticleSystem* PPBLDHJBHNB; // 0x68
	::UnityEngine::ParticleSystem* HANMIMOFJPD; // 0x70
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
	::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::Client::QingQueEnergyBarIconType, ::System::String*>* CFCNONMPAIF; // 0x88
	::UnityEngine::Animation* IPNIGDLLJAA; // 0x90
	::UnityEngine::Transform* LIJBHGLDPFO; // 0x98
	::UnityEngine::Transform* JKOEDLIKIFD; // 0xA0
	::UnityEngine::Transform* CNINNFCJCKI; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_73D810C51FF41945*>* JCLFGCFNEGD; // 0xB0
	::System::Boolean GCMMCMDNACJ; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_F17676F976AEF1D8_OFFSET))(this);
	}

	::System::Void Method_2_17C034DA38E9B8A2(::RPG::Client::QingQueBattleEnergyBarNotify* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::QingQueBattleEnergyBarNotify*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_17C034DA38E9B8A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E4782AED5DFF01B2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_E4782AED5DFF01B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3476CD41ED7268E(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_E3476CD41ED7268E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_7B32E6463125895B_OFFSET))(this);
	}

	::System::String* Method_2_87843232729398E6(::RPG::Client::QingQueEnergyBarIconType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::QingQueEnergyBarIconType))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_87843232729398E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_2_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_FD647A48096EB173_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61863E8E46098B07_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
