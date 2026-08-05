#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_071490F73A72357F_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x16576E20)
#define CLASS_2_071490F73A72357F_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x16576C50)
#define CLASS_2_071490F73A72357F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16576F30)
#define CLASS_2_071490F73A72357F__CTOR_OFFSET UNITYSDK_OFFSET(0x16576F20)

inline static constexpr unsigned int Class_2_071490F73A72357F_TypeDefinitionIndex = 87348;

class Class_2_071490F73A72357F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_071490F73A72357F_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
