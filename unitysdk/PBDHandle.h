#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_87DF3110F2783615;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Mesh; }

#define PBDHANDLE_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0x192675A0)
#define PBDHANDLE_METHOD_5_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x19266D60)
#define PBDHANDLE_METHOD_5_4B2D0E39C5A3C698_OFFSET UNITYSDK_OFFSET(0x19267830)
#define PBDHANDLE_METHOD_5_8451509F80A98FEC_OFFSET UNITYSDK_OFFSET(0x192668F0)
#define PBDHANDLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19267BA0)
#define PBDHANDLE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x19267A80)
#define PBDHANDLE_START_OFFSET UNITYSDK_OFFSET(0x19266280)
#define PBDHANDLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19266AA0)
#define PBDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19267BF0)

inline static constexpr unsigned int PBDHandle_TypeDefinitionIndex = 47601;

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
	::System::Collections::Generic::Queue_1<::Class_1_87DF3110F2783615*>* MFDNJNNIHLP; // 0x38
	::UnityEngine::Mesh* GELIKHJKMMH; // 0x40
	::UnityEngine::Mesh* POGNHLFFGED; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* NBNAEABBGGB; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BAHIIAGLNCN; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* DKMOBINHMPA; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* LLAEBOAFDGI; // 0x68
	::System::Int32 ELLCPPLOAHG; // 0x70
	::System::Single AJHHBNJIKEG; // 0x74

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
