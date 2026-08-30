#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0x18608C90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x18609A50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x18609A70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_LOCALRIGHT_OFFSET UNITYSDK_OFFSET(0x18609AC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_NORMALIZEDCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x18609A90)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x186088D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x18608B70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_525D46B30B659578_1_OFFSET UNITYSDK_OFFSET(0x18608740)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_525D46B30B659578_OFFSET UNITYSDK_OFFSET(0x186085D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x18609620)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x18607A80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x186080C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x18609190)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_C5B3F4014B58D8C3_OFFSET UNITYSDK_OFFSET(0x18609810)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_E6F489168983F864_OFFSET UNITYSDK_OFFSET(0x18608DC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_F9212750F754510F_OFFSET UNITYSDK_OFFSET(0x186081C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETHITEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x18608D70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETTARGET_OFFSET UNITYSDK_OFFSET(0x18608D20)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTID_OFFSET UNITYSDK_OFFSET(0x18609A60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0x18609A80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_LOCALRIGHT_OFFSET UNITYSDK_OFFSET(0x18609AE0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_NORMALIZEDCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x18609AB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x18607A20)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18609B10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x18609AF0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirProjectileView_TypeDefinitionIndex = 76854;

	class PixAirProjectileView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::System::UInt32>*>** StaticGet_GOGNNNBPNHL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirProjectileView_TypeDefinitionIndex)->GetStaticField(0x63800);
		}
		static ::System::Collections::Generic::LinkedList_1<::System::UInt32>** StaticGet_DFPLBOHHFJL()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PixAirProjectileView_TypeDefinitionIndex)->GetStaticField(0x63808);
		}
		static ::RPG::Client::MonoEffectManager** StaticGet_AKEEKBEFNIG()
		{
			return (::RPG::Client::MonoEffectManager**)Il2CppClass::FromTypeDefinitionIndex(PixAirProjectileView_TypeDefinitionIndex)->GetStaticField(0x63810);
		}
		// static const ::System::Int32 DMDNMNMBNPA = 0xA; // 0x0
		::System::UInt32 _EffectID_k__BackingField; // 0x38
		::System::Single _EffectScale_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _NormalizedControlPoint_k__BackingField; // 0x40
		::UnityEngine::Vector3 _LocalRight_k__BackingField; // 0x4C
		::System::String* LIJIGHDFAFI; // 0x58
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x60
		::System::Boolean KNHBEOOFEMC; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_84B92802FDAFF6C8_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 Method_6_F9212750F754510F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_F9212750F754510F_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_6_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Boolean Method_6_2C1F0A815CE2FE02()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_2C1F0A815CE2FE02_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void SetHitEffectPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SETHITEFFECTPATH_OFFSET))(this, a1);
		}

		::System::Void Method_6_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_10054BB010E03EDD_OFFSET))(this);
		}

		static ::System::Void Method_6_E6F489168983F864(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_E6F489168983F864_OFFSET))(a1);
		}

		static ::System::Void Method_6_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_5BCE9210F4ACDD0B_OFFSET))();
		}

		static ::System::Void Method_6_AE0B725AB77F7E6F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_AE0B725AB77F7E6F_OFFSET))();
		}

		static ::System::Void Method_6_C5B3F4014B58D8C3(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_C5B3F4014B58D8C3_OFFSET))(a1);
		}

		::UnityEngine::Vector3 Method_6_525D46B30B659578(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_525D46B30B659578_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_6_525D46B30B659578_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_METHOD_6_525D46B30B659578_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTID_OFFSET))(this);
		}

		::System::Void set_EffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTID_OFFSET))(this, a1);
		}

		::System::Single get_EffectScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_EFFECTSCALE_OFFSET))(this);
		}

		::System::Void set_EffectScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_EFFECTSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_NormalizedControlPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_NORMALIZEDCONTROLPOINT_OFFSET))(this);
		}

		::System::Void set_NormalizedControlPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_NORMALIZEDCONTROLPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LocalRight()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_GET_LOCALRIGHT_OFFSET))(this);
		}

		::System::Void set_LocalRight(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPROJECTILEVIEW_SET_LOCALRIGHT_OFFSET))(this, a1);
		}
	};
}
