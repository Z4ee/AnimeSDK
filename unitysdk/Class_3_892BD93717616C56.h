#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_892BD93717616C56_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x104F1010)
#define CLASS_3_892BD93717616C56_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x104F1380)
#define CLASS_3_892BD93717616C56_METHOD_3_FCA7C739F8E5F729_OFFSET UNITYSDK_OFFSET(0x104F1150)
#define CLASS_3_892BD93717616C56__CTOR_OFFSET UNITYSDK_OFFSET(0x104F1280)

inline static constexpr unsigned int Class_3_892BD93717616C56_TypeDefinitionIndex = 50431;

class Class_3_892BD93717616C56 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_892BD93717616C56__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_892BD93717616C56_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_FCA7C739F8E5F729(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_892BD93717616C56_METHOD_3_FCA7C739F8E5F729_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_892BD93717616C56_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
