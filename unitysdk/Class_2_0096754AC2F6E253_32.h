#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_0096754AC2F6E253_32_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14089980)
#define CLASS_2_0096754AC2F6E253_32_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x140898C0)
#define CLASS_2_0096754AC2F6E253_32__CTOR_OFFSET UNITYSDK_OFFSET(0x14089970)

inline static constexpr unsigned int Class_2_0096754AC2F6E253_32_TypeDefinitionIndex = 59100;

class Class_2_0096754AC2F6E253_32 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0096754AC2F6E253_32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0096754AC2F6E253_32_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0096754AC2F6E253_32_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
