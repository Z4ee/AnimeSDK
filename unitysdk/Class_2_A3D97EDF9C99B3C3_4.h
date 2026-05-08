#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x139CF900)
#define CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x139CFA90)
#define CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x139CFB40)
#define CLASS_2_A3D97EDF9C99B3C3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x139CFB30)

inline static constexpr unsigned int Class_2_A3D97EDF9C99B3C3_4_TypeDefinitionIndex = 81629;

class Class_2_A3D97EDF9C99B3C3_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
