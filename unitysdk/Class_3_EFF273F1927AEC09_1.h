#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_181A1719E25F6167.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class Class_2_00CA65E821B3E470;
class Class_2_208CC9941471731A_418;

#define CLASS_3_EFF273F1927AEC09_1_METHOD_3_A8B87790E8D0075F_OFFSET UNITYSDK_OFFSET(0x1465DEF0)
#define CLASS_3_EFF273F1927AEC09_1_METHOD_3_B02D8226476E5CE5_OFFSET UNITYSDK_OFFSET(0x1465DD70)
#define CLASS_3_EFF273F1927AEC09_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1465DD60)

inline static constexpr unsigned int Class_3_EFF273F1927AEC09_1_TypeDefinitionIndex = 44384;

class Class_3_EFF273F1927AEC09_1 : public ::Class_2_181A1719E25F6167
{
public:
	::System::Void _ctor(::Class_2_208CC9941471731A_418* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_418*))((::PBYTE)hIl2Cpp + CLASS_3_EFF273F1927AEC09_1__CTOR_OFFSET))(this, a1);
	}

	::Class_2_00CA65E821B3E470* Method_3_B02D8226476E5CE5(::NodeGraph::VariantUnion a1, ::System::Int32 a2)
	{
		return ((::Class_2_00CA65E821B3E470*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EFF273F1927AEC09_1_METHOD_3_B02D8226476E5CE5_OFFSET))(this, a1, a2);
	}

	::Class_2_00CA65E821B3E470* Method_3_A8B87790E8D0075F(::NodeGraph::VariantUnion a1, ::System::Int32 a2)
	{
		return ((::Class_2_00CA65E821B3E470*(*)(::PVOID, ::NodeGraph::VariantUnion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EFF273F1927AEC09_1_METHOD_3_A8B87790E8D0075F_OFFSET))(this, a1, a2);
	}
};
