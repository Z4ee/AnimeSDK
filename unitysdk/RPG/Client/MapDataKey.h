#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24BE2DDB450DE83C;

#define RPG_CLIENT_MAPDATAKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x174CB420)
#define RPG_CLIENT_MAPDATAKEY_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x174CB210)
#define RPG_CLIENT_MAPDATAKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x174CB4D0)
#define RPG_CLIENT_MAPDATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x174CB340)
#define RPG_CLIENT_MAPDATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x174CB590)
#define RPG_CLIENT_MAPDATAKEY_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x174CB610)
#define RPG_CLIENT_MAPDATAKEY_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x174CB5F0)
#define RPG_CLIENT_MAPDATAKEY_GET_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x174CB1C0)
#define RPG_CLIENT_MAPDATAKEY_GET_ISINONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x174CB620)
#define RPG_CLIENT_MAPDATAKEY_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x174CB600)
#define RPG_CLIENT_MAPDATAKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x174CB290)
#define RPG_CLIENT_MAPDATAKEY_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x174CB630)
#define RPG_CLIENT_MAPDATAKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x174CB3C0)
#define RPG_CLIENT_MAPDATAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x174CB1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDataKey_TypeDefinitionIndex = 66411;

	class MapDataKey : public ::System::Object
	{
	public:
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _StoryLineID_k__BackingField; // 0x14
		::System::Boolean _IsInOnlinePlayRoom_k__BackingField; // 0x18
		::System::UInt32 _ContentID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsCurrentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_ISCURRENTMAP_OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::Boolean& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MapDataKey* a1, ::RPG::Client::MapDataKey* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MapDataKey* a1, ::RPG::Client::MapDataKey* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsInOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_ISINONLINEPLAYROOM_OFFSET))(this);
		}

		static ::RPG::Client::MapDataKey* op_Explicit(::Class_1_24BE2DDB450DE83C* a1)
		{
			return ((::RPG::Client::MapDataKey*(*)(::Class_1_24BE2DDB450DE83C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_EXPLICIT_OFFSET))(a1);
		}
	};
}
