#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1AA0E1B1295C95C3.h"
#include "unitysdk/Struct_2_3D6D754C9B726174.h"
#include "unitysdk/Struct_2_7BA477DE2EA30D4D.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_216432E2D686659F_METHOD_2_B1229B44FC1F03CE_OFFSET UNITYSDK_OFFSET(0x19950500)
#define STRUCT_2_216432E2D686659F_METHOD_2_CD96C1430E68086B_OFFSET UNITYSDK_OFFSET(0x19950470)
#define STRUCT_2_216432E2D686659F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A55F0)

inline static constexpr unsigned int Struct_2_216432E2D686659F_TypeDefinitionIndex = 51320;

struct alignas(4) Struct_2_216432E2D686659F
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_7; // 0x14
	::Struct_2_7BA477DE2EA30D4D Field_2_6; // 0x18
	::Struct_2_1AA0E1B1295C95C3 Field_2_5; // 0x38
	::Struct_2_3D6D754C9B726174 Field_2_4; // 0x78

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::Struct_2_7BA477DE2EA30D4D& a3, ::Struct_2_1AA0E1B1295C95C3& a4, ::Struct_2_3D6D754C9B726174& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::Struct_2_7BA477DE2EA30D4D&, ::Struct_2_1AA0E1B1295C95C3&, ::Struct_2_3D6D754C9B726174&))((::PBYTE)hIl2Cpp + STRUCT_2_216432E2D686659F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Struct_2_216432E2D686659F Method_2_CD96C1430E68086B(::System::Int32 a1)
	{
		return ((::Struct_2_216432E2D686659F(*)(::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_216432E2D686659F_METHOD_2_CD96C1430E68086B_OFFSET))(a1);
	}

	static ::Struct_2_216432E2D686659F Method_2_B1229B44FC1F03CE(::System::Int32 a1, ::Struct_2_7BA477DE2EA30D4D& a2, ::Struct_2_1AA0E1B1295C95C3& a3, ::Struct_2_3D6D754C9B726174& a4)
	{
		return ((::Struct_2_216432E2D686659F(*)(::System::Int32, ::Struct_2_7BA477DE2EA30D4D&, ::Struct_2_1AA0E1B1295C95C3&, ::Struct_2_3D6D754C9B726174&))((::PBYTE)hIl2Cpp + STRUCT_2_216432E2D686659F_METHOD_2_B1229B44FC1F03CE_OFFSET))(a1, a2, a3, a4);
	}
};
