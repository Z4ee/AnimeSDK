#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_320026A746EA2182_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12AB69A0)
#define CLASS_4_320026A746EA2182_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12AB6D40)
#define CLASS_4_320026A746EA2182_METHOD_4_27FB16C4EF1F8F78_OFFSET UNITYSDK_OFFSET(0x12AB6AF0)
#define CLASS_4_320026A746EA2182__CTOR_OFFSET UNITYSDK_OFFSET(0x12AB6C10)

inline static constexpr unsigned int Class_4_320026A746EA2182_TypeDefinitionIndex = 58483;

class Class_4_320026A746EA2182 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_4_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_27FB16C4EF1F8F78(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_27FB16C4EF1F8F78_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_320026A746EA2182_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
