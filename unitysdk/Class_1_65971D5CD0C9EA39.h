#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

class SerializedWarmupPSO;
namespace System { class String; }

#define CLASS_1_65971D5CD0C9EA39_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xE5D7750)
#define CLASS_1_65971D5CD0C9EA39_METHOD_1_A21D64E6DFCCFC73_OFFSET UNITYSDK_OFFSET(0xE5D77F0)
#define CLASS_1_65971D5CD0C9EA39_METHOD_1_CA4D59B5F0F9228A_OFFSET UNITYSDK_OFFSET(0xE5D7A40)
#define CLASS_1_65971D5CD0C9EA39__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D7C40)

inline static constexpr unsigned int Class_1_65971D5CD0C9EA39_TypeDefinitionIndex = 47871;

class Class_1_65971D5CD0C9EA39 : public ::System::Object
{
public:
	// static const ::System::UInt32 AGOMDJIJAHD = 0xC11FB78; // 0x0
	::System::String* NLAPEHKLIBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65971D5CD0C9EA39__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65971D5CD0C9EA39_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_A21D64E6DFCCFC73(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::System::Int32 a4)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_65971D5CD0C9EA39_METHOD_1_A21D64E6DFCCFC73_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CA4D59B5F0F9228A(::System::String* a1, ::System::String* a2, ::UnityEngine::Rendering::GraphicsDeviceType a3, ::Il2CppArray<::SerializedWarmupPSO*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Rendering::GraphicsDeviceType, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + CLASS_1_65971D5CD0C9EA39_METHOD_1_CA4D59B5F0F9228A_OFFSET))(this, a1, a2, a3, a4);
	}
};
