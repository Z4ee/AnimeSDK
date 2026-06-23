#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_489F32D82235B6BA_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x163D2D50)
#define CLASS_2_489F32D82235B6BA_1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x163D2C90)
#define CLASS_2_489F32D82235B6BA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x163D2D40)

inline static constexpr unsigned int Class_2_489F32D82235B6BA_1_TypeDefinitionIndex = 49332;

class Class_2_489F32D82235B6BA_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Camera* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_489F32D82235B6BA_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_489F32D82235B6BA_1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_489F32D82235B6BA_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
