#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_5EBDDC2A4CBE1553_Class_2_962C3E725783D025;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_5EBDDC2A4CBE1553_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1576B370)
#define CLASS_2_5EBDDC2A4CBE1553_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1576AF60)
#define CLASS_2_5EBDDC2A4CBE1553_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x1576B180)
#define CLASS_2_5EBDDC2A4CBE1553_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1576B470)
#define CLASS_2_5EBDDC2A4CBE1553__CTOR_OFFSET UNITYSDK_OFFSET(0x1576B460)

inline static constexpr unsigned int Class_2_5EBDDC2A4CBE1553_TypeDefinitionIndex = 91339;

class Class_2_5EBDDC2A4CBE1553 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_5EBDDC2A4CBE1553_Class_2_962C3E725783D025*>*>* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_11; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EBDDC2A4CBE1553__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5EBDDC2A4CBE1553_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5EBDDC2A4CBE1553_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_5EBDDC2A4CBE1553_Class_2_962C3E725783D025*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_5EBDDC2A4CBE1553_Class_2_962C3E725783D025*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5EBDDC2A4CBE1553_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EBDDC2A4CBE1553_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
