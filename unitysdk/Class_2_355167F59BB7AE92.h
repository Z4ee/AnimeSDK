#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AF7185FBAAE5D87.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_355167F59BB7AE92_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE61410)
#define CLASS_2_355167F59BB7AE92_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBE61480)
#define CLASS_2_355167F59BB7AE92_METHOD_2_7B1731A526C5DE24_OFFSET UNITYSDK_OFFSET(0xBE61370)
#define CLASS_2_355167F59BB7AE92_METHOD_2_87375D215A44A0D7_OFFSET UNITYSDK_OFFSET(0xBE614F0)
#define CLASS_2_355167F59BB7AE92_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0xBE61E10)
#define CLASS_2_355167F59BB7AE92_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xBE61DB0)
#define CLASS_2_355167F59BB7AE92__CTOR_OFFSET UNITYSDK_OFFSET(0xBE61E70)

inline static constexpr unsigned int Class_2_355167F59BB7AE92_TypeDefinitionIndex = 78327;

class Class_2_355167F59BB7AE92 : public ::Class_1_4AF7185FBAAE5D87
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HCNNBPNNLKK; // 0x20
	::System::Single HBDJCFFDGDD; // 0x28
	::System::Single CEIBKEBGAGI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7B1731A526C5DE24(::System::Action* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_METHOD_2_7B1731A526C5DE24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_87375D215A44A0D7(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_METHOD_2_87375D215A44A0D7_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_355167F59BB7AE92_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}
};
