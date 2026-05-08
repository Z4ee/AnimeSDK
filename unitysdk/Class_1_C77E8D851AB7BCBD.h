#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_685AC11A7FB5C953;
class Class_2_7A1F9B1E855D33CF;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_C77E8D851AB7BCBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132EC930)
#define CLASS_1_C77E8D851AB7BCBD_METHOD_1_9178B711385FE155_OFFSET UNITYSDK_OFFSET(0x132ECAC0)
#define CLASS_1_C77E8D851AB7BCBD_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x132EC970)
#define CLASS_1_C77E8D851AB7BCBD_METHOD_1_F36E75210ED5F96C_OFFSET UNITYSDK_OFFSET(0x132EC9C0)
#define CLASS_1_C77E8D851AB7BCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x132EC920)

inline static constexpr unsigned int Class_1_C77E8D851AB7BCBD_TypeDefinitionIndex = 56298;

class Class_1_C77E8D851AB7BCBD : public ::System::Object
{
public:
	::Class_1_685AC11A7FB5C953* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_685AC11A7FB5C953* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_685AC11A7FB5C953*))((::PBYTE)hIl2Cpp + CLASS_1_C77E8D851AB7BCBD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77E8D851AB7BCBD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_C77E8D851AB7BCBD_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F36E75210ED5F96C(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C77E8D851AB7BCBD_METHOD_1_F36E75210ED5F96C_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_9178B711385FE155(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C77E8D851AB7BCBD_METHOD_1_9178B711385FE155_OFFSET))(this, a1, a2);
	}
};
