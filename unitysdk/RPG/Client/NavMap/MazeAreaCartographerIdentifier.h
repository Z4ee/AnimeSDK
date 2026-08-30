#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3ABA3E0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3ABA3F0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3ABA310)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3ABA250)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x784260)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0x379F9B0)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18252690)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18252700)
#define RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x3ABA070)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MazeAreaCartographerIdentifier_TypeDefinitionIndex = 74384;

	struct alignas(4) MazeAreaCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _AreaID_k__BackingField; // 0x14
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::VerseParam a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean Equals(::RPG::Client::NavMap::MazeAreaCartographerIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MazeAreaCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::NavMap::MazeAreaCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeAreaCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::MazeAreaCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::MazeAreaCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAZEAREACARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
