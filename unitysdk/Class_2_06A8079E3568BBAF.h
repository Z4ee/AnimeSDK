#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_06A8079E3568BBAF_Class_2_2B602212A93D4F85;
class Class_2_06A8079E3568BBAF_Class_2_521C8EA205BC76E7;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_06A8079E3568BBAF_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x12AF2020)
#define CLASS_2_06A8079E3568BBAF_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12AF2220)
#define CLASS_2_06A8079E3568BBAF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12AF2310)
#define CLASS_2_06A8079E3568BBAF__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF2300)

inline static constexpr unsigned int Class_2_06A8079E3568BBAF_TypeDefinitionIndex = 69249;

class Class_2_06A8079E3568BBAF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::Animation* Field_2_5; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_06A8079E3568BBAF_Class_2_2B602212A93D4F85*>* Field_2_2; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_06A8079E3568BBAF_Class_2_521C8EA205BC76E7*>* Field_2_1; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06A8079E3568BBAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06A8079E3568BBAF_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06A8079E3568BBAF_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06A8079E3568BBAF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
