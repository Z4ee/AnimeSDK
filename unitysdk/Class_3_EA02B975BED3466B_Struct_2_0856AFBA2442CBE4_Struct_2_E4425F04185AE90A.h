#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class OverrideWeatherConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_STRUCT_2_E4425F04185AE90A_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x730FE0)
#define CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_STRUCT_2_E4425F04185AE90A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x730FD0)

inline static constexpr unsigned int Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A_TypeDefinitionIndex = 61835;

struct alignas(8) Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A
{
	::UnityEngine::Rendering::Universal::OverrideWeatherConfigScriptableObject* Field_2_2; // 0x10
	::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_STRUCT_2_E4425F04185AE90A_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA02B975BED3466B_STRUCT_2_0856AFBA2442CBE4_STRUCT_2_E4425F04185AE90A_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
