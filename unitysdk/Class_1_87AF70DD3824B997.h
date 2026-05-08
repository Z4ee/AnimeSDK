#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_87AF70DD3824B997_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x100A4B90)
#define CLASS_1_87AF70DD3824B997_ONDROP_OFFSET UNITYSDK_OFFSET(0x100A4BE0)
#define CLASS_1_87AF70DD3824B997__CTOR_OFFSET UNITYSDK_OFFSET(0x100A4B80)

inline static constexpr unsigned int Class_1_87AF70DD3824B997_TypeDefinitionIndex = 65076;

class Class_1_87AF70DD3824B997 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_87AF70DD3824B997__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean CanAcceptDrop(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_87AF70DD3824B997_CANACCEPTDROP_OFFSET))(this, a1);
	}

	::System::Void OnDrop(::System::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_87AF70DD3824B997_ONDROP_OFFSET))(this, a1, a2);
	}
};
