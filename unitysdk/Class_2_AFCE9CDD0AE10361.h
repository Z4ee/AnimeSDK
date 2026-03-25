#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AFCE9CDD0AE10361_Struct_2_E658502528B7C034_4.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectPluginIKAim; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_AFCE9CDD0AE10361_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D74240)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_2350CF77A6CBB91F_OFFSET UNITYSDK_OFFSET(0x8D75010)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_46C0FB33FA0C262F_OFFSET UNITYSDK_OFFSET(0x8D744B0)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_72A0E2B3FCB6D23F_OFFSET UNITYSDK_OFFSET(0x8D74820)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_79388175BEE85A0C_OFFSET UNITYSDK_OFFSET(0x8D74CA0)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8D75340)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_9D0D4B34EC483626_OFFSET UNITYSDK_OFFSET(0x8D74440)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x8D742B0)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x8D741D0)
#define CLASS_2_AFCE9CDD0AE10361_METHOD_2_F2E045B3786178E0_OFFSET UNITYSDK_OFFSET(0x8D74510)
#define CLASS_2_AFCE9CDD0AE10361__CTOR_OFFSET UNITYSDK_OFFSET(0x8D75330)
#define CLASS_2_AFCE9CDD0AE10361___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D753B0)

inline static constexpr unsigned int Class_2_AFCE9CDD0AE10361_TypeDefinitionIndex = 57160;

class Class_2_AFCE9CDD0AE10361 : public ::RPG::Client::BehaviorBase
{
public:
	::Il2CppArray<::Class_2_AFCE9CDD0AE10361_Struct_2_E658502528B7C034_4>* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_A56385E6706FA723_OFFSET))(this);
	}

	::System::Void Method_2_46C0FB33FA0C262F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_46C0FB33FA0C262F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2E045B3786178E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_F2E045B3786178E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_72A0E2B3FCB6D23F(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_72A0E2B3FCB6D23F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_79388175BEE85A0C(::System::String* a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_79388175BEE85A0C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2350CF77A6CBB91F(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_2350CF77A6CBB91F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffectPluginIKAim* Method_2_9D0D4B34EC483626()
	{
		return ((::RPG::Client::MonoEffectPluginIKAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_9D0D4B34EC483626_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFCE9CDD0AE10361___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
