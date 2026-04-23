#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex_UnionKind.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET UNITYSDK_OFFSET(0xDDA70)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET UNITYSDK_OFFSET(0xB0A7570)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xB0AF780)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDDB50)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0xDDA90)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xB0B7870)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDDB30)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xDDA00)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_HTTPID_OFFSET UNITYSDK_OFFSET(0xDD9B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET UNITYSDK_OFFSET(0xDDA20)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB0B72A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB0B73E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xDDA10)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET UNITYSDK_OFFSET(0xDD9D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET UNITYSDK_OFFSET(0xDDB70)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDDB40)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0B7A80)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xDDBE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDDC20)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDDB80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefUnionIndex_TypeDefinitionIndex = 62247;

	struct alignas(4) RogueTournBuildRefUnionIndex
	{
		static ::RPG::Client::RogueTournBuildRefUnionIndex* StaticGet_Empty()
		{
			return (::RPG::Client::RogueTournBuildRefUnionIndex*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefUnionIndex_TypeDefinitionIndex)->GetStaticField(0x6890);
		}
		::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind Kind; // 0x10
		::RPG::Client::MongoObjectId _HttpId; // 0x14
		::System::UInt32 _ArchiveSlotId; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX__CCTOR_OFFSET))();
		}

		::RPG::Client::MongoObjectId get_HttpId()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_HTTPID_OFFSET))(this);
		}

		::System::Void set_HttpId(::RPG::Client::MongoObjectId value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET))(this, value);
		}

		::System::UInt32 get_ArchiveSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET))(this, value);
		}

		::System::Boolean IsKind(::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind kind)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET))(this, kind);
		}

		::System::Int32 CompareToForSort(::RPG::Client::RogueTournBuildRefUnionIndex other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET))(this, other);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateHttpId(::RPG::Client::MongoObjectId id)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET))(id);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateShareCodeArchiveSlotId(::System::UInt32 slotId)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET))(slotId);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournBuildRefUnionIndex lhs, ::RPG::Client::RogueTournBuildRefUnionIndex rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournBuildRefUnionIndex lhs, ::RPG::Client::RogueTournBuildRefUnionIndex rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournBuildRefUnionIndex other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET))(this, other);
		}

		::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* buf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET))(this, buf);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex FromBinary(::Class_1_7A22A3DBEEDD1F80* buf)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET))(buf);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
