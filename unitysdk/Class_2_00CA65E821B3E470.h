#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EA8435E138F2E03.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class Class_2_208CC9941471731A_286;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_2_00CA65E821B3E470_METHOD_2_18E5AEBA7B994518_OFFSET UNITYSDK_OFFSET(0x10DB60B0)
#define CLASS_2_00CA65E821B3E470_METHOD_2_1D54615E03D2FCC5_OFFSET UNITYSDK_OFFSET(0x10DB6240)
#define CLASS_2_00CA65E821B3E470_METHOD_2_6E1B7843622BB8BD_OFFSET UNITYSDK_OFFSET(0x10DB5EE0)
#define CLASS_2_00CA65E821B3E470_METHOD_2_A07BC9887E08649F_OFFSET UNITYSDK_OFFSET(0x10DB5FB0)
#define CLASS_2_00CA65E821B3E470_METHOD_2_FAC02F8494EF897F_OFFSET UNITYSDK_OFFSET(0x10DB60A0)
#define CLASS_2_00CA65E821B3E470__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB5E50)

inline static constexpr unsigned int Class_2_00CA65E821B3E470_TypeDefinitionIndex = 43629;

class Class_2_00CA65E821B3E470 : public ::Class_1_1EA8435E138F2E03
{
public:
	::System::Int32 Field_2_0; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6E1B7843622BB8BD(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470_METHOD_2_6E1B7843622BB8BD_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_A07BC9887E08649F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470_METHOD_2_A07BC9887E08649F_OFFSET))(this);
	}

	::System::Void Method_2_FAC02F8494EF897F(::Class_1_1EA8435E138F2E03* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470_METHOD_2_FAC02F8494EF897F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18E5AEBA7B994518(::Class_2_208CC9941471731A_286* a1, ::NodeGraph::VariantUnion a2, ::System::Int32 a3, ::System::Func_3<::NodeGraph::VariantUnion, ::System::Int32, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_286*, ::NodeGraph::VariantUnion, ::System::Int32, ::System::Func_3<::NodeGraph::VariantUnion, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470_METHOD_2_18E5AEBA7B994518_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_1D54615E03D2FCC5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00CA65E821B3E470_METHOD_2_1D54615E03D2FCC5_OFFSET))(this);
	}
};
