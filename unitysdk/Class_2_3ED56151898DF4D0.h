#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_3ED56151898DF4D0_Class_2_D724B9B15A73DF20_1;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_3ED56151898DF4D0_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1A827EF0)
#define CLASS_2_3ED56151898DF4D0_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x1A827CC0)
#define CLASS_2_3ED56151898DF4D0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A827FF0)
#define CLASS_2_3ED56151898DF4D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A827FE0)

inline static constexpr unsigned int Class_2_3ED56151898DF4D0_TypeDefinitionIndex = 60119;

class Class_2_3ED56151898DF4D0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::MonoUITableScrollV2* Field_2_3; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_3ED56151898DF4D0_Class_2_D724B9B15A73DF20_1*>* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x48
	::Class_2_0D31A1661D004892<::Class_2_3ED56151898DF4D0_Class_2_D724B9B15A73DF20_1*>* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ED56151898DF4D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3ED56151898DF4D0_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ED56151898DF4D0_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3ED56151898DF4D0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
