#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_DE245EEAB102E67A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x115AC3F0)
#define CLASS_3_DE245EEAB102E67A_METHOD_3_E351E3690E895AE7_OFFSET UNITYSDK_OFFSET(0x115ABF30)
#define CLASS_3_DE245EEAB102E67A_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x115ABD30)
#define CLASS_3_DE245EEAB102E67A__CTOR_OFFSET UNITYSDK_OFFSET(0x115AC270)

inline static constexpr unsigned int Class_3_DE245EEAB102E67A_TypeDefinitionIndex = 61163;

class Class_3_DE245EEAB102E67A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_3; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_2; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE245EEAB102E67A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE245EEAB102E67A_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_E351E3690E895AE7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_DE245EEAB102E67A_METHOD_3_E351E3690E895AE7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DE245EEAB102E67A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
