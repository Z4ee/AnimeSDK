#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x10631900)
#define CLASS_2_C52E4901222B45AB_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10631670)
#define CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_1_OFFSET UNITYSDK_OFFSET(0x106317F0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x106316E0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10631B10)
#define CLASS_2_C52E4901222B45AB_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x106315E0)
#define CLASS_2_C52E4901222B45AB_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x10631970)
#define CLASS_2_C52E4901222B45AB__CTOR_OFFSET UNITYSDK_OFFSET(0x10631A80)
#define CLASS_2_C52E4901222B45AB__ONBIND_OFFSET UNITYSDK_OFFSET(0x106313C0)
#define CLASS_2_C52E4901222B45AB___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10631AB0)

inline static constexpr unsigned int Class_2_C52E4901222B45AB_TypeDefinitionIndex = 59126;

class Class_2_C52E4901222B45AB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::GameObject* Field_2_5; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C52E4901222B45AB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
