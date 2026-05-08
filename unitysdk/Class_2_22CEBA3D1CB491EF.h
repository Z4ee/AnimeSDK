#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIRopeMakerWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x13A6F340)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13A6F580)
#define CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13A6F650)
#define CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A6F640)

inline static constexpr unsigned int Class_2_22CEBA3D1CB491EF_TypeDefinitionIndex = 74461;

class Class_2_22CEBA3D1CB491EF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_22CEBA3D1CB491EF_Class_2_F16A6159917E38E8*>* Field_2_1; // 0x20
	::Class_2_134E5210FBBAC6E5* Field_2_3; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIRopeMakerWidgetController*>* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UITabButton* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22CEBA3D1CB491EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
