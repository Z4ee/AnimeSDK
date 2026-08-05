#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_31DF33E20D72AA7F_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11BC8160)
#define CLASS_3_31DF33E20D72AA7F_METHOD_3_C1AC70DEDC81E328_OFFSET UNITYSDK_OFFSET(0x11BC82A0)
#define CLASS_3_31DF33E20D72AA7F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11BC84F0)
#define CLASS_3_31DF33E20D72AA7F__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC83D0)

inline static constexpr unsigned int Class_3_31DF33E20D72AA7F_TypeDefinitionIndex = 51706;

class Class_3_31DF33E20D72AA7F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_6; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31DF33E20D72AA7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31DF33E20D72AA7F_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_C1AC70DEDC81E328(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_31DF33E20D72AA7F_METHOD_3_C1AC70DEDC81E328_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31DF33E20D72AA7F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
