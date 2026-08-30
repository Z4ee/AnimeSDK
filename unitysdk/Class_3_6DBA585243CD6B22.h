#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6DBA585243CD6B22_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1A83D090)
#define CLASS_3_6DBA585243CD6B22_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x1A83CFC0)
#define CLASS_3_6DBA585243CD6B22_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1A83CE30)
#define CLASS_3_6DBA585243CD6B22_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1A83CEF0)
#define CLASS_3_6DBA585243CD6B22__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83D0E0)

inline static constexpr unsigned int Class_3_6DBA585243CD6B22_TypeDefinitionIndex = 48401;

class Class_3_6DBA585243CD6B22 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
	::System::Boolean AGKBAEGPBFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
