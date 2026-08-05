#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_169A9938636591F3_Class_2_A8551DB78FCCDD55;
class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_169A9938636591F3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1213E9C0)
#define CLASS_2_169A9938636591F3_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x1213E850)
#define CLASS_2_169A9938636591F3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1213EA50)
#define CLASS_2_169A9938636591F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1213EA40)

inline static constexpr unsigned int Class_2_169A9938636591F3_TypeDefinitionIndex = 89990;

class Class_2_169A9938636591F3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_169A9938636591F3_Class_2_A8551DB78FCCDD55*>* Field_2_2; // 0x20
	::UIControllerExtensionData* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_169A9938636591F3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
