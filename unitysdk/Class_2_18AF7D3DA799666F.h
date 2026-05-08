#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C7E6991E78CB1409.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_2_18AF7D3DA799666F_METHOD_2_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0xE4D0790)
#define CLASS_2_18AF7D3DA799666F_METHOD_2_F8C9FB5DAD822EF6_OFFSET UNITYSDK_OFFSET(0xE4D0640)
#define CLASS_2_18AF7D3DA799666F__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D0780)

inline static constexpr unsigned int Class_2_18AF7D3DA799666F_TypeDefinitionIndex = 69134;

class Class_2_18AF7D3DA799666F : public ::Class_1_C7E6991E78CB1409
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18AF7D3DA799666F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F8C9FB5DAD822EF6(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_18AF7D3DA799666F_METHOD_2_F8C9FB5DAD822EF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_18AF7D3DA799666F_METHOD_2_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}
};
