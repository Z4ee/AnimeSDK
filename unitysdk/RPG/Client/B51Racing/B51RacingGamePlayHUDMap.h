#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0EDB27FD5E4877C5;
class Class_1_35BEC894515A38CF_1;
class Class_1_A4088D9A55CD220E;
class Class_1_D2BE74FB4F4086CC;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::B51Racing { class B51RacingGameplayMapCarItemControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_GET_ENEMYCARINFOLIST_OFFSET UNITYSDK_OFFSET(0x1B6AEEA0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1B6ADA50)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6AD210)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_SET_ENEMYCARINFOLIST_OFFSET UNITYSDK_OFFSET(0x1B6AEEB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B6ADCB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__APPLYMAPTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B6AD570)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1B6AE830)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6AEEC0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ENSUREENEMYMARKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6AE440)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__FINDEXISTINGMARKER_OFFSET UNITYSDK_OFFSET(0x1B6AE990)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__GETORCREATEPLAYERMARKER_OFFSET UNITYSDK_OFFSET(0x1B6ADFC0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__GETROTATIONCOSSIN_OFFSET UNITYSDK_OFFSET(0x1B6AD4E0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__HIDEENEMYMARKERSFROM_OFFSET UNITYSDK_OFFSET(0x1B6AE2D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__INITIALIZEPLAYERMARKER_OFFSET UNITYSDK_OFFSET(0x1B6AEAF0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6AEDF0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6AECB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ROTATE_OFFSET UNITYSDK_OFFSET(0x1B6ADB90)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETMARKERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B6AE190)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPENEMYMARKERS_OFFSET UNITYSDK_OFFSET(0x1B6AD890)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPENEMYMARKER_OFFSET UNITYSDK_OFFSET(0x1B6AE570)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPMARKERVIEW_OFFSET UNITYSDK_OFFSET(0x1B6AE070)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPPLAYERMARKER_OFFSET UNITYSDK_OFFSET(0x1B6AD7F0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TOZROTATION_OFFSET UNITYSDK_OFFSET(0x1B6ADC30)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYGETPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1B6AD3F0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYLOADMINIMAPSPRITE_OFFSET UNITYSDK_OFFSET(0x1B6ADAB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYREGISTERUISHOWADAPTER_OFFSET UNITYSDK_OFFSET(0x1B6AEB80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYRESOLVESERVICES_OFFSET UNITYSDK_OFFSET(0x1B6ADE00)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP___TRYREGISTERUISHOWADAPTER_B__20_0_OFFSET UNITYSDK_OFFSET(0x1B6AEF30)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGamePlayHUDMap_TypeDefinitionIndex = 80559;

	class B51RacingGamePlayHUDMap : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* _MapImagePath; // 0x0
		// static const ::System::String* _CarContainerPath; // 0x0
		::System::Collections::Generic::List_1<::Class_1_35BEC894515A38CF_1*>* _EnemyCarInfoList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*>* _EnemyMarkers; // 0x40
		::Class_1_A4088D9A55CD220E* _HudService; // 0x48
		::Class_1_D2BE74FB4F4086CC* _UIShowService; // 0x50
		::Class_1_0EDB27FD5E4877C5* _ShowAdapter; // 0x58
		::UnityEngine::RectTransform* _MapImageRect; // 0x60
		::UnityEngine::UI::Image* _MapImage; // 0x68
		::UnityEngine::RectTransform* _CarContainer; // 0x70
		::RPG::Client::PrefabLoadMeta* _CarPrefabLoadMeta; // 0x78
		::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* _PlayerMarker; // 0x80
		::System::Boolean _PlayerMarkerInitialized; // 0x88
		::System::Boolean _MapImageLoaded; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__CTOR_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_SETUPVIEW_OFFSET))(this);
		}

		::System::Void InitView(::Class_1_A4088D9A55CD220E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A4088D9A55CD220E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_INITVIEW_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector2 _GetRotationCosSin(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__GETROTATIONCOSSIN_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 _Rotate(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ROTATE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 _ToZRotation(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TOZROTATION_OFFSET))(a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_UPDATE_OFFSET))(this);
		}

		::System::Boolean _TryGetPlayerInfo(::Class_1_35BEC894515A38CF_1*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_35BEC894515A38CF_1*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYGETPLAYERINFO_OFFSET))(this, a1);
		}

		::System::Void _ApplyMapTransform(::Class_1_35BEC894515A38CF_1* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35BEC894515A38CF_1*, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__APPLYMAPTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupPlayerMarker(::Class_1_35BEC894515A38CF_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35BEC894515A38CF_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPPLAYERMARKER_OFFSET))(this, a1);
		}

		::System::Void _SetupEnemyMarkers(::Class_1_35BEC894515A38CF_1* a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35BEC894515A38CF_1*, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPENEMYMARKERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupEnemyMarker(::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* a1, ::Class_1_35BEC894515A38CF_1* a2, ::Class_1_35BEC894515A38CF_1* a3, ::UnityEngine::Rect a4, ::UnityEngine::Vector2 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*, ::Class_1_35BEC894515A38CF_1*, ::Class_1_35BEC894515A38CF_1*, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPENEMYMARKER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _SetupMarkerView(::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* a1, ::Class_1_35BEC894515A38CF_1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*, ::Class_1_35BEC894515A38CF_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETUPMARKERVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void _SetMarkerTransform(::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__SETMARKERTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _EnsureEnemyMarkerCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ENSUREENEMYMARKERCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* _GetOrCreatePlayerMarker()
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__GETORCREATEPLAYERMARKER_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* _FindExistingMarker()
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__FINDEXISTINGMARKER_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl* _CreateMarker()
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplayMapCarItemControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__CREATEMARKER_OFFSET))(this);
		}

		::System::Void _InitializePlayerMarker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__INITIALIZEPLAYERMARKER_OFFSET))(this);
		}

		::System::Void _HideEnemyMarkersFrom(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__HIDEENEMYMARKERSFROM_OFFSET))(this, a1);
		}

		::System::Void _TryResolveServices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYRESOLVESERVICES_OFFSET))(this);
		}

		::System::Void _TryRegisterUIShowAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYREGISTERUISHOWADAPTER_OFFSET))(this);
		}

		::System::Void _TryLoadMinimapSprite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__TRYLOADMINIMAPSPRITE_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP__ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_35BEC894515A38CF_1*>* get_EnemyCarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_35BEC894515A38CF_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_GET_ENEMYCARINFOLIST_OFFSET))(this);
		}

		::System::Void set_EnemyCarInfoList(::System::Collections::Generic::List_1<::Class_1_35BEC894515A38CF_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_35BEC894515A38CF_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP_SET_ENEMYCARINFOLIST_OFFSET))(this, a1);
		}

		::System::Void __TryRegisterUIShowAdapter_b__20_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDMAP___TRYREGISTERUISHOWADAPTER_B__20_0_OFFSET))(this, a1);
		}
	};
}
