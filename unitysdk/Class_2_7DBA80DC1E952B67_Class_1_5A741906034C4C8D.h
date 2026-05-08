#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7DBA80DC1E952B67_CLASS_1_5A741906034C4C8D__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE1FE0)

inline static constexpr unsigned int Class_2_7DBA80DC1E952B67_Class_1_5A741906034C4C8D_TypeDefinitionIndex = 59537;

class Class_2_7DBA80DC1E952B67_Class_1_5A741906034C4C8D : public ::System::Object
{
public:
	::System::WeakReference_1<::UnityEngine::GameObject*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBA80DC1E952B67_CLASS_1_5A741906034C4C8D__CTOR_OFFSET))(this);
	}
};
