#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_223FAB74A6BBF02E_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x159C17B0)
#define CLASS_3_223FAB74A6BBF02E_METHOD_3_17040E9C6A729799_OFFSET UNITYSDK_OFFSET(0x159C18F0)
#define CLASS_3_223FAB74A6BBF02E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159C1C30)
#define CLASS_3_223FAB74A6BBF02E__CTOR_OFFSET UNITYSDK_OFFSET(0x159C1B30)

inline static constexpr unsigned int Class_3_223FAB74A6BBF02E_TypeDefinitionIndex = 70830;

class Class_3_223FAB74A6BBF02E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_223FAB74A6BBF02E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_223FAB74A6BBF02E_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_17040E9C6A729799(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_223FAB74A6BBF02E_METHOD_3_17040E9C6A729799_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_223FAB74A6BBF02E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
