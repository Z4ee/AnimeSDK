#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

class SerializedWarmupPSO;
namespace System { class String; }

#define CLASS_1_01FD457D69060FE8_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x105754E0)
#define CLASS_1_01FD457D69060FE8_METHOD_1_C82DA91C301A8F16_OFFSET UNITYSDK_OFFSET(0x10575780)
#define CLASS_1_01FD457D69060FE8_METHOD_1_FECCC201E677EAA9_OFFSET UNITYSDK_OFFSET(0x10575580)
#define CLASS_1_01FD457D69060FE8__CTOR_OFFSET UNITYSDK_OFFSET(0x10575910)

inline static constexpr unsigned int Class_1_01FD457D69060FE8_TypeDefinitionIndex = 38275;

class Class_1_01FD457D69060FE8 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0xC11FB78; // 0x0
	::System::String* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01FD457D69060FE8__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01FD457D69060FE8_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_FECCC201E677EAA9(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::System::Int32 a4)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_01FD457D69060FE8_METHOD_1_FECCC201E677EAA9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C82DA91C301A8F16(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::Il2CppArray<::SerializedWarmupPSO*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_01FD457D69060FE8_METHOD_1_C82DA91C301A8F16_OFFSET))(this, a1, a2, a3, a4);
	}
};
