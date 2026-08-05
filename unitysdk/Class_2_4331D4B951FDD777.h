#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4331D4B951FDD777_METHOD_2_5268AE5605C75CF4_OFFSET UNITYSDK_OFFSET(0x169B7D90)
#define CLASS_2_4331D4B951FDD777_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x169B7C40)
#define CLASS_2_4331D4B951FDD777_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x169B7EF0)
#define CLASS_2_4331D4B951FDD777__CTOR_OFFSET UNITYSDK_OFFSET(0x169B7EE0)

inline static constexpr unsigned int Class_2_4331D4B951FDD777_TypeDefinitionIndex = 45340;

class Class_2_4331D4B951FDD777 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_5; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4331D4B951FDD777__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4331D4B951FDD777_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4331D4B951FDD777_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_5268AE5605C75CF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4331D4B951FDD777_METHOD_2_5268AE5605C75CF4_OFFSET))(this, a1, a2);
	}
};
