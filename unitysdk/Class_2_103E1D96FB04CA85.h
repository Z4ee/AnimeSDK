#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_103E1D96FB04CA85_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1165AEC0)
#define CLASS_2_103E1D96FB04CA85_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x1165AD20)
#define CLASS_2_103E1D96FB04CA85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1165AF50)
#define CLASS_2_103E1D96FB04CA85__CTOR_OFFSET UNITYSDK_OFFSET(0x1165AF40)

inline static constexpr unsigned int Class_2_103E1D96FB04CA85_TypeDefinitionIndex = 64325;

class Class_2_103E1D96FB04CA85 : public ::Class_1_EEA0111A28582B57
{
public:
	::ShaderAniHelp* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
