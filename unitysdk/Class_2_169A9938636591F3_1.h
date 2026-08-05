#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_169A9938636591F3_1_Class_2_A8551DB78FCCDD55_2;
class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_169A9938636591F3_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x133EAAB0)
#define CLASS_2_169A9938636591F3_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x133EA940)
#define CLASS_2_169A9938636591F3_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133EAB40)
#define CLASS_2_169A9938636591F3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133EAB30)

inline static constexpr unsigned int Class_2_169A9938636591F3_1_TypeDefinitionIndex = 73491;

class Class_2_169A9938636591F3_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_169A9938636591F3_1_Class_2_A8551DB78FCCDD55_2*>* Field_2_1; // 0x18
	::UIControllerExtensionData* Field_2_0; // 0x20
	::UnityEngine::CanvasGroup* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
