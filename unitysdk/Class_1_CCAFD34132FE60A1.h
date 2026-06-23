#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_193;
namespace MoleMole { class UIActivityDemoTrialBGEffectWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_CCAFD34132FE60A1_METHOD_1_5A10BE98883B95B7_OFFSET UNITYSDK_OFFSET(0x15C8D420)
#define CLASS_1_CCAFD34132FE60A1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C8D410)

inline static constexpr unsigned int Class_1_CCAFD34132FE60A1_TypeDefinitionIndex = 45025;

class Class_1_CCAFD34132FE60A1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::MoleMole::UIBaseController* Field_1_3; // 0x10
	::UnityEngine::RectTransform* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCAFD34132FE60A1__CTOR_OFFSET))(this);
	}

	::MoleMole::UIActivityDemoTrialBGEffectWidgetController* Method_1_5A10BE98883B95B7(::Class_2_208CC9941471731A_193* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::MoleMole::UIActivityDemoTrialBGEffectWidgetController*(*)(::PVOID, ::Class_2_208CC9941471731A_193*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CCAFD34132FE60A1_METHOD_1_5A10BE98883B95B7_OFFSET))(this, a1, a2, a3, a4);
	}
};
