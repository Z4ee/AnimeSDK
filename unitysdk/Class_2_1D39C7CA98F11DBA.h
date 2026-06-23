#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"
#include "unitysdk/Enum_3_07C4412B5A0F6218.h"

class Class_2_1D39C7CA98F11DBA_Class_2_B180F3D5932AF727;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1D39C7CA98F11DBA_METHOD_2_3D7A9B3707D7FB6E_OFFSET UNITYSDK_OFFSET(0x17932200)
#define CLASS_2_1D39C7CA98F11DBA_METHOD_2_7F6A4212734144C9_OFFSET UNITYSDK_OFFSET(0x17931F60)
#define CLASS_2_1D39C7CA98F11DBA_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x17932130)
#define CLASS_2_1D39C7CA98F11DBA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17932430)
#define CLASS_2_1D39C7CA98F11DBA__CTOR_OFFSET UNITYSDK_OFFSET(0x179321F0)

inline static constexpr unsigned int Class_2_1D39C7CA98F11DBA_TypeDefinitionIndex = 49761;

class Class_2_1D39C7CA98F11DBA : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIShareBtnWidgetController*>* Field_2_1; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_1D39C7CA98F11DBA_Class_2_B180F3D5932AF727*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D39C7CA98F11DBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7F6A4212734144C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D39C7CA98F11DBA_METHOD_2_7F6A4212734144C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D39C7CA98F11DBA_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_2_3D7A9B3707D7FB6E(::Enum_3_07C4412B5A0F6218 a1)
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::Enum_3_07C4412B5A0F6218))((::PBYTE)hIl2Cpp + CLASS_2_1D39C7CA98F11DBA_METHOD_2_3D7A9B3707D7FB6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1D39C7CA98F11DBA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
