#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ContributionOwner.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_61420C2CA4EE5107_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BCD50)
#define STRUCT_2_61420C2CA4EE5107_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BCCA0)
#define STRUCT_2_61420C2CA4EE5107_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BCD60)
#define STRUCT_2_61420C2CA4EE5107_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x5AB0)
#define STRUCT_2_61420C2CA4EE5107_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x8A3A0)
#define STRUCT_2_61420C2CA4EE5107_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define STRUCT_2_61420C2CA4EE5107_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x6E30)
#define STRUCT_2_61420C2CA4EE5107__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCC70)

inline static constexpr unsigned int Struct_2_61420C2CA4EE5107_TypeDefinitionIndex = 62239;

struct alignas(8) Struct_2_61420C2CA4EE5107
{
	::System::String* _BlockName_k__BackingField; // 0x10
	::System::Int32 _RegionId_k__BackingField; // 0x18
	::RPG::Client::ContributionOwner _Owner_k__BackingField; // 0x1C
	::System::Int32 _Slot_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::RPG::Client::ContributionOwner a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::Client::ContributionOwner, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* get_BlockName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_GET_BLOCKNAME_OFFSET))(this);
	}

	::System::Int32 get_RegionId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_GET_REGIONID_OFFSET))(this);
	}

	::RPG::Client::ContributionOwner get_Owner()
	{
		return ((::RPG::Client::ContributionOwner(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_GET_OWNER_OFFSET))(this);
	}

	::System::Int32 get_Slot()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_GET_SLOT_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_61420C2CA4EE5107 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_61420C2CA4EE5107))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61420C2CA4EE5107_GETHASHCODE_OFFSET))(this);
	}
};
