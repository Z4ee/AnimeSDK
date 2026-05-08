#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_352F950ED9B237CC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x123B2160)
#define CLASS_2_352F950ED9B237CC_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x123B1F30)
#define CLASS_2_352F950ED9B237CC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123B2270)
#define CLASS_2_352F950ED9B237CC__CTOR_OFFSET UNITYSDK_OFFSET(0x123B2260)

inline static constexpr unsigned int Class_2_352F950ED9B237CC_TypeDefinitionIndex = 79221;

class Class_2_352F950ED9B237CC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_8; // 0x18
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_3; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_352F950ED9B237CC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_352F950ED9B237CC_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_352F950ED9B237CC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_352F950ED9B237CC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
