#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_19E0EB203766E944_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x159DB660)
#define CLASS_3_19E0EB203766E944_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159DBE80)
#define CLASS_3_19E0EB203766E944_METHOD_3_E7883D784175F545_OFFSET UNITYSDK_OFFSET(0x159DB8C0)
#define CLASS_3_19E0EB203766E944__CTOR_OFFSET UNITYSDK_OFFSET(0x159DBCC0)

inline static constexpr unsigned int Class_3_19E0EB203766E944_TypeDefinitionIndex = 51813;

class Class_3_19E0EB203766E944 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_3_4; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_3; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_E7883D784175F545(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_E7883D784175F545_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19E0EB203766E944_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
