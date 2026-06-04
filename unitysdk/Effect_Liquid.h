#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define EFFECT_LIQUID_METHOD_5_18C814F7EBE15C92_OFFSET UNITYSDK_OFFSET(0x1357C1A0)
#define EFFECT_LIQUID_METHOD_5_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x1357CF80)
#define EFFECT_LIQUID_METHOD_5_6BA807A89A617D97_OFFSET UNITYSDK_OFFSET(0x1357C230)
#define EFFECT_LIQUID_METHOD_5_8CA88D55ECEFAD59_1_OFFSET UNITYSDK_OFFSET(0x1357C070)
#define EFFECT_LIQUID_METHOD_5_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1357BF00)
#define EFFECT_LIQUID_METHOD_5_C0ED0C6E5E939750_OFFSET UNITYSDK_OFFSET(0x1357CE00)
#define EFFECT_LIQUID_START_OFFSET UNITYSDK_OFFSET(0x1357BEB0)
#define EFFECT_LIQUID_UPDATE_OFFSET UNITYSDK_OFFSET(0x1357C340)
#define EFFECT_LIQUID__CTOR_OFFSET UNITYSDK_OFFSET(0x1357D1D0)

inline static constexpr unsigned int Effect_Liquid_TypeDefinitionIndex = 44747;

class Effect_Liquid : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 CenterPosOffset; // 0x18
	::System::Single ForceFromOffsetScale; // 0x24
	::System::Single ForceFromRotateScale; // 0x28
	::System::Single RecoverSpeed; // 0x2C
	::System::Single OvelapScale; // 0x30
	::System::Single DampingScale; // 0x34
	::System::Single k; // 0x38
	::System::Single OutForceClamp; // 0x3C
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_8; // 0x40
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_9; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_10; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_11; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_12; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_13; // 0x68
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_14; // 0x70
	::Il2CppArray<::UnityEngine::Vector3>* Field_5_15; // 0x78
	::UnityEngine::Vector3 Field_5_16; // 0x80
	::UnityEngine::Vector3 Field_5_17; // 0x8C
	::UnityEngine::Vector3 Field_5_18; // 0x98
	::UnityEngine::Quaternion Field_5_19; // 0xA4
	::System::Single Field_5_20; // 0xB4
	::System::Single Field_5_21; // 0xB8
	::UnityEngine::Vector3 Field_5_22; // 0xBC
	::System::Single Field_5_23; // 0xC8
	::UnityEngine::Renderer* Field_5_24; // 0xD0
	::UnityEngine::MaterialPropertyBlock* Field_5_25; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_START_OFFSET))(this);
	}

	::System::Void Method_5_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_5_8CA88D55ECEFAD59_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_8CA88D55ECEFAD59_1_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_5_18C814F7EBE15C92(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_18C814F7EBE15C92_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector4 Method_5_6BA807A89A617D97(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_6BA807A89A617D97_OFFSET))(this, a1, a2);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_C0ED0C6E5E939750(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_C0ED0C6E5E939750_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECT_LIQUID_METHOD_5_35A1A641353400E6_OFFSET))(this);
	}
};
