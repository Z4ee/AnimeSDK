#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6DBA585243CD6B22_1_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA461BB0)
#define CLASS_3_6DBA585243CD6B22_1_METHOD_3_8E4ED9FA27613068_OFFSET UNITYSDK_OFFSET(0xA461A50)
#define CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA4618C0)
#define CLASS_3_6DBA585243CD6B22_1_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA461980)
#define CLASS_3_6DBA585243CD6B22_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA461C00)
#define CLASS_3_6DBA585243CD6B22_1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA461C10)
#define CLASS_3_6DBA585243CD6B22_1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA461C20)

inline static constexpr unsigned int Class_3_6DBA585243CD6B22_1_TypeDefinitionIndex = 45284;

class Class_3_6DBA585243CD6B22_1 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

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

	::System::Void Method_3_8E4ED9FA27613068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_METHOD_3_8E4ED9FA27613068_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_6DBA585243CD6B22_1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
