#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginCableProcedural; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C8D9009897BCA1C3_METHOD_2_18922660C8707A1C_OFFSET UNITYSDK_OFFSET(0x11E16700)
#define CLASS_2_C8D9009897BCA1C3_METHOD_2_60DEF8D9EE8F0CF0_OFFSET UNITYSDK_OFFSET(0x11E16630)
#define CLASS_2_C8D9009897BCA1C3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x11E16810)
#define CLASS_2_C8D9009897BCA1C3_METHOD_2_94BEFB8ACD69EFD5_OFFSET UNITYSDK_OFFSET(0x11E16450)
#define CLASS_2_C8D9009897BCA1C3_METHOD_2_F3362CE7D578D5E7_OFFSET UNITYSDK_OFFSET(0x11E165C0)
#define CLASS_2_C8D9009897BCA1C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11E16800)

inline static constexpr unsigned int Class_2_C8D9009897BCA1C3_TypeDefinitionIndex = 64401;

class Class_2_C8D9009897BCA1C3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_94BEFB8ACD69EFD5(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3_METHOD_2_94BEFB8ACD69EFD5_OFFSET))(this, a1);
	}

	::System::Void Method_2_60DEF8D9EE8F0CF0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3_METHOD_2_60DEF8D9EE8F0CF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_18922660C8707A1C(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3_METHOD_2_18922660C8707A1C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffectPluginCableProcedural* Method_2_F3362CE7D578D5E7()
	{
		return ((::RPG::Client::MonoEffectPluginCableProcedural*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3_METHOD_2_F3362CE7D578D5E7_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_C8D9009897BCA1C3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
