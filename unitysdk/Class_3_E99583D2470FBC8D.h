#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_E99583D2470FBC8D_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x12EAEDE0)
#define CLASS_3_E99583D2470FBC8D_METHOD_3_677D6FAAC7F4CD6A_OFFSET UNITYSDK_OFFSET(0x12EAEB30)
#define CLASS_3_E99583D2470FBC8D_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12EAED40)
#define CLASS_3_E99583D2470FBC8D__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAF180)

inline static constexpr unsigned int Class_3_E99583D2470FBC8D_TypeDefinitionIndex = 49008;

class Class_3_E99583D2470FBC8D : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_4; // 0x30
	::UnityEngine::RectTransform* Field_3_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x40
	::UnityEngine::RectTransform* Field_3_10; // 0x48
	::UnityEngine::RectTransform* Field_3_0; // 0x50
	::Class_2_1A39E1B51756BF41* Field_3_1; // 0x58
	::Class_2_B4378B46E0020E85* Field_3_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_677D6FAAC7F4CD6A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_METHOD_3_677D6FAAC7F4CD6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_METHOD_3_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
