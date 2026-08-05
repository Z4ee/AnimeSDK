#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F395B609880F65.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_58D80863D363BCEA_METHOD_4_0DDBF47B2E66D868_OFFSET UNITYSDK_OFFSET(0x1F238260)
#define CLASS_4_58D80863D363BCEA_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1F237E20)
#define CLASS_4_58D80863D363BCEA_METHOD_4_912AFC1299B0A806_OFFSET UNITYSDK_OFFSET(0x1F238460)
#define CLASS_4_58D80863D363BCEA_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1F237DD0)
#define CLASS_4_58D80863D363BCEA_METHOD_4_B1A69E2C25BECA05_OFFSET UNITYSDK_OFFSET(0x1F238690)
#define CLASS_4_58D80863D363BCEA_METHOD_4_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x1F2384B0)
#define CLASS_4_58D80863D363BCEA_METHOD_4_C633DD8C11B62AC7_OFFSET UNITYSDK_OFFSET(0x1F238EF0)
#define CLASS_4_58D80863D363BCEA_METHOD_4_C762B09F1D70312B_OFFSET UNITYSDK_OFFSET(0x1F238CB0)
#define CLASS_4_58D80863D363BCEA_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1F2381C0)
#define CLASS_4_58D80863D363BCEA_METHOD_4_F6B0F185EFA8CA54_OFFSET UNITYSDK_OFFSET(0x1F238AA0)
#define CLASS_4_58D80863D363BCEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F237FF0)

inline static constexpr unsigned int Class_4_58D80863D363BCEA_TypeDefinitionIndex = 93234;

class Class_4_58D80863D363BCEA : public ::Class_3_C6F395B609880F65
{
public:
	// static const ::System::Int32 Field_4_1 = 0x48; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_4_5; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_4_6; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_4_7; // 0x80
	::UnityEngine::Animator* Field_4_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_0DDBF47B2E66D868(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_0DDBF47B2E66D868_OFFSET))(this, a1, a2);
	}

	::Class_4_58D80863D363BCEA* Method_4_912AFC1299B0A806()
	{
		return ((::Class_4_58D80863D363BCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_912AFC1299B0A806_OFFSET))(this);
	}

	::System::Void Method_4_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_B892007B9247C983_OFFSET))(this, a1);
	}

	::System::Void Method_4_B1A69E2C25BECA05(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_B1A69E2C25BECA05_OFFSET))(this, a1);
	}

	::System::Void Method_4_F6B0F185EFA8CA54(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_F6B0F185EFA8CA54_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_C762B09F1D70312B(::Class_4_58D80863D363BCEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_58D80863D363BCEA*))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_C762B09F1D70312B_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_C633DD8C11B62AC7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58D80863D363BCEA_METHOD_4_C633DD8C11B62AC7_OFFSET))(this);
	}
};
