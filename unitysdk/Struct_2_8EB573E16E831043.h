#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8EB573E16E831043_METHOD_2_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x8BAD0)

inline static constexpr unsigned int Struct_2_8EB573E16E831043_TypeDefinitionIndex = 56422;

struct alignas(8) Struct_2_8EB573E16E831043
{
	::RPG::GameCore::FixPoint ANLELHFADEA; // 0x10
	::System::Boolean DELKCOOACNI; // 0x18
	::System::Boolean CLJPKHNNCIC; // 0x19
	::System::Int32 NALMBOOCCIN; // 0x1C
	::System::Int32 DOLABMMBADH; // 0x20
	::System::Int32 HOCLANAJNII; // 0x24

	::System::Int32 Method_2_0D3CEA11284B35A1(::Struct_2_8EB573E16E831043 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_8EB573E16E831043))((::PBYTE)hIl2Cpp + STRUCT_2_8EB573E16E831043_METHOD_2_0D3CEA11284B35A1_OFFSET))(this, a1);
	}
};
