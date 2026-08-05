#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_071490F73A72357F_2_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18157C20)
#define CLASS_2_071490F73A72357F_2_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x18157A60)
#define CLASS_2_071490F73A72357F_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18157D10)
#define CLASS_2_071490F73A72357F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18157D00)

inline static constexpr unsigned int Class_2_071490F73A72357F_2_TypeDefinitionIndex = 84387;

class Class_2_071490F73A72357F_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_5; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
