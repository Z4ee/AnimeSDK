#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_860E9D46445B69C0_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18E90FB0)
#define CLASS_2_860E9D46445B69C0_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x18E90D90)
#define CLASS_2_860E9D46445B69C0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18E910A0)
#define CLASS_2_860E9D46445B69C0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E91090)

inline static constexpr unsigned int Class_2_860E9D46445B69C0_TypeDefinitionIndex = 53224;

class Class_2_860E9D46445B69C0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::Animation* Field_2_1; // 0x30
	::UnityEngine::Animation* Field_2_11; // 0x38
	::UnityEngine::Animation* Field_2_10; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48
	::UnityEngine::Transform* Field_2_5; // 0x50
	::UnityEngine::Animation* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860E9D46445B69C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_860E9D46445B69C0_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_860E9D46445B69C0_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_860E9D46445B69C0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
