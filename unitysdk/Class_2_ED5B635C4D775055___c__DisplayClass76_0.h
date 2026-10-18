#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_126;
class Class_2_ED5B635C4D775055;
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshPathAsyncOperation; }

#define CLASS_2_ED5B635C4D775055___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15907440)
#define CLASS_2_ED5B635C4D775055___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET UNITYSDK_OFFSET(0x15908DB0)

inline static constexpr unsigned int Class_2_ED5B635C4D775055___c__DisplayClass76_0_TypeDefinitionIndex = 57122;

class Class_2_ED5B635C4D775055___c__DisplayClass76_0 : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshPathAsyncOperation* op; // 0x10
	::Class_2_ED5B635C4D775055* __4__this; // 0x18
	::Class_1_43BD383C98B4C0C5_126* request; // 0x20
	::UnityEngine::AI::NavMeshPath* path; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
	}

	::System::Void __StartPathQuery_b__0(::UnityEngine::AsyncOperation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CLASS_2_ED5B635C4D775055___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET))(this, a1);
	}
};
