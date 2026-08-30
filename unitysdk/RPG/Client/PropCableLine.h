#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_004034A1FAAF468A;
class Class_1_DCACF1A724007C54;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROPCABLELINE_INIT_OFFSET UNITYSDK_OFFSET(0x17B43F80)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x17B45060)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x17B45520)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x17B44570)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_D12268C88ECA46C9_OFFSET UNITYSDK_OFFSET(0x17B45430)
#define RPG_CLIENT_PROPCABLELINE_METHOD_5_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x17B455C0)
#define RPG_CLIENT_PROPCABLELINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17B454D0)
#define RPG_CLIENT_PROPCABLELINE_ONSPAWNCABLELINE_OFFSET UNITYSDK_OFFSET(0x17B44650)
#define RPG_CLIENT_PROPCABLELINE_REGISTERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x17B44A50)
#define RPG_CLIENT_PROPCABLELINE_SETGROUPCONTEXT_OFFSET UNITYSDK_OFFSET(0x17B448E0)
#define RPG_CLIENT_PROPCABLELINE_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B441A0)
#define RPG_CLIENT_PROPCABLELINE_UNINIT_OFFSET UNITYSDK_OFFSET(0x17B44310)
#define RPG_CLIENT_PROPCABLELINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B44B50)
#define RPG_CLIENT_PROPCABLELINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B45690)
#define RPG_CLIENT_PROPCABLELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B45670)

namespace RPG::Client
{
	inline static constexpr unsigned int PropCableLine_TypeDefinitionIndex = 68734;

	class PropCableLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_GCLBCKJHBOB()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x65560);
		}
		static ::System::String** StaticGet_GKGGKHMBJMG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x65568);
		}
		static ::System::Int32* StaticGet_AKBPNMEFGAO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x14FC0);
		}
		static ::System::Int32* StaticGet_LJAIFEPKOMG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PropCableLine_TypeDefinitionIndex)->GetStaticField(0x14FC4);
		}
		::BansheeGz::BGSpline::Components::BGCcMath* OJJFCKMJPHM; // 0x18
		::System::String* LEOODONCNEO; // 0x20
		::Class_1_004034A1FAAF468A* PDCLEDKKCMF; // 0x28
		::Class_1_004034A1FAAF468A* BBMEEHBFKAA; // 0x30
		::Class_1_DCACF1A724007C54* NHLMDKHFPGE; // 0x38
		::System::String* IKCALGMHKMA; // 0x40
		::System::Boolean OEOPMJHNMFC; // 0x48
		::System::Boolean DMNHFGAALCD; // 0x49
		::System::Boolean HLDEJMCGIGO; // 0x4A
		::System::Boolean GMGNKOFOIOH; // 0x4B
		::System::Single FLHOEGBFPJB; // 0x4C
		::System::Single KEFOHBPNPJF; // 0x50
		::System::Single LJBKILGNJCF; // 0x54
		::UnityEngine::Vector3 FOOKCGJIBMM; // 0x58
		::System::String* PFMHMCJMPLC; // 0x68
		::System::String* NPNCMJBKOCG; // 0x70
		::RPG::GameCore::GameEntity* _OwnerProp; // 0x78
		::RPG::GameCore::GameEntity* StartProp; // 0x80
		::RPG::GameCore::GameEntity* EndProp; // 0x88
		::System::Single OverriderMoveSpeed; // 0x90
		::System::UInt32 PEEFHNHDBMF; // 0x94
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x98
		::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0xA0

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

		::System::Void Method_5_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_367B9590522079D1_OFFSET))(this);
		}

		::System::Void Method_5_8CA05BCD86E125DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_8CA05BCD86E125DF_OFFSET))(this);
		}

		::System::Void Method_5_D12268C88ECA46C9(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_D12268C88ECA46C9_OFFSET))(this, a1);
		}

		::System::Void Method_5_8C3DB70FFBBF01C7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_8C3DB70FFBBF01C7_OFFSET))(this, a1);
		}

		::System::Void Method_5_E0605E6F5A574306(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPCABLELINE_METHOD_5_E0605E6F5A574306_OFFSET))(this, a1);
		}
	};
}
