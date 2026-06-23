#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_7C636A5911307F9C_1_METHOD_3_112EDABEE31E213B_OFFSET UNITYSDK_OFFSET(0xF5BEAC0)
#define CLASS_3_7C636A5911307F9C_1_METHOD_3_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0xF5BE6B0)
#define CLASS_3_7C636A5911307F9C_1_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xF5BE870)
#define CLASS_3_7C636A5911307F9C_1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xF5BEC90)
#define CLASS_3_7C636A5911307F9C_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF5BEA30)
#define CLASS_3_7C636A5911307F9C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF5BE510)

inline static constexpr unsigned int Class_3_7C636A5911307F9C_1_TypeDefinitionIndex = 56257;

class Class_3_7C636A5911307F9C_1 : public ::Class_2_BCA32DB678A03168
{
public:
	::MoleMole::Config::ValueCompareType Field_3_1; // 0x38
	::System::Int32 Field_3_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1_METHOD_3_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_112EDABEE31E213B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1_METHOD_3_112EDABEE31E213B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C636A5911307F9C_1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
