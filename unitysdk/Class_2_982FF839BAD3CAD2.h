#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_982FF839BAD3CAD2_Class_2_64EAB4644DCCE3D7_7;
class Class_2_982FF839BAD3CAD2_Class_2_EF16346D79C18F15_13;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_982FF839BAD3CAD2_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x1775F6E0)
#define CLASS_2_982FF839BAD3CAD2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1775F8E0)
#define CLASS_2_982FF839BAD3CAD2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1775F9B0)
#define CLASS_2_982FF839BAD3CAD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1775F9A0)

inline static constexpr unsigned int Class_2_982FF839BAD3CAD2_TypeDefinitionIndex = 66459;

class Class_2_982FF839BAD3CAD2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_982FF839BAD3CAD2_Class_2_64EAB4644DCCE3D7_7*>* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_982FF839BAD3CAD2_Class_2_EF16346D79C18F15_13*>* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_982FF839BAD3CAD2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
