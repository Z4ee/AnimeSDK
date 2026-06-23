#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_D8025EAAD6F282C8_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13B4EB70)
#define CLASS_2_D8025EAAD6F282C8_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x13B4EA20)
#define CLASS_2_D8025EAAD6F282C8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B4EC00)
#define CLASS_2_D8025EAAD6F282C8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4EBF0)

inline static constexpr unsigned int Class_2_D8025EAAD6F282C8_1_TypeDefinitionIndex = 75154;

class Class_2_D8025EAAD6F282C8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8025EAAD6F282C8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8025EAAD6F282C8_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8025EAAD6F282C8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8025EAAD6F282C8_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
