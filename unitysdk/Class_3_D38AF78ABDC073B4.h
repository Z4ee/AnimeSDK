#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_D38AF78ABDC073B4_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14079A80)
#define CLASS_3_D38AF78ABDC073B4_METHOD_3_9EC823C358D831A9_OFFSET UNITYSDK_OFFSET(0x14079BC0)
#define CLASS_3_D38AF78ABDC073B4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14079DB0)
#define CLASS_3_D38AF78ABDC073B4__CTOR_OFFSET UNITYSDK_OFFSET(0x14079C90)

inline static constexpr unsigned int Class_3_D38AF78ABDC073B4_TypeDefinitionIndex = 61639;

class Class_3_D38AF78ABDC073B4 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_0; // 0x20
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D38AF78ABDC073B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D38AF78ABDC073B4_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_9EC823C358D831A9(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D38AF78ABDC073B4_METHOD_3_9EC823C358D831A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D38AF78ABDC073B4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
