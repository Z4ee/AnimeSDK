#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6DBA585243CD6B22_2_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1846A630)
#define CLASS_3_6DBA585243CD6B22_2_METHOD_3_8E4ED9FA27613068_OFFSET UNITYSDK_OFFSET(0x1846A4D0)
#define CLASS_3_6DBA585243CD6B22_2_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1846A340)
#define CLASS_3_6DBA585243CD6B22_2_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1846A400)
#define CLASS_3_6DBA585243CD6B22_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1846A680)

inline static constexpr unsigned int Class_3_6DBA585243CD6B22_2_TypeDefinitionIndex = 48442;

class Class_3_6DBA585243CD6B22_2 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
	::System::Boolean AGKBAEGPBFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_2__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_2_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_2_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E4ED9FA27613068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_2_METHOD_3_8E4ED9FA27613068_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_2_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
