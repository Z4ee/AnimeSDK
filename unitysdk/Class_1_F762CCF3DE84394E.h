#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_5_A6F8D19602712D95;

#define CLASS_1_F762CCF3DE84394E_METHOD_1_50728125711E6890_OFFSET UNITYSDK_OFFSET(0x13427360)
#define CLASS_1_F762CCF3DE84394E_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x13427220)
#define CLASS_1_F762CCF3DE84394E_METHOD_1_E5450F0F4A0D17BE_OFFSET UNITYSDK_OFFSET(0x13426F00)
#define CLASS_1_F762CCF3DE84394E__CTOR_OFFSET UNITYSDK_OFFSET(0x13426EB0)

inline static constexpr unsigned int Class_1_F762CCF3DE84394E_TypeDefinitionIndex = 49730;

class Class_1_F762CCF3DE84394E : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_1480BFA419A4783B>* Field_1_1; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_0; // 0x18

	::System::Void _ctor(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_F762CCF3DE84394E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5450F0F4A0D17BE(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_F762CCF3DE84394E_METHOD_1_E5450F0F4A0D17BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F762CCF3DE84394E_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_50728125711E6890(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F762CCF3DE84394E_METHOD_1_50728125711E6890_OFFSET))(this, a1, a2);
	}
};
