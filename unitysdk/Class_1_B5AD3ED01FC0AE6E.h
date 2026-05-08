#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_238;
namespace MoleMole { class UIActivityDemoTrialBGEffectWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_B5AD3ED01FC0AE6E_METHOD_1_9E7FCE97743D305A_OFFSET UNITYSDK_OFFSET(0xE172B50)
#define CLASS_1_B5AD3ED01FC0AE6E__CTOR_OFFSET UNITYSDK_OFFSET(0xE172B40)

inline static constexpr unsigned int Class_1_B5AD3ED01FC0AE6E_TypeDefinitionIndex = 44181;

class Class_1_B5AD3ED01FC0AE6E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::UnityEngine::RectTransform* Field_1_4; // 0x10
	::MoleMole::UIBaseController* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5AD3ED01FC0AE6E__CTOR_OFFSET))(this);
	}

	::MoleMole::UIActivityDemoTrialBGEffectWidgetController* Method_1_9E7FCE97743D305A(::Class_2_208CC9941471731A_238* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::MoleMole::UIActivityDemoTrialBGEffectWidgetController*(*)(::PVOID, ::Class_2_208CC9941471731A_238*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5AD3ED01FC0AE6E_METHOD_1_9E7FCE97743D305A_OFFSET))(this, a1, a2, a3, a4);
	}
};
