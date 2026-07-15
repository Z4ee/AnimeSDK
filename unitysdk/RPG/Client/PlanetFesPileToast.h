#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PLANETFESPILETOAST_HIDEALL_OFFSET UNITYSDK_OFFSET(0x1A1CB4E0)
#define RPG_CLIENT_PLANETFESPILETOAST_INIT_OFFSET UNITYSDK_OFFSET(0x1A1CB260)
#define RPG_CLIENT_PLANETFESPILETOAST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1CB740)
#define RPG_CLIENT_PLANETFESPILETOAST_PILE_OFFSET UNITYSDK_OFFSET(0x1A1CB0D0)
#define RPG_CLIENT_PLANETFESPILETOAST_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1A1CB480)
#define RPG_CLIENT_PLANETFESPILETOAST_SETPAUSE_OFFSET UNITYSDK_OFFSET(0x1A1CB570)
#define RPG_CLIENT_PLANETFESPILETOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A1CB790)
#define RPG_CLIENT_PLANETFESPILETOAST__ADDTOPILE_OFFSET UNITYSDK_OFFSET(0x1A1CB170)
#define RPG_CLIENT_PLANETFESPILETOAST__APPLYLATENCYLAG_OFFSET UNITYSDK_OFFSET(0x1A1CB620)
#define RPG_CLIENT_PLANETFESPILETOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CC780)
#define RPG_CLIENT_PLANETFESPILETOAST__ENDMOVING_OFFSET UNITYSDK_OFFSET(0x1A1CBF60)
#define RPG_CLIENT_PLANETFESPILETOAST__ENTERMOVING_OFFSET UNITYSDK_OFFSET(0x1A1CC2D0)
#define RPG_CLIENT_PLANETFESPILETOAST__FADEIN_OFFSET UNITYSDK_OFFSET(0x1A1CBAE0)
#define RPG_CLIENT_PLANETFESPILETOAST__FADEOUT_OFFSET UNITYSDK_OFFSET(0x1A1CBD70)
#define RPG_CLIENT_PLANETFESPILETOAST__GETNEXTINDEX_OFFSET UNITYSDK_OFFSET(0x1A1CC4D0)
#define RPG_CLIENT_PLANETFESPILETOAST__ONITEMADDTOPILE_OFFSET UNITYSDK_OFFSET(0x1A1CC1D0)
#define RPG_CLIENT_PLANETFESPILETOAST__ONITEMHIDE_OFFSET UNITYSDK_OFFSET(0x1A1CB680)
#define RPG_CLIENT_PLANETFESPILETOAST__SHOWING_OFFSET UNITYSDK_OFFSET(0x1A1CBC10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesPileToast_TypeDefinitionIndex = 63549;

	class PlanetFesPileToast : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single MOVE_TIME; // 0x0
		::UnityEngine::GameObject* ToastPrefab; // 0x18
		::System::Int32 _MaxCount; // 0x20
		::System::Boolean _Moving; // 0x24
		::System::Single _MovingPoint; // 0x28
		::System::UInt32 _Header; // 0x2C
		::Il2CppArray<::RPG::Client::PlanetFesToastItem*>* _Items; // 0x30
		::System::Collections::Generic::Queue_1<::System::Object*>* _Msgs; // 0x38
		::System::Boolean _IsEnable; // 0x40
		::System::Boolean _IsPaused; // 0x41
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x48
		::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>* _OnAddToPileDelegate; // 0x50
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>* _OnItemHideDelegate; // 0x58
		::XLua::LuaTable* _LuaTable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__CTOR_OFFSET))(this);
		}

		::System::Void Pile(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_PILE_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Int32 a1, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>* a2, ::XLua::LuaTable* a3, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*>*, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_SETPAUSE_OFFSET))(this, a1);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_HIDEALL_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST_UPDATE_OFFSET))(this);
		}

		::System::Void _AddToPile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ADDTOPILE_OFFSET))(this);
		}

		::System::Void _FadeIn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__FADEIN_OFFSET))(this, a1);
		}

		::System::Void _Showing(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__SHOWING_OFFSET))(this, a1, a2);
		}

		::System::Void _FadeOut(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__FADEOUT_OFFSET))(this, a1);
		}

		::System::Void _EnterMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ENTERMOVING_OFFSET))(this);
		}

		::System::Void _EndMoving()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ENDMOVING_OFFSET))(this);
		}

		::System::UInt32 _GetNextIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__GETNEXTINDEX_OFFSET))(this, a1);
		}

		::System::Void _ApplyLatencyLag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__APPLYLATENCYLAG_OFFSET))(this);
		}

		::System::Void _OnItemAddToPile(::RPG::Client::PlanetFesToastItem* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ONITEMADDTOPILE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnItemHide(::RPG::Client::PlanetFesToastItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESPILETOAST__ONITEMHIDE_OFFSET))(this, a1);
		}
	};
}
