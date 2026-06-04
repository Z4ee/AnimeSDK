#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

class SerializedWarmupPSO;
namespace System { class String; }

#define CLASS_1_B6AFA26BE1D211E0_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xCECB970)
#define CLASS_1_B6AFA26BE1D211E0_METHOD_1_760EBF30519B776A_OFFSET UNITYSDK_OFFSET(0xCECBA10)
#define CLASS_1_B6AFA26BE1D211E0_METHOD_1_A1946602BC972D93_OFFSET UNITYSDK_OFFSET(0xCECBBF0)
#define CLASS_1_B6AFA26BE1D211E0__CTOR_OFFSET UNITYSDK_OFFSET(0xCECBD80)

inline static constexpr unsigned int Class_1_B6AFA26BE1D211E0_TypeDefinitionIndex = 44705;

class Class_1_B6AFA26BE1D211E0 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0xC11FB78; // 0x0
	::System::String* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6AFA26BE1D211E0__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6AFA26BE1D211E0_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_760EBF30519B776A(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::System::Int32 a4)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6AFA26BE1D211E0_METHOD_1_760EBF30519B776A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A1946602BC972D93(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::Il2CppArray<::SerializedWarmupPSO*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6AFA26BE1D211E0_METHOD_1_A1946602BC972D93_OFFSET))(this, a1, a2, a3, a4);
	}
};
