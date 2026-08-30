#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex_UnionKind.h"
#include "unitysdk/System/ValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET UNITYSDK_OFFSET(0x157830)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET UNITYSDK_OFFSET(0xDF31DE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0xDF3A070)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x157900)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x157850)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xDF41570)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1578E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0x1577C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_HTTPID_OFFSET UNITYSDK_OFFSET(0x157770)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET UNITYSDK_OFFSET(0x1577E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDF40FA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDF410E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET UNITYSDK_OFFSET(0x1577D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET UNITYSDK_OFFSET(0x157790)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET UNITYSDK_OFFSET(0x157920)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1578F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF41780)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefUnionIndex_TypeDefinitionIndex = 67543;

	struct alignas(4) RogueTournBuildRefUnionIndex
	{
		static ::RPG::Client::RogueTournBuildRefUnionIndex* StaticGet_Empty()
		{
			return (::RPG::Client::RogueTournBuildRefUnionIndex*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefUnionIndex_TypeDefinitionIndex)->GetStaticField(0x7710);
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

		::System::Void set_HttpId(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_HTTPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ArchiveSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GET_ARCHIVESLOTID_OFFSET))(this);
		}

		::System::Void set_ArchiveSlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_SET_ARCHIVESLOTID_OFFSET))(this, a1);
		}

		::System::Boolean IsKind(::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex_UnionKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_ISKIND_OFFSET))(this, a1);
		}

		::System::Int32 CompareToForSort(::RPG::Client::RogueTournBuildRefUnionIndex a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_COMPARETOFORSORT_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateHttpId(::RPG::Client::MongoObjectId a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATEHTTPID_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex CreateShareCodeArchiveSlotId(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_CREATESHARECODEARCHIVESLOTID_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::RPG::Client::RogueTournBuildRefUnionIndex a1, ::RPG::Client::RogueTournBuildRefUnionIndex a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::RogueTournBuildRefUnionIndex a1, ::RPG::Client::RogueTournBuildRefUnionIndex a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefUnionIndex, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals_1(::RPG::Client::RogueTournBuildRefUnionIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournBuildRefUnionIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void ToBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_TOBINARY_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournBuildRefUnionIndex FromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFUNIONINDEX_FROMBINARY_OFFSET))(a1);
		}
	};
}
