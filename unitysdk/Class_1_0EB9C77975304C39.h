#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLoginDropDownBoxRowWidgetController; }
namespace System { class String; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }

#define CLASS_1_0EB9C77975304C39__CTOR_OFFSET UNITYSDK_OFFSET(0x171B0070)

inline static constexpr unsigned int Class_1_0EB9C77975304C39_TypeDefinitionIndex = 81713;

class Class_1_0EB9C77975304C39 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::UnityEngine::Events::UnityAction_2<::System::String*, ::MoleMole::UIGeneralLoginDropDownBoxRowWidgetController*>* Field_1_3; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::String* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EB9C77975304C39__CTOR_OFFSET))(this);
	}
};
