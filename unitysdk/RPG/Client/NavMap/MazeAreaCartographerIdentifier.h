#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDB220)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xDB230)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0xDB140)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDB0A0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0xDAD40)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xAB61430)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xAB614A0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD60)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDB340)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDB2D0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MazeAreaCartographerIdentifier_TypeDefinitionIndex = 68750;

	struct alignas(4) MazeAreaCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _AreaID_k__BackingField; // 0x14
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::VerseParam verseParam, ::System::UInt32 floorID, ::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER__CTOR_OFFSET))(this, verseParam, floorID, areaID);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_AREAID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::NavMap::MazeAreaCartographerIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MazeAreaCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::RPG::Client::NavMap::MazeAreaCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeAreaCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::MazeAreaCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeAreaCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}
