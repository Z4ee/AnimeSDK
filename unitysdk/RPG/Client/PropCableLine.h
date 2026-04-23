#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_004034A1FAAF468A;
class Class_1_DCACF1A724007C54;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROPCABLELINE_INIT_OFFSET UNITYSDK_OFFSET(0xAF1B2B0)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0xAF1B880)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xAF1C3B0)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_4E80C32BD992E8BD_OFFSET UNITYSDK_OFFSET(0xAF1C830)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xAF1C920)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_F1372164966A6952_OFFSET UNITYSDK_OFFSET(0xAF1C9C0)
#define RPG_CLIENT_PROPCABLELINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAF1C8D0)
#define RPG_CLIENT_PROPCABLELINE_ONSPAWNCABLELINE_OFFSET UNITYSDK_OFFSET(0xAF1B950)
#define RPG_CLIENT_PROPCABLELINE_REGISTERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xAF1BD50)
#define RPG_CLIENT_PROPCABLELINE_SETGROUPCONTEXT_OFFSET UNITYSDK_OFFSET(0xAF1BBE0)
#define RPG_CLIENT_PROPCABLELINE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xAF1B4C0)
#define RPG_CLIENT_PROPCABLELINE_UNINIT_OFFSET UNITYSDK_OFFSET(0xAF1B640)
#define RPG_CLIENT_PROPCABLELINE_UPDATE_OFFSET UNITYSDK_OFFSET(0xAF1BE30)
#define RPG_CLIENT_PROPCABLELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF1CA90)
#define RPG_CLIENT_PROPCABLELINE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF1CA70)

namespace RPG::Client
{
	inline static constexpr unsigned int PropCableLine_TypeDefinitionIndex = 63409;

	class PropCableLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_25()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0xCA90);
		}
		static ::System::String** StaticGet_Field_5_26()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0xCA98);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x4D60);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x4D64);
		}
		::BansheeGz::BGSpline::Components::BGCcMath* Field_5_2; // 0x18
		::System::String* Field_5_3; // 0x20
		::Class_1_004034A1FAAF468A* Field_5_4; // 0x28
		::Class_1_004034A1FAAF468A* Field_5_5; // 0x30
		::Class_1_DCACF1A724007C54* Field_5_6; // 0x38
		::System::String* Field_5_7; // 0x40
		::System::Boolean Field_5_8; // 0x48
		::System::Boolean Field_5_9; // 0x49
		::System::Boolean Field_5_10; // 0x4A
		::System::Boolean Field_5_11; // 0x4B
		::System::Single Field_5_12; // 0x4C
		::System::Single Field_5_13; // 0x50
		::System::Single Field_5_14; // 0x54
		::UnityEngine::Vector3 Field_5_15; // 0x58
		::System::String* Field_5_16; // 0x68
		::System::String* Field_5_17; // 0x70
		::RPG::GameCore::GameEntity* _OwnerProp; // 0x78
		::RPG::GameCore::GameEntity* StartProp; // 0x80
		::RPG::GameCore::GameEntity* EndProp; // 0x88
		::System::Single OverriderMoveSpeed; // 0x90
		::System::UInt32 Field_5_22; // 0x94
		::RPG::GameCore::GameEntity* Field_5_23; // 0x98
		::RPG::GameCore::EventManager* Field_5_24; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE__CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_UNINIT_OFFSET))(this);
		}

		::System::Void OnSpawnCableline(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_ONSPAWNCABLELINE_OFFSET))(this, a1);
		}

		::System::Void SetGroupContext(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_SETGROUPCONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterGroupEvent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_REGISTERGROUPEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_5_3CAD92CFB876DBF6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_3CAD92CFB876DBF6_OFFSET))(this);
		}

		::System::Void Method_5_4E80C32BD992E8BD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_4E80C32BD992E8BD_OFFSET))(this, a1);
		}

		::System::Void Method_5_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_5_F1372164966A6952(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_F1372164966A6952_OFFSET))(this, a1);
		}
	};
}
