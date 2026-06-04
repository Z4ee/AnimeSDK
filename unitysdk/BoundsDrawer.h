#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_414BCDCDAD47B487;
class Class_1_8A6989C352B0F0F0;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define BOUNDSDRAWER_GET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xB03B800)
#define BOUNDSDRAWER_GET_LODTEMPLATECFG_OFFSET UNITYSDK_OFFSET(0xB03B820)
#define BOUNDSDRAWER_GET_PRELOADCULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xB03B7E0)
#define BOUNDSDRAWER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xB03B090)
#define BOUNDSDRAWER_SETBOUND_OFFSET UNITYSDK_OFFSET(0xB03AF20)
#define BOUNDSDRAWER_SETOWNERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB03AFA0)
#define BOUNDSDRAWER_SET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xB03B810)
#define BOUNDSDRAWER_SET_PRELOADCULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0xB03B7F0)
#define BOUNDSDRAWER_START_OFFSET UNITYSDK_OFFSET(0xB03AFF0)
#define BOUNDSDRAWER__CTOR_OFFSET UNITYSDK_OFFSET(0xB03B880)

inline static constexpr unsigned int BoundsDrawer_TypeDefinitionIndex = 44623;

class BoundsDrawer : public ::UnityEngine::MonoBehaviour
{
public:
	::Class_1_8A6989C352B0F0F0* OwnerInstance; // 0x18
	::UnityEngine::Renderer* Field_5_1; // 0x20
	::System::Boolean Field_5_2; // 0x28
	::System::String* LoadingStatus; // 0x30
	::System::Int32 ObjectIndex; // 0x38
	::RPG::Client::OpenWorld::StreamingItemData* ItemData; // 0x40
	::System::Single DistanceToCamera; // 0x48
	::System::Single DistanceRatio; // 0x4C
	::System::Single RealDistanceToCamera; // 0x50
	::System::String* _PreloadCullingStatus_k__BackingField; // 0x58
	::System::String* _CullingStatus_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER__CTOR_OFFSET))(this);
	}

	::System::Void SetBound(::UnityEngine::Bounds a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SETBOUND_OFFSET))(this, a1, a2);
	}

	::System::Void SetOwnerInstance(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SETOWNERINSTANCE_OFFSET))(this, a1);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_START_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::String* get_PreloadCullingStatus()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_PRELOADCULLINGSTATUS_OFFSET))(this);
	}

	::System::Void set_PreloadCullingStatus(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SET_PRELOADCULLINGSTATUS_OFFSET))(this, a1);
	}

	::System::String* get_CullingStatus()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_CULLINGSTATUS_OFFSET))(this);
	}

	::System::Void set_CullingStatus(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_SET_CULLINGSTATUS_OFFSET))(this, a1);
	}

	::Class_1_414BCDCDAD47B487* get_LodTemplateCfg()
	{
		return ((::Class_1_414BCDCDAD47B487*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDSDRAWER_GET_LODTEMPLATECFG_OFFSET))(this);
	}
};
