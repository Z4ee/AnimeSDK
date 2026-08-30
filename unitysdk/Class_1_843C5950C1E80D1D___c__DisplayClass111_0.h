#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_843C5950C1E80D1D;
class Class_1_B6045334FA181376;
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define CLASS_1_843C5950C1E80D1D___C__DISPLAYCLASS111_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1307A0D0)
#define CLASS_1_843C5950C1E80D1D___C__DISPLAYCLASS111_0__DETECTCHARGINGROTATION_B__0_OFFSET UNITYSDK_OFFSET(0x1309AD00)

inline static constexpr unsigned int Class_1_843C5950C1E80D1D___c__DisplayClass111_0_TypeDefinitionIndex = 75527;

class Class_1_843C5950C1E80D1D___c__DisplayClass111_0 : public ::System::Object
{
public:
	::Class_1_843C5950C1E80D1D* __4__this; // 0x10
	::UnityEngine::Pooled::PooledList_1<::UnityEngine::Quaternion>* tempRot; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_843C5950C1E80D1D___C__DISPLAYCLASS111_0__CTOR_OFFSET))(this);
	}

	::System::Void _DetectChargingRotation_b__0(::Class_1_B6045334FA181376* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6045334FA181376*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_843C5950C1E80D1D___C__DISPLAYCLASS111_0__DETECTCHARGINGROTATION_B__0_OFFSET))(this, a1, a2, a3);
	}
};
