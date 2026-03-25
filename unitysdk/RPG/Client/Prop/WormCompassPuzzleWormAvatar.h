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

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA22C050)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_GLOBALROTATETO_OFFSET UNITYSDK_OFFSET(0xA22C1D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_INITAVATAR_OFFSET UNITYSDK_OFFSET(0xA22BE80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_0841DD481C9E7631_OFFSET UNITYSDK_OFFSET(0xA22A780)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xA22BF00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA22A870)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_3F8C9479EE71AF79_OFFSET UNITYSDK_OFFSET(0xA22A940)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_4745AD940853890E_OFFSET UNITYSDK_OFFSET(0xA22BA80)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_52318DC8B70A5DC8_OFFSET UNITYSDK_OFFSET(0xA22B9A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0xA22BD40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0xA22BC00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_1_OFFSET UNITYSDK_OFFSET(0xA22B600)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0xA22B580)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xA22AC20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_B7FAF5B379E82372_OFFSET UNITYSDK_OFFSET(0xA22B680)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_BBEE5344A89FBA2C_OFFSET UNITYSDK_OFFSET(0xA22AA00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_DFB44E7A1221CF28_OFFSET UNITYSDK_OFFSET(0xA22BE10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_MOVETO_OFFSET UNITYSDK_OFFSET(0xA22C550)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA22C110)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xA22B710)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET UNITYSDK_OFFSET(0xA22CB20)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA229E00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_WALK_OFFSET UNITYSDK_OFFSET(0xA22C8D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA22CF30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0xA22CED0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xA22D030)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__48_0_OFFSET UNITYSDK_OFFSET(0xA22CFA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleWormAvatar_TypeDefinitionIndex = 64387;

	class WormCompassPuzzleWormAvatar : public ::RPG::Client::Prop::WormCompassPuzzleItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleWormAvatar_TypeDefinitionIndex)->GetStaticField(0x4A60);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleWormAvatar_TypeDefinitionIndex)->GetStaticField(0x4A64);
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
		::System::Action* Field_6_12; // 0x90
		::System::Boolean Field_6_13; // 0x98
		::RPG::Client::Prop::WormCompassAvatarWalkStatus Field_6_14; // 0x9C
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* Field_6_15; // 0xA0
		::System::Int32 Field_6_16; // 0xA8
		::System::Int32 Field_6_17; // 0xAC
		::System::Int32 Field_6_18; // 0xB0
		::System::Single Field_6_19; // 0xB4
		::System::Single Field_6_20; // 0xB8
		::System::Single Field_6_21; // 0xBC
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* Field_6_22; // 0xC0
		::System::Int32 Field_6_23; // 0xC8
		::System::Int32 Field_6_24; // 0xCC
		::UnityEngine::Quaternion Field_6_25; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_6_26; // 0xE0
		::UnityEngine::Vector3 Field_6_27; // 0xE8
		::UnityEngine::Vector3 Field_6_28; // 0xF4
		::UnityEngine::Quaternion Field_6_29; // 0x100
		::UnityEngine::Quaternion Field_6_30; // 0x110
		::System::Boolean Field_6_31; // 0x120
		::UnityEngine::Coroutine* Field_6_32; // 0x128

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

		::System::Void Method_6_2B66C008535F8B01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_2B66C008535F8B01_OFFSET))(this);
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

		::UnityEngine::Animator* Method_6_B7FAF5B379E82372()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_B7FAF5B379E82372_OFFSET))(this);
		}

		::System::Void Method_6_BBEE5344A89FBA2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_BBEE5344A89FBA2C_OFFSET))(this);
		}

		::System::Void Method_6_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_METHOD_6_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Boolean SearchWalkPath(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*& a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*&, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR_SEARCHWALKPATH_OFFSET))(this, a1, a2);
		}

		::System::Void __TriggerIdleShow_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___TRIGGERIDLESHOW_B__48_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEWORMAVATAR___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET))(this);
		}
	};
}
