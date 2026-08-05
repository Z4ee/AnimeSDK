#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_670AC8E9FAE34B3B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18DD6DC0)
#define CLASS_2_670AC8E9FAE34B3B_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x18DD6D00)
#define CLASS_2_670AC8E9FAE34B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD6DB0)

inline static constexpr unsigned int Class_2_670AC8E9FAE34B3B_TypeDefinitionIndex = 67490;

class Class_2_670AC8E9FAE34B3B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_7; // 0x18
	::UnityEngine::Animation* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_670AC8E9FAE34B3B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_670AC8E9FAE34B3B_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_670AC8E9FAE34B3B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
