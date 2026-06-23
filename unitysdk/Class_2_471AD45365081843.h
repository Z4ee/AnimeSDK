#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C7E6991E78CB1409.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_2_471AD45365081843_METHOD_2_8E3C56099F017253_OFFSET UNITYSDK_OFFSET(0x1280A180)
#define CLASS_2_471AD45365081843_METHOD_2_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0x1280A330)
#define CLASS_2_471AD45365081843__CTOR_OFFSET UNITYSDK_OFFSET(0x1280A320)

inline static constexpr unsigned int Class_2_471AD45365081843_TypeDefinitionIndex = 82512;

class Class_2_471AD45365081843 : public ::Class_1_C7E6991E78CB1409
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_471AD45365081843__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8E3C56099F017253(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_471AD45365081843_METHOD_2_8E3C56099F017253_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_471AD45365081843_METHOD_2_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}
};
