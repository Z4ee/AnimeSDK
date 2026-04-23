#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_303D5A33D1401D59;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define CITYATMOSPHERECOMMONANIMEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAD00200)
#define CITYATMOSPHERECOMMONANIMEVENT_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAD001A0)
#define CITYATMOSPHERECOMMONANIMEVENT_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xACFFAB0)
#define CITYATMOSPHERECOMMONANIMEVENT_RANDOMCOLOR_OFFSET UNITYSDK_OFFSET(0xAD002D0)
#define CITYATMOSPHERECOMMONANIMEVENT_RANDOMCONTAINERGOODS_OFFSET UNITYSDK_OFFSET(0xAD00460)
#define CITYATMOSPHERECOMMONANIMEVENT_REFRESHCHILDOBJ_OFFSET UNITYSDK_OFFSET(0xACFFB30)
#define CITYATMOSPHERECOMMONANIMEVENT_REFRESHCOLOR_OFFSET UNITYSDK_OFFSET(0xACFFD90)
#define CITYATMOSPHERECOMMONANIMEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD004E0)
#define CITYATMOSPHERECOMMONANIMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAD004A0)
#define CITYATMOSPHERECOMMONANIMEVENT___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xAD00560)
#define CITYATMOSPHERECOMMONANIMEVENT___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xAD00550)

inline static constexpr unsigned int CityAtmosphereCommonAnimEvent_TypeDefinitionIndex = 43888;

class CityAtmosphereCommonAnimEvent : public ::RPG::Client::PolymerEffectControllBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_sCachedRendererMats()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CityAtmosphereCommonAnimEvent_TypeDefinitionIndex)->GetStaticField(0x61920);
	}
	static ::System::Int32* StaticGet_AdjustAlbedoColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CityAtmosphereCommonAnimEvent_TypeDefinitionIndex)->GetStaticField(0x104E0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Goods; // 0x30
	::System::Boolean TriggerWhenInverted; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Color>* CandidateColor; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ObjList; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* ObjPathList; // 0x50
	::UnityEngine::Vector4 Color; // 0x58
	::UnityEngine::Animator* _Animator; // 0x68
	::UnityEngine::Renderer* _Renderer; // 0x70
	::UnityEngine::MaterialPropertyBlock* _PropertyBlockCache; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT__CCTOR_OFFSET))();
	}

	::System::Void OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* block, ::RPG::Client::OpenWorld::StreamingItemData* itemData, ::UnityEngine::GameObject* before, ::UnityEngine::GameObject* after)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, block, itemData, before, after);
	}

	::System::Void OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* block, ::RPG::Client::OpenWorld::StreamingItemData* itemData, ::UnityEngine::GameObject* after)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, block, itemData, after);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_AWAKE_OFFSET))(this);
	}

	::System::Void RefreshChildObj()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_REFRESHCHILDOBJ_OFFSET))(this);
	}

	::System::Void RandomColor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_RANDOMCOLOR_OFFSET))(this);
	}

	::System::Void RefreshColor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_REFRESHCOLOR_OFFSET))(this);
	}

	::System::Void RandomContainerGoods()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT_RANDOMCONTAINERGOODS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnPolymerRebuildBeforeFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2, ::UnityEngine::GameObject* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT___IFIXBASEPROXY_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_OnPolymerRebuildAfterFading(::Class_1_303D5A33D1401D59* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::UnityEngine::GameObject* P2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CITYATMOSPHERECOMMONANIMEVENT___IFIXBASEPROXY_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, P0, P1, P2);
	}
};
