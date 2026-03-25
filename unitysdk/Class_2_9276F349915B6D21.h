#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoLoopedRotaion; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_9276F349915B6D21_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x105222D0)
#define CLASS_2_9276F349915B6D21_METHOD_2_735CCB7293D530B6_OFFSET UNITYSDK_OFFSET(0x10521F10)
#define CLASS_2_9276F349915B6D21_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x10522280)
#define CLASS_2_9276F349915B6D21_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10522E70)
#define CLASS_2_9276F349915B6D21_METHOD_2_D5FD030C20131461_OFFSET UNITYSDK_OFFSET(0x10522230)
#define CLASS_2_9276F349915B6D21__CTOR_OFFSET UNITYSDK_OFFSET(0x10522E60)

inline static constexpr unsigned int Class_2_9276F349915B6D21_TypeDefinitionIndex = 57613;

class Class_2_9276F349915B6D21 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::RPG::Client::MonoLoopedRotaion* Field_2_5; // 0x20
	::System::Single Field_2_3; // 0x28
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::System::Single Field_2_2; // 0x38
	::System::Single Field_2_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_735CCB7293D530B6(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_735CCB7293D530B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::RPG::Client::MonoLoopedRotaion* Method_2_D5FD030C20131461()
	{
		return ((::RPG::Client::MonoLoopedRotaion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_D5FD030C20131461_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9276F349915B6D21_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
