#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UICircleTransition; }

#define CLASS_2_FB1E5A90687BD1C8_METHOD_2_5F440A97C5716A31_OFFSET UNITYSDK_OFFSET(0x17CF4B60)
#define CLASS_2_FB1E5A90687BD1C8_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x17CF4CB0)
#define CLASS_2_FB1E5A90687BD1C8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17CF4D80)
#define CLASS_2_FB1E5A90687BD1C8_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x17CF49E0)
#define CLASS_2_FB1E5A90687BD1C8__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF4D70)

inline static constexpr unsigned int Class_2_FB1E5A90687BD1C8_TypeDefinitionIndex = 87225;

class Class_2_FB1E5A90687BD1C8 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB1E5A90687BD1C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB1E5A90687BD1C8_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB1E5A90687BD1C8_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>* Method_2_5F440A97C5716A31(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UICircleTransition*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB1E5A90687BD1C8_METHOD_2_5F440A97C5716A31_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB1E5A90687BD1C8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
