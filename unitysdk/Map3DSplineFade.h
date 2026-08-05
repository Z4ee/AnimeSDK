#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MAP3DSPLINEFADE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x16C09170)
#define MAP3DSPLINEFADE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16C08F70)
#define MAP3DSPLINEFADE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16C08930)
#define MAP3DSPLINEFADE_REFRESHCACHEDCENTERS_OFFSET UNITYSDK_OFFSET(0x16C08A80)
#define MAP3DSPLINEFADE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16C09030)
#define MAP3DSPLINEFADE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C09390)
#define MAP3DSPLINEFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C09340)

inline static constexpr unsigned int Map3DSplineFade_TypeDefinitionIndex = 82037;

class Map3DSplineFade : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Transform** StaticGet_CachedCenter2()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x48560);
	}
	static ::System::Collections::Generic::List_1<::Map3DSplineFade*>** StaticGet_Instances()
	{
		return (::System::Collections::Generic::List_1<::Map3DSplineFade*>**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x48568);
	}
	static ::UnityEngine::Transform** StaticGet_CachedCenter1()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x48570);
	}
	static ::System::Int32* StaticGet_Map3DSphericalFadeCenter1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x10C40);
	}
	static ::System::Int32* StaticGet_Map3DSphericalFadeCenter2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Map3DSplineFade_TypeDefinitionIndex)->GetStaticField(0x10C44);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_UPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Transform* target)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_GETWORLDPOSITION_OFFSET))(target);
	}

	static ::System::Void RefreshCachedCenters()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAP3DSPLINEFADE_REFRESHCACHEDCENTERS_OFFSET))();
	}
};
