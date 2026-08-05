#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_E0F957F7AD833F89_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x1C3CBC00)
#define CLASS_3_E0F957F7AD833F89_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3CC280)
#define CLASS_3_E0F957F7AD833F89_METHOD_3_D37C77CA65DB1760_OFFSET UNITYSDK_OFFSET(0x1C3CBEC0)
#define CLASS_3_E0F957F7AD833F89__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CC000)

inline static constexpr unsigned int Class_3_E0F957F7AD833F89_TypeDefinitionIndex = 41110;

class Class_3_E0F957F7AD833F89 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_7; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_5; // 0x28
	::Class_3_B537A0AA78803363* Field_3_11; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_6; // 0x40
	::Class_3_B537A0AA78803363* Field_3_10; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_D37C77CA65DB1760(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_D37C77CA65DB1760_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0F957F7AD833F89_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
