#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_7ED9ADA508F0F9D1_METHOD_1_57DE2184B124C5D6_OFFSET UNITYSDK_OFFSET(0xB15B4D0)
#define CLASS_1_7ED9ADA508F0F9D1_METHOD_1_663E7A0F03579613_OFFSET UNITYSDK_OFFSET(0xB15B220)
#define CLASS_1_7ED9ADA508F0F9D1_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB15B700)
#define CLASS_1_7ED9ADA508F0F9D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB15B4C0)

inline static constexpr unsigned int Class_1_7ED9ADA508F0F9D1_TypeDefinitionIndex = 68224;

class Class_1_7ED9ADA508F0F9D1 : public ::System::Object
{
public:
	::System::Int32 FFNBLDFFMCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ED9ADA508F0F9D1__CTOR_OFFSET))(this);
	}

	static ::Class_1_7ED9ADA508F0F9D1* Method_1_663E7A0F03579613(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_7ED9ADA508F0F9D1*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_7ED9ADA508F0F9D1_METHOD_1_663E7A0F03579613_OFFSET))(a1);
	}

	static ::Class_1_7ED9ADA508F0F9D1* Method_1_57DE2184B124C5D6(::UnityEngine::Rect a1)
	{
		return ((::Class_1_7ED9ADA508F0F9D1*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_7ED9ADA508F0F9D1_METHOD_1_57DE2184B124C5D6_OFFSET))(a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7ED9ADA508F0F9D1_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}
};
