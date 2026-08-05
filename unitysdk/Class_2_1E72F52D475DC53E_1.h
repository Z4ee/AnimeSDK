#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C7E6991E78CB1409.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_2_1E72F52D475DC53E_1_METHOD_2_58DF2FB98D5BCAE9_OFFSET UNITYSDK_OFFSET(0x135864F0)
#define CLASS_2_1E72F52D475DC53E_1_METHOD_2_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0x13586630)
#define CLASS_2_1E72F52D475DC53E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13586620)

inline static constexpr unsigned int Class_2_1E72F52D475DC53E_1_TypeDefinitionIndex = 76148;

class Class_2_1E72F52D475DC53E_1 : public ::Class_1_C7E6991E78CB1409
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E72F52D475DC53E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_58DF2FB98D5BCAE9(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1E72F52D475DC53E_1_METHOD_2_58DF2FB98D5BCAE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1E72F52D475DC53E_1_METHOD_2_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}
};
