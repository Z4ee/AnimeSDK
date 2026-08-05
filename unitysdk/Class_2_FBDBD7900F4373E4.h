#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_FBDBD7900F4373E4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134177C0)
#define CLASS_2_FBDBD7900F4373E4_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13417680)
#define CLASS_2_FBDBD7900F4373E4__CTOR_OFFSET UNITYSDK_OFFSET(0x134177B0)

inline static constexpr unsigned int Class_2_FBDBD7900F4373E4_TypeDefinitionIndex = 65579;

class Class_2_FBDBD7900F4373E4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::UnityEngine::GameObject* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBDBD7900F4373E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FBDBD7900F4373E4_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FBDBD7900F4373E4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
