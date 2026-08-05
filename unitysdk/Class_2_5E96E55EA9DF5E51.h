#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_5E96E55EA9DF5E51_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0x11BEAC60)
#define CLASS_2_5E96E55EA9DF5E51_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x11BEADB0)
#define CLASS_2_5E96E55EA9DF5E51_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11BEA9A0)
#define CLASS_2_5E96E55EA9DF5E51_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11BEAEB0)
#define CLASS_2_5E96E55EA9DF5E51__CTOR_OFFSET UNITYSDK_OFFSET(0x11BEAEA0)

inline static constexpr unsigned int Class_2_5E96E55EA9DF5E51_TypeDefinitionIndex = 52749;

class Class_2_5E96E55EA9DF5E51 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x28
	::UnityEngine::GameObject* Field_2_15; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x50
	::MonoUITableScrollV2* Field_2_4; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_8; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x68
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_10; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E96E55EA9DF5E51__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E96E55EA9DF5E51_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E96E55EA9DF5E51_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5E96E55EA9DF5E51_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E96E55EA9DF5E51_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
