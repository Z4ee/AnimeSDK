#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_METHOD_2_16814357E9E19172_OFFSET UNITYSDK_OFFSET(0x7C3230)
#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x7C31D0)
#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7C3160)
#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7C31A0)
#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_OFFSET UNITYSDK_OFFSET(0x7C3130)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_TypeDefinitionIndex = 61834;

struct alignas(8) Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4
{
	::System::String* Field_2_2; // 0x10
	::UnityEngine::AnimationCurve* Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x20
	::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A Field_2_7; // 0x28
	::System::Single Field_2_6; // 0x38
	::System::Boolean Field_2_5; // 0x3C
	::System::Boolean Field_2_4; // 0x3D

	::System::Void _ctor(::System::String* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::System::String* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_2(::System::String* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Int32 a4, ::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32, ::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4 Method_2_16814357E9E19172(::System::Boolean a1)
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_METHOD_2_16814357E9E19172_OFFSET))(this, a1);
	}
};
