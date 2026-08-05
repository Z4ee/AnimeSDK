#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_4EDA575FCAA5A3FD_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x142CBF30)
#define CLASS_3_4EDA575FCAA5A3FD_METHOD_3_7725710404171522_OFFSET UNITYSDK_OFFSET(0x142CC090)
#define CLASS_3_4EDA575FCAA5A3FD_METHOD_3_B6A2D2418E5AA427_OFFSET UNITYSDK_OFFSET(0x142CC000)
#define CLASS_3_4EDA575FCAA5A3FD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142CC430)
#define CLASS_3_4EDA575FCAA5A3FD__CTOR_OFFSET UNITYSDK_OFFSET(0x142CC340)

inline static constexpr unsigned int Class_3_4EDA575FCAA5A3FD_TypeDefinitionIndex = 71077;

class Class_3_4EDA575FCAA5A3FD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EDA575FCAA5A3FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EDA575FCAA5A3FD_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_B6A2D2418E5AA427(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4EDA575FCAA5A3FD_METHOD_3_B6A2D2418E5AA427_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_7725710404171522(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Int32(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_4EDA575FCAA5A3FD_METHOD_3_7725710404171522_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4EDA575FCAA5A3FD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
