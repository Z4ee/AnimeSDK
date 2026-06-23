#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class IKKFrame; }
namespace System { class String; }
namespace UnityEngine::Timeline { class PropertyCurve; }

#define CLASS_1_C609F655B1307ECA_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11E856B0)
#define CLASS_1_C609F655B1307ECA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E856A0)

inline static constexpr unsigned int Class_1_C609F655B1307ECA_TypeDefinitionIndex = 82590;

class Class_1_C609F655B1307ECA : public ::System::Object
{
public:
	::UnityEngine::Timeline::PropertyCurve* Field_1_1; // 0x10
	::UnityEngine::Timeline::KFrameFieldType Field_1_0; // 0x18

	::System::Void _ctor(::UnityEngine::Timeline::PropertyCurve* a1, ::MoleMole::Timeline::IKKFrame* a2, ::UnityEngine::Timeline::KFrameFieldType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::PropertyCurve*, ::MoleMole::Timeline::IKKFrame*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + CLASS_1_C609F655B1307ECA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C609F655B1307ECA_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
