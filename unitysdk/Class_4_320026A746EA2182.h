#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_320026A746EA2182_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1413A800)
#define CLASS_4_320026A746EA2182_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1413ABA0)
#define CLASS_4_320026A746EA2182_METHOD_4_27FB16C4EF1F8F78_OFFSET UNITYSDK_OFFSET(0x1413A950)
#define CLASS_4_320026A746EA2182__CTOR_OFFSET UNITYSDK_OFFSET(0x1413AA70)

inline static constexpr unsigned int Class_4_320026A746EA2182_TypeDefinitionIndex = 57568;

class Class_4_320026A746EA2182 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_4_1; // 0x30
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_4_2; // 0x38

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
