#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class UGUIMeshRender;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7D65EA87A8CD817B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139812D0)
#define CLASS_2_7D65EA87A8CD817B_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x139811A0)
#define CLASS_2_7D65EA87A8CD817B__CTOR_OFFSET UNITYSDK_OFFSET(0x139812C0)

inline static constexpr unsigned int Class_2_7D65EA87A8CD817B_TypeDefinitionIndex = 42593;

class Class_2_7D65EA87A8CD817B : public ::Class_1_EEA0111A28582B57
{
public:
	::UGUIMeshRender* Field_2_5; // 0x18
	::UGUIMeshRender* Field_2_6; // 0x20
	::UGUIMeshRender* Field_2_7; // 0x28
	::UGUIMeshRender* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::UGUIMeshRender* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D65EA87A8CD817B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D65EA87A8CD817B_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D65EA87A8CD817B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
