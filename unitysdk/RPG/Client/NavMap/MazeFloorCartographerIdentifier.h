#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDB540)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xDB550)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xDB470)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDB3E0)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xD8740)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xAB61920)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xAB61980)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xDB3B0)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDB650)
#define RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDB5F0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MazeFloorCartographerIdentifier_TypeDefinitionIndex = 68751;

	struct alignas(4) MazeFloorCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::Client::VerseParam verseParam, ::System::UInt32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER__CTOR_OFFSET))(this, verseParam, floorID);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::NavMap::MazeFloorCartographerIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MazeFloorCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::RPG::Client::NavMap::MazeFloorCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeFloorCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::MazeFloorCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeFloorCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEFLOORCARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}
