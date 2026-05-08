#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7E5B7AF606147C61_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x122A00E0)
#define CLASS_2_7E5B7AF606147C61_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x1229FEA0)
#define CLASS_2_7E5B7AF606147C61_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x122A01D0)
#define CLASS_2_7E5B7AF606147C61__CTOR_OFFSET UNITYSDK_OFFSET(0x122A01C0)

inline static constexpr unsigned int Class_2_7E5B7AF606147C61_TypeDefinitionIndex = 62762;

class Class_2_7E5B7AF606147C61 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::Class_2_CA67A9CEB871FFD3* Field_2_9; // 0x30
	::UnityEngine::GameObject* Field_2_8; // 0x38
	::UnityEngine::GameObject* Field_2_2; // 0x40
	::UnityEngine::GameObject* Field_2_0; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::UnityEngine::Transform* Field_2_4; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E5B7AF606147C61__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E5B7AF606147C61_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E5B7AF606147C61_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E5B7AF606147C61_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
