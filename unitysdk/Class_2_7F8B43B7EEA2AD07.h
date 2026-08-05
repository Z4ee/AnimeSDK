#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7F8B43B7EEA2AD07_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x156FA4D0)
#define CLASS_2_7F8B43B7EEA2AD07_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x156FA2A0)
#define CLASS_2_7F8B43B7EEA2AD07_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x156FA5E0)
#define CLASS_2_7F8B43B7EEA2AD07__CTOR_OFFSET UNITYSDK_OFFSET(0x156FA5D0)

inline static constexpr unsigned int Class_2_7F8B43B7EEA2AD07_TypeDefinitionIndex = 53235;

class Class_2_7F8B43B7EEA2AD07 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_5; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20
	::UnityEngine::UI::Text* Field_2_10; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_11; // 0x50
	::UnityEngine::GameObject* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8B43B7EEA2AD07__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F8B43B7EEA2AD07_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F8B43B7EEA2AD07_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F8B43B7EEA2AD07_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
