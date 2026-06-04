#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_AC590327EA438924_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xC469E80)
#define CLASS_3_AC590327EA438924_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xC469DB0)
#define CLASS_3_AC590327EA438924_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xC469BD0)
#define CLASS_3_AC590327EA438924_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xC469CB0)
#define CLASS_3_AC590327EA438924__CTOR_OFFSET UNITYSDK_OFFSET(0xC469ED0)
#define CLASS_3_AC590327EA438924___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xC469EE0)
#define CLASS_3_AC590327EA438924___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xC469EF0)

inline static constexpr unsigned int Class_3_AC590327EA438924_TypeDefinitionIndex = 45243;

class Class_3_AC590327EA438924 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_AC590327EA438924___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
