#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x816C0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x816D0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x815E0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x81540)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0x814F0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9E12EB0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9E12F20)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x81510)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x817E0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x81770)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int LittleGameCartographerIdentifier_TypeDefinitionIndex = 61244;

	struct alignas(4) LittleGameCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _SubMapID_k__BackingField; // 0x14
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::VerseParam verseParam, ::System::UInt32 floorID, ::System::UInt32 subMapID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER__CTOR_OFFSET))(this, verseParam, floorID, subMapID);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_SUBMAPID_OFFSET))(this);
		}

		::RPG::Client::VerseParam get_VerseParam()
		{
			return ((::RPG::Client::VerseParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::NavMap::LittleGameCartographerIdentifier other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::LittleGameCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean Equals_2(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::RPG::Client::NavMap::LittleGameCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::LittleGameCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::LittleGameCartographerIdentifier left, ::RPG::Client::NavMap::ICartographerIdentifier* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::LittleGameCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}
