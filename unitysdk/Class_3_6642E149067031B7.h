#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_6642E149067031B7_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x185EEE30)
#define CLASS_3_6642E149067031B7_METHOD_3_6420BCE09A2E1435_OFFSET UNITYSDK_OFFSET(0x185EEF70)
#define CLASS_3_6642E149067031B7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185EF220)
#define CLASS_3_6642E149067031B7__CTOR_OFFSET UNITYSDK_OFFSET(0x185EF100)

inline static constexpr unsigned int Class_3_6642E149067031B7_TypeDefinitionIndex = 53759;

class Class_3_6642E149067031B7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int64>* Field_3_0; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int64>* Field_3_1; // 0x20
	::Class_4_B51FB35349ACD175<::System::Int64>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6642E149067031B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6642E149067031B7_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_6420BCE09A2E1435(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_6642E149067031B7_METHOD_3_6420BCE09A2E1435_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6642E149067031B7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
