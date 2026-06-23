#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_131;
class Class_3_757A5862D4BBEE41_1;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F21C1034B58C5050;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_182D3ACD3F800ED0_METHOD_1_2729D3B360887F1D_OFFSET UNITYSDK_OFFSET(0x105939D0)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x105931D0)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_CDB0B7A75D41AE31_OFFSET UNITYSDK_OFFSET(0x10593450)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_D2415833917175CC_OFFSET UNITYSDK_OFFSET(0x10593230)

inline static constexpr unsigned int Class_1_182D3ACD3F800ED0_TypeDefinitionIndex = 56041;

class Class_1_182D3ACD3F800ED0 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_49581DC19BD3C45B(::Class_3_F21C1034B58C5050* a1)
	{
		return ((::System::Boolean(*)(::Class_3_F21C1034B58C5050*))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::String* Method_1_D2415833917175CC(::Class_3_F21C1034B58C5050* a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_131* a3, ::Enum_3_C3F47346D3138590 a4)
	{
		return ((::System::String*(*)(::Class_3_F21C1034B58C5050*, ::System::Int32, ::Class_2_208CC9941471731A_131*, ::Enum_3_C3F47346D3138590))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_D2415833917175CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CDB0B7A75D41AE31(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_CDB0B7A75D41AE31_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2729D3B360887F1D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_F21C1034B58C5050* a2, ::Class_3_757A5862D4BBEE41_1* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_F21C1034B58C5050*, ::Class_3_757A5862D4BBEE41_1*))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_2729D3B360887F1D_OFFSET))(a1, a2, a3);
	}
};
