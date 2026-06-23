#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_03377509F8FB607D_OFFSET UNITYSDK_OFFSET(0x14D41820)
#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x14D41670)
#define CLASS_3_B9BE7F696E3FB52C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D41B10)
#define CLASS_3_B9BE7F696E3FB52C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D419B0)

inline static constexpr unsigned int Class_3_B9BE7F696E3FB52C_TypeDefinitionIndex = 75467;

class Class_3_B9BE7F696E3FB52C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::System::Single>* Field_3_3; // 0x18
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_3_1; // 0x28
	::Class_4_B51FB35349ACD175<::System::Single>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_03377509F8FB607D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_03377509F8FB607D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9BE7F696E3FB52C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
