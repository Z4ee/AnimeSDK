#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5AE7E3ABD8CE1131_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17A2F510)
#define CLASS_1_5AE7E3ABD8CE1131_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x17A2F4A0)
#define CLASS_1_5AE7E3ABD8CE1131_METHOD_1_F6E6E622B53160EC_OFFSET UNITYSDK_OFFSET(0x17A2F560)
#define CLASS_1_5AE7E3ABD8CE1131_METHOD_1_FA6EBCBE4ED9A4ED_OFFSET UNITYSDK_OFFSET(0x17A2F6A0)
#define CLASS_1_5AE7E3ABD8CE1131__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2F5F0)

inline static constexpr unsigned int Class_1_5AE7E3ABD8CE1131_TypeDefinitionIndex = 45843;

class Class_1_5AE7E3ABD8CE1131 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AE7E3ABD8CE1131__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5AE7E3ABD8CE1131_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AE7E3ABD8CE1131_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_F6E6E622B53160EC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AE7E3ABD8CE1131_METHOD_1_F6E6E622B53160EC_OFFSET))(this);
	}

	::System::Void Method_1_FA6EBCBE4ED9A4ED(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5AE7E3ABD8CE1131_METHOD_1_FA6EBCBE4ED9A4ED_OFFSET))(this, a1, a2, a3);
	}
};
