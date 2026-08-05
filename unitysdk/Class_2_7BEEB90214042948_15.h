#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7BEEB90214042948_15_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x181EAD80)
#define CLASS_2_7BEEB90214042948_15_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x181EAE10)
#define CLASS_2_7BEEB90214042948_15_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x181EAC00)
#define CLASS_2_7BEEB90214042948_15__CTOR_OFFSET UNITYSDK_OFFSET(0x181EAE00)

inline static constexpr unsigned int Class_2_7BEEB90214042948_15_TypeDefinitionIndex = 68652;

class Class_2_7BEEB90214042948_15 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_15__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_15_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_15_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_15_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
