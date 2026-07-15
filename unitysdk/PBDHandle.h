#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_87DF3110F2783615;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Mesh; }

#define PBDHANDLE_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0x15F8D620)
#define PBDHANDLE_METHOD_5_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x15F8CDE0)
#define PBDHANDLE_METHOD_5_4B2D0E39C5A3C698_OFFSET UNITYSDK_OFFSET(0x15F8D8B0)
#define PBDHANDLE_METHOD_5_8451509F80A98FEC_OFFSET UNITYSDK_OFFSET(0x15F8C970)
#define PBDHANDLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15F8DC20)
#define PBDHANDLE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x15F8DB00)
#define PBDHANDLE_START_OFFSET UNITYSDK_OFFSET(0x15F8C300)
#define PBDHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F8CB20)
#define PBDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8DC70)

inline static constexpr unsigned int PBDHandle_TypeDefinitionIndex = 45355;

class PBDHandle : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean IsAnimated; // 0x18
	::System::Single forceMagnitude; // 0x1C
	::System::Single propagationSpeed; // 0x20
	::System::Single baseDamping; // 0x24
	::System::Single dampingIncreaseRate; // 0x28
	::System::Single RecoverRatio; // 0x2C
	::System::Single MinRecover; // 0x30
	::System::Collections::Generic::Queue_1<::Class_1_87DF3110F2783615*>* Field_5_7; // 0x38
	::UnityEngine::Mesh* Field_5_8; // 0x40
	::UnityEngine::Mesh* Field_5_9; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_10; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_5_11; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_12; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_13; // 0x68
	::System::Int32 Field_5_14; // 0x70
	::System::Single Field_5_15; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_UPDATE_OFFSET))(this);
	}

	::System::Void ApplyForce(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PBDHANDLE_APPLYFORCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_4B2D0E39C5A3C698(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PBDHANDLE_METHOD_5_4B2D0E39C5A3C698_OFFSET))(this, a1, a2);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_ONDRAWGIZMOS_OFFSET))(this);
	}

	::System::Void Method_5_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_METHOD_5_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHANDLE_ONDESTROY_OFFSET))(this);
	}

	static ::System::Single Method_5_8451509F80A98FEC(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + PBDHANDLE_METHOD_5_8451509F80A98FEC_OFFSET))(a1);
	}
};
