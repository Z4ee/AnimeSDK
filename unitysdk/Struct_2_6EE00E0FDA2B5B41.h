#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_6C1FC337DC634BF6_OFFSET UNITYSDK_OFFSET(0xA8D2A60)
#define STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_AAE4B6CE8E6EDE94_OFFSET UNITYSDK_OFFSET(0x83A90)
#define STRUCT_2_6EE00E0FDA2B5B41__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8D2EA0)

inline static constexpr unsigned int Struct_2_6EE00E0FDA2B5B41_TypeDefinitionIndex = 53669;

struct alignas(4) Struct_2_6EE00E0FDA2B5B41
{
	static ::Struct_2_6EE00E0FDA2B5B41* StaticGet_Field_2_0()
	{
		return (::Struct_2_6EE00E0FDA2B5B41*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_6EE00E0FDA2B5B41_TypeDefinitionIndex)->GetStaticField(0x12660);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::System::Boolean Field_2_3; // 0x18
	::RPG::GameCore::ELevelPerformanceType Field_2_4; // 0x1C
	::System::Boolean Field_2_5; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_AAE4B6CE8E6EDE94(::Struct_2_6EE00E0FDA2B5B41& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6EE00E0FDA2B5B41&))((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_AAE4B6CE8E6EDE94_OFFSET))(this, a1);
	}

	static ::Struct_2_6EE00E0FDA2B5B41 Method_2_6C1FC337DC634BF6()
	{
		return ((::Struct_2_6EE00E0FDA2B5B41(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6EE00E0FDA2B5B41_METHOD_2_6C1FC337DC634BF6_OFFSET))();
	}
};
