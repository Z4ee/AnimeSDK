#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_C6D94156F1F8A94F_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x125570E0)
#define CLASS_3_C6D94156F1F8A94F_METHOD_3_6C9F6034898E90A6_OFFSET UNITYSDK_OFFSET(0x125571B0)
#define CLASS_3_C6D94156F1F8A94F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12557360)
#define CLASS_3_C6D94156F1F8A94F__CTOR_OFFSET UNITYSDK_OFFSET(0x12557270)

inline static constexpr unsigned int Class_3_C6D94156F1F8A94F_TypeDefinitionIndex = 72944;

class Class_3_C6D94156F1F8A94F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_6C9F6034898E90A6(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_6C9F6034898E90A6_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6D94156F1F8A94F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
