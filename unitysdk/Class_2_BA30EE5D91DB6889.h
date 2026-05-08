#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_BA30EE5D91DB6889_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1615F320)
#define CLASS_2_BA30EE5D91DB6889_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1615F500)
#define CLASS_2_BA30EE5D91DB6889_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1615F5F0)
#define CLASS_2_BA30EE5D91DB6889__CTOR_OFFSET UNITYSDK_OFFSET(0x1615F5E0)

inline static constexpr unsigned int Class_2_BA30EE5D91DB6889_TypeDefinitionIndex = 50741;

class Class_2_BA30EE5D91DB6889 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_5; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::MonoUITableScrollV2* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA30EE5D91DB6889__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA30EE5D91DB6889_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA30EE5D91DB6889_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA30EE5D91DB6889_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
