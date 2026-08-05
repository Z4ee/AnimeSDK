#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_8F59451A0EABDEAB_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x106A1F90)
#define CLASS_3_8F59451A0EABDEAB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x106A2640)
#define CLASS_3_8F59451A0EABDEAB_METHOD_3_EAF52FA690F5978F_OFFSET UNITYSDK_OFFSET(0x106A2140)
#define CLASS_3_8F59451A0EABDEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x106A24E0)

inline static constexpr unsigned int Class_3_8F59451A0EABDEAB_TypeDefinitionIndex = 81169;

class Class_3_8F59451A0EABDEAB : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_1; // 0x28
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F59451A0EABDEAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F59451A0EABDEAB_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_EAF52FA690F5978F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_8F59451A0EABDEAB_METHOD_3_EAF52FA690F5978F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F59451A0EABDEAB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
