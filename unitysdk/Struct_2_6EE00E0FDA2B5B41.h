#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_2FB78D70BE18AC6E_OFFSET UNITYSDK_OFFSET(0x15CCD280)
#define STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_AAE4B6CE8E6EDE94_OFFSET UNITYSDK_OFFSET(0x3A426C0)
#define STRUCT_2_6EE00E0FDA2B5B41__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CCD6C0)

inline static constexpr unsigned int Struct_2_6EE00E0FDA2B5B41_TypeDefinitionIndex = 57612;

struct alignas(4) Struct_2_6EE00E0FDA2B5B41
{
	static ::Struct_2_6EE00E0FDA2B5B41* StaticGet_HGLIFJGHADE()
	{
		return (::Struct_2_6EE00E0FDA2B5B41*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6EE00E0FDA2B5B41_TypeDefinitionIndex)->GetStaticField(0x111B0);
	}
	::System::Int32 PLLLPAOABLC; // 0x10
	::System::UInt32 MMPDHHIKGLJ; // 0x14
	::System::Boolean BNCGDPKJLPL; // 0x18
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x1C
	::System::Boolean BCAMNPDLBNM; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_AAE4B6CE8E6EDE94(::Struct_2_6EE00E0FDA2B5B41& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6EE00E0FDA2B5B41&))((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_AAE4B6CE8E6EDE94_OFFSET))(this, a1);
	}

	static ::Struct_2_6EE00E0FDA2B5B41 Method_2_2FB78D70BE18AC6E()
	{
		return ((::Struct_2_6EE00E0FDA2B5B41(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_2FB78D70BE18AC6E_OFFSET))();
	}
};
