#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOnlinePlayerItemWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x155C6FF0)
#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_6C6C02341A6C6B8A_OFFSET UNITYSDK_OFFSET(0x155C6E40)
#define CLASS_2_DFD3AF2CBC5041AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155C7080)
#define CLASS_2_DFD3AF2CBC5041AB__CTOR_OFFSET UNITYSDK_OFFSET(0x155C7070)

inline static constexpr unsigned int Class_2_DFD3AF2CBC5041AB_TypeDefinitionIndex = 51528;

class Class_2_DFD3AF2CBC5041AB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIOnlinePlayerItemWidgetController*>* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6C6C02341A6C6B8A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_6C6C02341A6C6B8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFD3AF2CBC5041AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
