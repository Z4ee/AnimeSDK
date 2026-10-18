#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassAvatarWalkStatus.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleItemBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDE82E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GLOBALROTATETO_OFFSET UNITYSDK_OFFSET(0xDDF1FF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_INITAVATAR_OFFSET UNITYSDK_OFFSET(0xDDE35A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_0841DD481C9E7631_OFFSET UNITYSDK_OFFSET(0xDDF08B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0xDDF0D60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xDDF09A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_3F8C9479EE71AF79_OFFSET UNITYSDK_OFFSET(0xDDF0A80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_4745AD940853890E_OFFSET UNITYSDK_OFFSET(0xDDF1AB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_52318DC8B70A5DC8_OFFSET UNITYSDK_OFFSET(0xDDF19D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0xDDF1D70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0xDDF1C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8401BD3061E3621B_OFFSET UNITYSDK_OFFSET(0xDDF1940)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_1_OFFSET UNITYSDK_OFFSET(0xDDF18C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0xDDF1840)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xDDF1EB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_BBEE5344A89FBA2C_OFFSET UNITYSDK_OFFSET(0xDDF0B40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_DFB44E7A1221CF28_OFFSET UNITYSDK_OFFSET(0xDDF1E40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOVETO_OFFSET UNITYSDK_OFFSET(0xDDF2390)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDF1F90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xDDE5560)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET UNITYSDK_OFFSET(0xDDE8340)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDEFED0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_WALK_OFFSET UNITYSDK_OFFSET(0xDDEBB60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDF27A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xDDF2730)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__47_0_OFFSET UNITYSDK_OFFSET(0xDDF2810)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleWormAvatar_TypeDefinitionIndex = 78938;

	class WormCompassPuzzleWormAvatar : public ::RPG::Client::Prop::WormCompassPuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_CHGNGEMANFM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleWormAvatar_TypeDefinitionIndex)->GetStaticField(0x147E0);
		}
		static ::System::Int32* StaticGet_ELLNLDDDJLO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleWormAvatar_TypeDefinitionIndex)->GetStaticField(0x147E4);
		}
		::UnityEngine::GameObject* AvatarRoot; // 0x48
		::UnityEngine::GameObject* AvatarDay; // 0x50
		::UnityEngine::GameObject* AvatarNight; // 0x58
		::System::Boolean IsDayAvatar; // 0x60
		::System::Single StPointRadius; // 0x64
		::System::Single ForwardStep; // 0x68
		::UnityEngine::AnimationCurve* RotationCurve; // 0x70
		::System::Single RotationDuration; // 0x78
		::UnityEngine::AnimationCurve* WalkCurve; // 0x80
		::System::Single WalkDuration; // 0x88
		::System::Action* DMPIIOOIPFA; // 0x90
		::System::Boolean BHBJDLHJBLB; // 0x98
		::RPG::Client::Prop::WormCompassAvatarWalkStatus DKKIINNDOPH; // 0x9C
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* FKJDGDOHNDN; // 0xA0
		::System::Int32 ODIBPANFMCD; // 0xA8
		::System::Int32 KEOPEKOJJLB; // 0xAC
		::System::Int32 DHGPEOOLDFL; // 0xB0
		::System::Single EPOCAAMBNEJ; // 0xB4
		::System::Single GNMHBNNKAEH; // 0xB8
		::System::Single EBGOGGNALBJ; // 0xBC
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* CCLIIENLKAH; // 0xC0
		::System::Int32 IJFKHMEJPEN; // 0xC8
		::System::Int32 EOGIBBFAANF; // 0xCC
		::UnityEngine::Quaternion NACIBKPBNLD; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* CAMAFEIKOEB; // 0xE0
		::UnityEngine::Vector3 MLEPLKNMBDC; // 0xE8
		::UnityEngine::Vector3 HKKMGKFDHKF; // 0xF4
		::UnityEngine::Quaternion JJMJMDGINNO; // 0x100
		::UnityEngine::Quaternion GECGBHCKOEM; // 0x110
		::UnityEngine::Coroutine* IOCBCMBGALI; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_6_3F8C9479EE71AF79(::RPG::Client::Prop::WormCompassDirection a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassDirection, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_3F8C9479EE71AF79_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void Method_6_6105334A729F22E3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_6105334A729F22E3_OFFSET))(this, a1);
		}

		::System::Void Method_6_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_OFFSET))(this, a1);
		}

		::System::Void Method_6_8B20DD98E594CC7F_1(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_7B2CC38D584B3558(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_7B2CC38D584B3558_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_0841DD481C9E7631(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_0841DD481C9E7631_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_6_4745AD940853890E(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_4745AD940853890E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_52318DC8B70A5DC8(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_52318DC8B70A5DC8_OFFSET))(this, a1);
		}

		::System::Single Method_6_DFB44E7A1221CF28(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_DFB44E7A1221CF28_OFFSET))(this, a1);
		}

		::System::Void InitAvatar(::RPG::Client::Prop::WormCompassPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_INITAVATAR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void GlobalRotateTo(::UnityEngine::Quaternion a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GLOBALROTATETO_OFFSET))(this, a1, a2);
		}

		::System::Void MoveTo(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOVETO_OFFSET))(this, a1);
		}

		::System::Void Walk(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_WALK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Animator* Method_6_8401BD3061E3621B()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8401BD3061E3621B_OFFSET))(this);
		}

		::System::Void Method_6_BBEE5344A89FBA2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_BBEE5344A89FBA2C_OFFSET))(this);
		}

		::System::Void Method_6_2CBE0B79DD36047E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_2CBE0B79DD36047E_OFFSET))(this);
		}

		::System::Boolean SearchWalkPath(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*& a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*&, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET))(this, a1, a2);
		}

		::System::Void __TriggerIdleShow_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__47_0_OFFSET))(this);
		}
	};
}
