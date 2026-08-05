#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7BFFFE198B5C5FA5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1375DAE0)
#define CLASS_2_7BFFFE198B5C5FA5_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1375D9A0)
#define CLASS_2_7BFFFE198B5C5FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1375DAD0)

inline static constexpr unsigned int Class_2_7BFFFE198B5C5FA5_TypeDefinitionIndex = 83526;

class Class_2_7BFFFE198B5C5FA5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::Light* Field_2_6; // 0x20
	::UnityEngine::Light* Field_2_5; // 0x28
	::UnityEngine::Light* Field_2_7; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::UnityEngine::Light* Field_2_4; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BFFFE198B5C5FA5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BFFFE198B5C5FA5_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BFFFE198B5C5FA5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
