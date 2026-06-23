#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_C66DEC328A595BAB_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x106771C0)
#define CLASS_2_C66DEC328A595BAB_2_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x10677070)
#define CLASS_2_C66DEC328A595BAB_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10677250)
#define CLASS_2_C66DEC328A595BAB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10677240)

inline static constexpr unsigned int Class_2_C66DEC328A595BAB_2_TypeDefinitionIndex = 49175;

class Class_2_C66DEC328A595BAB_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66DEC328A595BAB_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C66DEC328A595BAB_2_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C66DEC328A595BAB_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C66DEC328A595BAB_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
