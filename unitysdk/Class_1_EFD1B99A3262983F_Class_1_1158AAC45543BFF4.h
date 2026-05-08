#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32770405D1E18A2A.h"
#include "unitysdk/System/Object.h"

class Class_1_EFD1B99A3262983F;
namespace MoleMole { class ServerListInfo; }

#define CLASS_1_EFD1B99A3262983F_CLASS_1_1158AAC45543BFF4_METHOD_1_A7035ECAF0F434D7_OFFSET UNITYSDK_OFFSET(0x11AA5980)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_1158AAC45543BFF4__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA5970)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F_Class_1_1158AAC45543BFF4_TypeDefinitionIndex = 79251;

class Class_1_EFD1B99A3262983F_Class_1_1158AAC45543BFF4 : public ::System::Object
{
public:
	::MoleMole::ServerListInfo* Field_1_0; // 0x10
	::Class_1_EFD1B99A3262983F* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_1158AAC45543BFF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7035ECAF0F434D7(::Struct_2_32770405D1E18A2A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_32770405D1E18A2A))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_1158AAC45543BFF4_METHOD_1_A7035ECAF0F434D7_OFFSET))(this, a1);
	}
};
