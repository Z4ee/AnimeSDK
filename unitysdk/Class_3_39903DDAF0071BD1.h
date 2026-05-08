#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_39903DDAF0071BD1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12ED1670)
#define CLASS_3_39903DDAF0071BD1_METHOD_3_556DB850615E0921_OFFSET UNITYSDK_OFFSET(0x12ED1820)
#define CLASS_3_39903DDAF0071BD1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12ED1B40)
#define CLASS_3_39903DDAF0071BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x12ED19E0)

inline static constexpr unsigned int Class_3_39903DDAF0071BD1_TypeDefinitionIndex = 38875;

class Class_3_39903DDAF0071BD1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_1; // 0x20
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39903DDAF0071BD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39903DDAF0071BD1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_556DB850615E0921(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_39903DDAF0071BD1_METHOD_3_556DB850615E0921_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39903DDAF0071BD1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
