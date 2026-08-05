#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_FB08D36683FF8521_METHOD_1_5E61C3CEE63B3524_OFFSET UNITYSDK_OFFSET(0x180FA1B0)
#define CLASS_1_FB08D36683FF8521_METHOD_1_989917D5926039A1_OFFSET UNITYSDK_OFFSET(0x180F9FA0)
#define CLASS_1_FB08D36683FF8521_METHOD_1_DA3417BDA95D3A5F_OFFSET UNITYSDK_OFFSET(0x180F9F30)
#define CLASS_1_FB08D36683FF8521_METHOD_1_FCAC6CBB2D3B5D00_OFFSET UNITYSDK_OFFSET(0x180F9B30)

inline static constexpr unsigned int Class_1_FB08D36683FF8521_TypeDefinitionIndex = 69204;

class Class_1_FB08D36683FF8521 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FCAC6CBB2D3B5D00(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB08D36683FF8521_METHOD_1_FCAC6CBB2D3B5D00_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DA3417BDA95D3A5F(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB08D36683FF8521_METHOD_1_DA3417BDA95D3A5F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_989917D5926039A1(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_FB08D36683FF8521_METHOD_1_989917D5926039A1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_5E61C3CEE63B3524(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FB08D36683FF8521_METHOD_1_5E61C3CEE63B3524_OFFSET))(a1, a2, a3, a4, a5);
	}
};
