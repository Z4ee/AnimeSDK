#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirContainerType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_CLEAR_OFFSET UNITYSDK_OFFSET(0xDB22A50)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_CONTAINERTYPE_OFFSET UNITYSDK_OFFSET(0xDB22910)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ENDINDEX_OFFSET UNITYSDK_OFFSET(0xDB22970)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_EQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xDB22A30)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xDB22950)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xDB229C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xDB22A10)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_SERVERSIDEINDEX_OFFSET UNITYSDK_OFFSET(0xDB22930)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xDB0A7C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xDB09B00)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_INIT_OFFSET UNITYSDK_OFFSET(0xDB22AC0)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SETLOCKED_OFFSET UNITYSDK_OFFSET(0xDB22B50)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_CONTAINERTYPE_OFFSET UNITYSDK_OFFSET(0xDB22920)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_EQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xDB22A40)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xDB22960)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xDB22A20)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_SERVERSIDEINDEX_OFFSET UNITYSDK_OFFSET(0xDB22940)
#define RPG_CLIENT_PIXAIR_PIXAIRSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB22AB0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirSlot_TypeDefinitionIndex = 78851;

	class PixAirSlot : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipInstance* _EquipInstance_k__BackingField; // 0x10
		::System::Int32 _ServerSideIndex_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x1C
		::RPG::Client::PixAir::PixAirContainerType _ContainerType_k__BackingField; // 0x20
		::System::Boolean _IsLocked_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT__CTOR_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirContainerType get_ContainerType()
		{
			return ((::RPG::Client::PixAir::PixAirContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_CONTAINERTYPE_OFFSET))(this);
		}

		::System::Void set_ContainerType(::RPG::Client::PixAir::PixAirContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_CONTAINERTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_ServerSideIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_SERVERSIDEINDEX_OFFSET))(this);
		}

		::System::Void set_ServerSideIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_SERVERSIDEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 get_EndIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ENDINDEX_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_EquipInstance()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_GET_EQUIPINSTANCE_OFFSET))(this);
		}

		::System::Void set_EquipInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SET_EQUIPINSTANCE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::PixAir::PixAirContainerType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::RPG::Client::PixAir::PixAirEquipInstance* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirContainerType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSLOT_SETLOCKED_OFFSET))(this, a1);
		}
	};
}
