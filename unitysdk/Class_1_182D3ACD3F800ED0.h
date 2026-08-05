#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_477;
class Class_3_757A5862D4BBEE41;
class Class_3_C93CC3D2C2AC4067;
class Class_3_F21C1034B58C5050;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_182D3ACD3F800ED0_METHOD_1_2729D3B360887F1D_OFFSET UNITYSDK_OFFSET(0x11B5B860)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_49581DC19BD3C45B_OFFSET UNITYSDK_OFFSET(0x11B5B800)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_7AFB4E439E93D82E_OFFSET UNITYSDK_OFFSET(0x11B5BDD0)
#define CLASS_1_182D3ACD3F800ED0_METHOD_1_D2415833917175CC_OFFSET UNITYSDK_OFFSET(0x11B5B5F0)

inline static constexpr unsigned int Class_1_182D3ACD3F800ED0_TypeDefinitionIndex = 86768;

class Class_1_182D3ACD3F800ED0 : public ::System::Object
{
public:
	static ::System::String* Method_1_D2415833917175CC(::Class_3_F21C1034B58C5050* a1, ::System::Int32 a2, ::Class_2_208CC9941471731A_477* a3, ::Enum_3_C3F47346D3138590 a4)
	{
		return ((::System::String*(*)(::Class_3_F21C1034B58C5050*, ::System::Int32, ::Class_2_208CC9941471731A_477*, ::Enum_3_C3F47346D3138590))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_D2415833917175CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_49581DC19BD3C45B(::Class_3_F21C1034B58C5050* a1)
	{
		return ((::System::Boolean(*)(::Class_3_F21C1034B58C5050*))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_49581DC19BD3C45B_OFFSET))(a1);
	}

	static ::System::Void Method_1_2729D3B360887F1D(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_F21C1034B58C5050* a2, ::Class_3_757A5862D4BBEE41* a3)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_F21C1034B58C5050*, ::Class_3_757A5862D4BBEE41*))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_2729D3B360887F1D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7AFB4E439E93D82E(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_182D3ACD3F800ED0_METHOD_1_7AFB4E439E93D82E_OFFSET))(a1, a2);
	}
};
