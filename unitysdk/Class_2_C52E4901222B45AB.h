#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xB203400)
#define CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xB203170)
#define CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_1_OFFSET UNITYSDK_OFFSET(0xB2032F0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xB2031E0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB2030E0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xB203470)
#define CLASS_2_C52E4901222B45AB__CTOR_OFFSET UNITYSDK_OFFSET(0xB203580)
#define CLASS_2_C52E4901222B45AB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB202F20)

inline static constexpr unsigned int Class_2_C52E4901222B45AB_TypeDefinitionIndex = 72203;

class Class_2_C52E4901222B45AB : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Transform* DCBAIJBMMJA; // 0x60
	::RPG::Client::PrefabLoadMeta* CHNCAFCKHAN; // 0x68
	::UnityEngine::Transform* BIBAGOMGIFE; // 0x70
	::UnityEngine::GameObject* FEFMICGONJE; // 0x78
	::UnityEngine::Transform* ALEDBEKLNCE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_1_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
