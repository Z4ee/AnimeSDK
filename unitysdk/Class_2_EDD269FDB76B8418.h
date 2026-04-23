#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_382;
namespace RPG::Client { class DecalPuzzle; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_2_EDD269FDB76B8418_METHOD_2_073DA017342CF11F_OFFSET UNITYSDK_OFFSET(0x124CE430)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0x124CE650)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x124CD6A0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_2D8BC46D87F99EB7_OFFSET UNITYSDK_OFFSET(0x124CD820)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x124CF680)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_4852C8351A25DF62_OFFSET UNITYSDK_OFFSET(0x124CD3F0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_4C3CE94C467F80A4_OFFSET UNITYSDK_OFFSET(0x124CDDC0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_4DA4363467CE8EE6_OFFSET UNITYSDK_OFFSET(0x124CFE40)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_4E80C32BD992E8BD_OFFSET UNITYSDK_OFFSET(0x124CDFC0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x124CFBE0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_52510872F1FAAB30_OFFSET UNITYSDK_OFFSET(0x124CE060)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x124CE830)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_7CB38613B004D178_OFFSET UNITYSDK_OFFSET(0x124CFD30)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_8D88DC9B98751B4F_OFFSET UNITYSDK_OFFSET(0x124D01C0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_94802711B815450A_OFFSET UNITYSDK_OFFSET(0x124CD630)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_99CAD68ED754C42E_OFFSET UNITYSDK_OFFSET(0x124CE1F0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_B3578C323540C8F4_OFFSET UNITYSDK_OFFSET(0x124CF980)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x124CFCE0)
#define CLASS_2_EDD269FDB76B8418_METHOD_2_EA6C019B25856AE1_OFFSET UNITYSDK_OFFSET(0x124D0300)
#define CLASS_2_EDD269FDB76B8418__CTOR_OFFSET UNITYSDK_OFFSET(0x124D0450)

inline static constexpr unsigned int Class_2_EDD269FDB76B8418_TypeDefinitionIndex = 63320;

class Class_2_EDD269FDB76B8418 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::GameCore::GameEntity* Field_2_3; // 0x18
	::System::String* Field_2_10; // 0x20
	::UnityEngine::Animator* Field_2_7; // 0x28
	::UnityEngine::SphereCollider* Field_2_5; // 0x30
	::RPG::GameCore::EventManager* Field_2_9; // 0x38
	::UnityEngine::BoxCollider* Field_2_4; // 0x40
	::RPG::GameCore::PropComponent* Field_2_2; // 0x48
	::RPG::GameCore::GameEntity* Field_2_1; // 0x50
	::System::String* Field_2_11; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_6; // 0x60
	::System::Single Field_2_8; // 0x68
	::System::Boolean Field_2_0; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4852C8351A25DF62(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_4852C8351A25DF62_OFFSET))(this, a1);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_2D8BC46D87F99EB7(::RPG::Client::FreeDecal* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_2D8BC46D87F99EB7_OFFSET))(this, a1);
	}

	::System::Void Method_2_073DA017342CF11F(::RPG::Client::FreeDecal* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_073DA017342CF11F_OFFSET))(this, a1);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_B3578C323540C8F4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_B3578C323540C8F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E80C32BD992E8BD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_4E80C32BD992E8BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_52510872F1FAAB30(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_52510872F1FAAB30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_99CAD68ED754C42E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_99CAD68ED754C42E_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_4DA4363467CE8EE6(::UnityEngine::Rect a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_4DA4363467CE8EE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8D88DC9B98751B4F(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_8D88DC9B98751B4F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_4C3CE94C467F80A4(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_4C3CE94C467F80A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA6C019B25856AE1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_EA6C019B25856AE1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_7CB38613B004D178()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_7CB38613B004D178_OFFSET))(this);
	}

	::RPG::Client::DecalPuzzle* Method_2_94802711B815450A()
	{
		return ((::RPG::Client::DecalPuzzle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD269FDB76B8418_METHOD_2_94802711B815450A_OFFSET))(this);
	}
};
