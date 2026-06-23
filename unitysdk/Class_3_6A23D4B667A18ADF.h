#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_6A23D4B667A18ADF_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14A64E50)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_39361D1F2D1BD8E3_OFFSET UNITYSDK_OFFSET(0x14A64D00)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x14A65120)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x14A65110)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x14A64940)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x14A64B20)
#define CLASS_3_6A23D4B667A18ADF_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x14A64ED0)
#define CLASS_3_6A23D4B667A18ADF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A65080)

inline static constexpr unsigned int Class_3_6A23D4B667A18ADF_TypeDefinitionIndex = 83857;

class Class_3_6A23D4B667A18ADF : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_B4378B46E0020E85* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_3_1; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_3_39361D1F2D1BD8E3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_39361D1F2D1BD8E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_58BA0C8308C8127F(::Class_2_B4378B46E0020E85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_3_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::Class_2_B4378B46E0020E85* Method_3_43A46E5F9FAC62B8()
	{
		return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A23D4B667A18ADF_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}
};
