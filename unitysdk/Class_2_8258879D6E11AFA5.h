#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginCableProcedural; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8258879D6E11AFA5_METHOD_2_1DAC872C5F48A5DE_OFFSET UNITYSDK_OFFSET(0xAA30010)
#define CLASS_2_8258879D6E11AFA5_METHOD_2_53898BC8CD31F230_OFFSET UNITYSDK_OFFSET(0xAA30080)
#define CLASS_2_8258879D6E11AFA5_METHOD_2_963A1C53DC95800B_OFFSET UNITYSDK_OFFSET(0xAA30150)
#define CLASS_2_8258879D6E11AFA5_METHOD_2_B946B32EFE0325C3_OFFSET UNITYSDK_OFFSET(0xAA2FE90)
#define CLASS_2_8258879D6E11AFA5_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0xAA30270)
#define CLASS_2_8258879D6E11AFA5__CTOR_OFFSET UNITYSDK_OFFSET(0xAA30260)

inline static constexpr unsigned int Class_2_8258879D6E11AFA5_TypeDefinitionIndex = 65322;

class Class_2_8258879D6E11AFA5 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B946B32EFE0325C3(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5_METHOD_2_B946B32EFE0325C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_53898BC8CD31F230(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5_METHOD_2_53898BC8CD31F230_OFFSET))(this, a1);
	}

	::System::Void Method_2_963A1C53DC95800B(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5_METHOD_2_963A1C53DC95800B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MonoEffectPluginCableProcedural* Method_2_1DAC872C5F48A5DE()
	{
		return ((::RPG::Client::MonoEffectPluginCableProcedural*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5_METHOD_2_1DAC872C5F48A5DE_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8258879D6E11AFA5_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
