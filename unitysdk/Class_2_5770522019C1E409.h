#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_5770522019C1E409_Class_1_E86B2A10B97ED8FE_5;
class Class_2_5770522019C1E409_Class_2_D70A531C11B87052_1;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_5770522019C1E409_METHOD_2_3F4955BEA481F3D4_OFFSET UNITYSDK_OFFSET(0x11E86BC0)
#define CLASS_2_5770522019C1E409_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11E86970)
#define CLASS_2_5770522019C1E409_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x11E86DC0)
#define CLASS_2_5770522019C1E409_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11E86F00)
#define CLASS_2_5770522019C1E409__CTOR_OFFSET UNITYSDK_OFFSET(0x11E86EF0)

inline static constexpr unsigned int Class_2_5770522019C1E409_TypeDefinitionIndex = 52121;

class Class_2_5770522019C1E409 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_7; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_5770522019C1E409_Class_2_D70A531C11B87052_1*>* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_5770522019C1E409_Class_2_D70A531C11B87052_1*>* Field_2_5; // 0x48
	::System::Collections::Generic::List_1<::Class_2_5770522019C1E409_Class_1_E86B2A10B97ED8FE_5*>* Field_2_11; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5770522019C1E409__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5770522019C1E409_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5770522019C1E409_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5770522019C1E409_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_5770522019C1E409_Class_1_E86B2A10B97ED8FE_5*>* Method_2_3F4955BEA481F3D4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_5770522019C1E409_Class_1_E86B2A10B97ED8FE_5*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5770522019C1E409_METHOD_2_3F4955BEA481F3D4_OFFSET))(this, a1, a2);
	}
};
