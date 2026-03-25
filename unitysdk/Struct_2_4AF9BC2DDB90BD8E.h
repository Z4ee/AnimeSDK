#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4AF9BC2DDB90BD8E_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x78D50)

inline static constexpr unsigned int Struct_2_4AF9BC2DDB90BD8E_TypeDefinitionIndex = 45274;

struct alignas(8) Struct_2_4AF9BC2DDB90BD8E
{
	::RPG::GameCore::FixVec2 Field_2_0; // 0x10

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4AF9BC2DDB90BD8E_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}
};
