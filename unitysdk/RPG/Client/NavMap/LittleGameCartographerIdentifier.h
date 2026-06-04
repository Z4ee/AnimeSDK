#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VerseParam.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::NavMap { class ICartographerIdentifier; }
namespace System { class Object; }

#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13FD40)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x13FD50)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x13FC70)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13FBB0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x1E110)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_GET_VERSEPARAM_OFFSET UNITYSDK_OFFSET(0x13FB60)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC25CFB0)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC26A290)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB80)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x13FE50)
#define RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13FD60)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int LittleGameCartographerIdentifier_TypeDefinitionIndex = 69564;

	struct alignas(4) LittleGameCartographerIdentifier
	{
		::System::UInt32 _FloorID_k__BackingField; // 0x10
		::System::UInt32 _SubMapID_k__BackingField; // 0x14
		::RPG::Client::VerseParam _VerseParam_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::VerseParam a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VerseParam, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean Equals(::RPG::Client::NavMap::LittleGameCartographerIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::LittleGameCartographerIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::NavMap::ICartographerIdentifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_EQUALS_2_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::NavMap::LittleGameCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::LittleGameCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::NavMap::LittleGameCartographerIdentifier a1, ::RPG::Client::NavMap::ICartographerIdentifier* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::LittleGameCartographerIdentifier, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_LITTLEGAMECARTOGRAPHERIDENTIFIER___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}
	};
}
