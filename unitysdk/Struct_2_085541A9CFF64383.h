#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class Object; }

#define STRUCT_2_085541A9CFF64383_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BCCDE0)
#define STRUCT_2_085541A9CFF64383_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCCD80)
#define STRUCT_2_085541A9CFF64383_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCCE70)
#define STRUCT_2_085541A9CFF64383_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x2BCCD20)
#define STRUCT_2_085541A9CFF64383_METHOD_2_B1927CDB601FF21A_1_OFFSET UNITYSDK_OFFSET(0x144232C0)
#define STRUCT_2_085541A9CFF64383_METHOD_2_B1927CDB601FF21A_OFFSET UNITYSDK_OFFSET(0x14423220)
#define STRUCT_2_085541A9CFF64383__CTOR_OFFSET UNITYSDK_OFFSET(0x2BCCCF0)
#define STRUCT_2_085541A9CFF64383___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2BCCED0)
#define STRUCT_2_085541A9CFF64383___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2BCCF10)

inline static constexpr unsigned int Struct_2_085541A9CFF64383_TypeDefinitionIndex = 64804;

struct alignas(4) Struct_2_085541A9CFF64383
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadEntryInfo*))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_085541A9CFF64383 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_EQUALS_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B1927CDB601FF21A(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_METHOD_2_B1927CDB601FF21A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_B1927CDB601FF21A_1(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_METHOD_2_B1927CDB601FF21A_1_OFFSET))(a1, a2);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_085541A9CFF64383___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
