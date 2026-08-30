#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class StageHarmonyBaseLinkSlot;
namespace RPG::Client { class ControllLightEditComp; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1A29CDC0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECT_OFFSET UNITYSDK_OFFSET(0x1A29CE20)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1A29CE00)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1A29CDE0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOT_OFFSET UNITYSDK_OFFSET(0x1A29CE40)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_OWNERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A29CE60)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x1A29CDD0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECT_OFFSET UNITYSDK_OFFSET(0x1A29CE30)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x1A29CE10)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1A29CDF0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOT_OFFSET UNITYSDK_OFFSET(0x1A29CE50)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_OWNERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A29CE70)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A29CE80)

namespace RPG::Client
{
	inline static constexpr unsigned int ControllLightEditComp_LinkSlotInfo_TypeDefinitionIndex = 70146;

	class ControllLightEditComp_LinkSlotInfo : public ::System::Object
	{
	public:
		::System::String* _HostObjectName_k__BackingField; // 0x10
		::System::String* _LinkSlotType_k__BackingField; // 0x18
		::System::Int32 _LightIndex_k__BackingField; // 0x20
		::UnityEngine::GameObject* _HostObject_k__BackingField; // 0x28
		::StageHarmonyBaseLinkSlot* _LinkSlot_k__BackingField; // 0x30
		::RPG::Client::ControllLightEditComp* _OwnerComponent_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_HostObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECTNAME_OFFSET))(this);
		}

		::System::Void set_HostObjectName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECTNAME_OFFSET))(this, a1);
		}

		::System::String* get_LinkSlotType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOTTYPE_OFFSET))(this);
		}

		::System::Void set_LinkSlotType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOTTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_LightIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LIGHTINDEX_OFFSET))(this);
		}

		::System::Void set_LightIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LIGHTINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_HostObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECT_OFFSET))(this);
		}

		::System::Void set_HostObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECT_OFFSET))(this, a1);
		}

		::StageHarmonyBaseLinkSlot* get_LinkSlot()
		{
			return ((::StageHarmonyBaseLinkSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOT_OFFSET))(this);
		}

		::System::Void set_LinkSlot(::StageHarmonyBaseLinkSlot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyBaseLinkSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOT_OFFSET))(this, a1);
		}

		::RPG::Client::ControllLightEditComp* get_OwnerComponent()
		{
			return ((::RPG::Client::ControllLightEditComp*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_OWNERCOMPONENT_OFFSET))(this);
		}

		::System::Void set_OwnerComponent(::RPG::Client::ControllLightEditComp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ControllLightEditComp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_OWNERCOMPONENT_OFFSET))(this, a1);
		}
	};
}
