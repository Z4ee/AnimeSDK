#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_61A1D1EDC7999857_Class_2_D1AFFDF9C535EDBA;
class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_61A1D1EDC7999857_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x12F53BE0)
#define CLASS_2_61A1D1EDC7999857_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x12F53DB0)
#define CLASS_2_61A1D1EDC7999857_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12F53FF0)
#define CLASS_2_61A1D1EDC7999857_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F53FA0)
#define CLASS_2_61A1D1EDC7999857__CTOR_OFFSET UNITYSDK_OFFSET(0x12F53FE0)

inline static constexpr unsigned int Class_2_61A1D1EDC7999857_TypeDefinitionIndex = 84266;

class Class_2_61A1D1EDC7999857 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_61A1D1EDC7999857_Class_2_D1AFFDF9C535EDBA*>*>* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UIControllerExtensionData* Field_2_2; // 0x30
	::UnityEngine::CanvasGroup* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61A1D1EDC7999857__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61A1D1EDC7999857_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_61A1D1EDC7999857_Class_2_D1AFFDF9C535EDBA*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_61A1D1EDC7999857_Class_2_D1AFFDF9C535EDBA*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61A1D1EDC7999857_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_61A1D1EDC7999857_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61A1D1EDC7999857_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
