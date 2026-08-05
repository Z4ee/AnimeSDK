#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_64B8AF843BB0F160_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x18B1E170)
#define CLASS_2_64B8AF843BB0F160_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B1E200)
#define CLASS_2_64B8AF843BB0F160_1_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x18B1DFF0)
#define CLASS_2_64B8AF843BB0F160_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1E1F0)

inline static constexpr unsigned int Class_2_64B8AF843BB0F160_1_TypeDefinitionIndex = 69895;

class Class_2_64B8AF843BB0F160_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_1_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B8AF843BB0F160_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
