#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A6B3C86F38BEF7B5_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x15BCA0B0)
#define CLASS_1_A6B3C86F38BEF7B5_ONDROP_OFFSET UNITYSDK_OFFSET(0x15BCA100)
#define CLASS_1_A6B3C86F38BEF7B5__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCA0A0)

inline static constexpr unsigned int Class_1_A6B3C86F38BEF7B5_TypeDefinitionIndex = 83439;

class Class_1_A6B3C86F38BEF7B5 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A6B3C86F38BEF7B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A6B3C86F38BEF7B5_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A6B3C86F38BEF7B5_ONDROP_OFFSET))(this, a1, a2);
	}
};
