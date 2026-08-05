#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8BCF12F60126D55B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1820CB20)
#define CLASS_2_8BCF12F60126D55B_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1820CA20)
#define CLASS_2_8BCF12F60126D55B__CTOR_OFFSET UNITYSDK_OFFSET(0x1820CB10)

inline static constexpr unsigned int Class_2_8BCF12F60126D55B_TypeDefinitionIndex = 81634;

class Class_2_8BCF12F60126D55B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UIControllerExtensionData* Field_2_7; // 0x28
	::UnityEngine::Animator* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BCF12F60126D55B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8BCF12F60126D55B_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8BCF12F60126D55B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
