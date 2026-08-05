#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRopeMakerWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xE20EB50)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xE20ED90)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE20EE60)
#define CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET UNITYSDK_OFFSET(0xE20EE50)

inline static constexpr unsigned int Class_2_22CEBA3D1CB491EF_TypeDefinitionIndex = 86499;

class Class_2_22CEBA3D1CB491EF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_11; // 0x20
	::Class_2_134E5210FBBAC6E5* Field_2_5; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIRopeMakerWidgetController*>* Field_2_6; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8*>* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
