#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7BEEB90214042948_22_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x138B1C80)
#define CLASS_2_7BEEB90214042948_22_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138B1D50)
#define CLASS_2_7BEEB90214042948_22_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x138B1B30)
#define CLASS_2_7BEEB90214042948_22__CTOR_OFFSET UNITYSDK_OFFSET(0x138B1D40)

inline static constexpr unsigned int Class_2_7BEEB90214042948_22_TypeDefinitionIndex = 85414;

class Class_2_7BEEB90214042948_22 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_22__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_22_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_22_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BEEB90214042948_22_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
