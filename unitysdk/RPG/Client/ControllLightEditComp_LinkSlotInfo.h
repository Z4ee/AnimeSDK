#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class StageHarmonyBaseLinkSlot;
namespace RPG::Client { class ControllLightEditComp; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9425020)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECT_OFFSET UNITYSDK_OFFSET(0x9425080)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x9425060)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x9425040)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOT_OFFSET UNITYSDK_OFFSET(0x94250A0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_OWNERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x94250C0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECTNAME_OFFSET UNITYSDK_OFFSET(0x9425030)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECT_OFFSET UNITYSDK_OFFSET(0x9425090)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LIGHTINDEX_OFFSET UNITYSDK_OFFSET(0x9425070)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x9425050)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOT_OFFSET UNITYSDK_OFFSET(0x94250B0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_OWNERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x94250D0)
#define RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x94250E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ControllLightEditComp_LinkSlotInfo_TypeDefinitionIndex = 57442;

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

		::System::Void set_HostObjectName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECTNAME_OFFSET))(this, value);
		}

		::System::String* get_LinkSlotType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOTTYPE_OFFSET))(this);
		}

		::System::Void set_LinkSlotType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOTTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_LightIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LIGHTINDEX_OFFSET))(this);
		}

		::System::Void set_LightIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LIGHTINDEX_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_HostObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_HOSTOBJECT_OFFSET))(this);
		}

		::System::Void set_HostObject(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_HOSTOBJECT_OFFSET))(this, value);
		}

		::StageHarmonyBaseLinkSlot* get_LinkSlot()
		{
			return ((::StageHarmonyBaseLinkSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_LINKSLOT_OFFSET))(this);
		}

		::System::Void set_LinkSlot(::StageHarmonyBaseLinkSlot* value)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyBaseLinkSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_LINKSLOT_OFFSET))(this, value);
		}

		::RPG::Client::ControllLightEditComp* get_OwnerComponent()
		{
			return ((::RPG::Client::ControllLightEditComp*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_GET_OWNERCOMPONENT_OFFSET))(this);
		}

		::System::Void set_OwnerComponent(::RPG::Client::ControllLightEditComp* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ControllLightEditComp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONTROLLLIGHTEDITCOMP_LINKSLOTINFO_SET_OWNERCOMPONENT_OFFSET))(this, value);
		}
	};
}
