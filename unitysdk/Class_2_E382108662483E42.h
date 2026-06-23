#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_E382108662483E42_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x1208EBD0)
#define CLASS_2_E382108662483E42_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1208EDB0)
#define CLASS_2_E382108662483E42_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1208EEB0)
#define CLASS_2_E382108662483E42__CTOR_OFFSET UNITYSDK_OFFSET(0x1208EEA0)

inline static constexpr unsigned int Class_2_E382108662483E42_TypeDefinitionIndex = 41643;

class Class_2_E382108662483E42 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E382108662483E42__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E382108662483E42_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E382108662483E42_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E382108662483E42_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
