#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_17A23D66DE5213CA___C__DISPLAYCLASS22_0__ASYNCRESOURCELOADING_B__0_OFFSET UNITYSDK_OFFSET(0x9EE1BE0)
#define CLASS_1_17A23D66DE5213CA___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE1BD0)

inline static constexpr unsigned int Class_1_17A23D66DE5213CA___c__DisplayClass22_0_TypeDefinitionIndex = 39866;

class Class_1_17A23D66DE5213CA___c__DisplayClass22_0 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Object*>* __9__0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::Object*>*>* onLoadfinish; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* loadedReources; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* paths; // 0x28
	::System::Int32 i; // 0x30
	::System::Int32 loadedCount; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A23D66DE5213CA___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncResourceLoading_b__0(::UnityEngine::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_17A23D66DE5213CA___C__DISPLAYCLASS22_0__ASYNCRESOURCELOADING_B__0_OFFSET))(this, o);
	}
};
