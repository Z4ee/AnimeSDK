#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6DBA585243CD6B22_1_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x187D02D0)
#define CLASS_3_6DBA585243CD6B22_1_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x187D0200)
#define CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x187D0070)
#define CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x187D0130)
#define CLASS_3_6DBA585243CD6B22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x187D0320)

inline static constexpr unsigned int Class_3_6DBA585243CD6B22_1_TypeDefinitionIndex = 48424;

class Class_3_6DBA585243CD6B22_1 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
	::System::Boolean AGKBAEGPBFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
