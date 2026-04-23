#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_1C2E929C5A8FFA20_OFFSET UNITYSDK_OFFSET(0x9658AF0)
#define CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9658960)
#define CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_D7DDA895983CCCB2_OFFSET UNITYSDK_OFFSET(0x96588F0)
#define CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_F6E6E622B53160EC_OFFSET UNITYSDK_OFFSET(0x96589B0)
#define CLASS_1_B4B6CE29D3ABB5E4__CTOR_OFFSET UNITYSDK_OFFSET(0x9658A40)

inline static constexpr unsigned int Class_1_B4B6CE29D3ABB5E4_TypeDefinitionIndex = 44379;

class Class_1_B4B6CE29D3ABB5E4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4B6CE29D3ABB5E4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7DDA895983CCCB2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_D7DDA895983CCCB2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_F6E6E622B53160EC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_F6E6E622B53160EC_OFFSET))(this);
	}

	::System::Void Method_1_1C2E929C5A8FFA20(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4B6CE29D3ABB5E4_METHOD_1_1C2E929C5A8FFA20_OFFSET))(this, a1, a2, a3);
	}
};
