#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8DB0BC4CF3861904_METHOD_1_3458E7DE1AF1FE2A_OFFSET UNITYSDK_OFFSET(0x1F025B90)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_80DF46C42707023E_OFFSET UNITYSDK_OFFSET(0x1F026240)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_BEC12EEECDA20EB4_OFFSET UNITYSDK_OFFSET(0x1F025EF0)
#define CLASS_1_8DB0BC4CF3861904_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1F026130)
#define CLASS_1_8DB0BC4CF3861904__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F025B10)
#define CLASS_1_8DB0BC4CF3861904__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F025A90)
#define CLASS_1_8DB0BC4CF3861904__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0259E0)

inline static constexpr unsigned int Class_1_8DB0BC4CF3861904_TypeDefinitionIndex = 7847;

class Class_1_8DB0BC4CF3861904 : public ::System::Object
{
public:
	static ::System::Random** StaticGet_Field_1_5()
	{
		return (::System::Random**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DB0BC4CF3861904_TypeDefinitionIndex)->GetStaticField(0x7470);
	}
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x18
	::System::Int32 Field_1_7; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Byte>* Method_1_3458E7DE1AF1FE2A(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_3458E7DE1AF1FE2A_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_BEC12EEECDA20EB4(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_BEC12EEECDA20EB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_80DF46C42707023E(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_8DB0BC4CF3861904_METHOD_1_80DF46C42707023E_OFFSET))(this, a1);
	}
};
