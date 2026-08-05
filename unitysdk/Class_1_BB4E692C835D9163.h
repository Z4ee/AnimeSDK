#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_1_BB4E692C835D9163_METHOD_1_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x1407F260)
#define CLASS_1_BB4E692C835D9163_METHOD_1_B14D2CC9D08BAA81_OFFSET UNITYSDK_OFFSET(0x1407FD40)
#define CLASS_1_BB4E692C835D9163_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x1407F850)
#define CLASS_1_BB4E692C835D9163_METHOD_1_C6400D0A6978E3C8_OFFSET UNITYSDK_OFFSET(0x1407F020)
#define CLASS_1_BB4E692C835D9163_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1407FD50)
#define CLASS_1_BB4E692C835D9163_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1407FD30)
#define CLASS_1_BB4E692C835D9163__CTOR_OFFSET UNITYSDK_OFFSET(0x1407EF80)

inline static constexpr unsigned int Class_1_BB4E692C835D9163_TypeDefinitionIndex = 79546;

class Class_1_BB4E692C835D9163 : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* Field_1_4; // 0x10
	::MoleMole::EntityHandle Field_1_7; // 0x18
	::System::Single Field_1_11; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_14; // 0x38
	::System::Single Field_1_10; // 0x44
	::UnityEngine::Vector3 Field_1_6; // 0x48
	::UnityEngine::Vector3 Field_1_15; // 0x54
	::System::Single Field_1_8; // 0x60
	::System::Boolean Field_1_13; // 0x64
	::System::Boolean Field_1_0; // 0x65
	::System::Single Field_1_9; // 0x68

	::System::Void _ctor(::MoleMole::EntityHandle a1, ::UnityEngine::Vector3 a2, ::FluffyUnderware::Curvy::CurvySpline* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_71170E420FCC0F61(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_71170E420FCC0F61_OFFSET))(this, a1);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C6400D0A6978E3C8(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_C6400D0A6978E3C8_OFFSET))(this, a1);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_1_B14D2CC9D08BAA81()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_B14D2CC9D08BAA81_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB4E692C835D9163_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
