#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoChaserConfig; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12272250)
#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x12272100)
#define CLASS_2_07F94AA48C3B4F12_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x122722E0)
#define CLASS_2_07F94AA48C3B4F12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x122722D0)

inline static constexpr unsigned int Class_2_07F94AA48C3B4F12_1_TypeDefinitionIndex = 52011;

class Class_2_07F94AA48C3B4F12_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::MoleMole::MonoChaserConfig* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07F94AA48C3B4F12_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
