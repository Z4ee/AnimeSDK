#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_5A79D5EA2856C666_METHOD_1_2A148B173AF77BFB_OFFSET UNITYSDK_OFFSET(0x179F2C90)
#define CLASS_1_5A79D5EA2856C666_METHOD_1_7FBE9A14E3D5CF9D_OFFSET UNITYSDK_OFFSET(0x179F2C10)
#define CLASS_1_5A79D5EA2856C666_METHOD_1_B2E1F4B7BD95D0F7_OFFSET UNITYSDK_OFFSET(0x179F2BA0)
#define CLASS_1_5A79D5EA2856C666_METHOD_1_CBC93C6FB43F7ED9_OFFSET UNITYSDK_OFFSET(0x179F2D60)

inline static constexpr unsigned int Class_1_5A79D5EA2856C666_TypeDefinitionIndex = 8657;

class Class_1_5A79D5EA2856C666 : public ::System::Object
{
public:
	static ::System::Single Method_1_B2E1F4B7BD95D0F7(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A79D5EA2856C666_METHOD_1_B2E1F4B7BD95D0F7_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_7FBE9A14E3D5CF9D(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A79D5EA2856C666_METHOD_1_7FBE9A14E3D5CF9D_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_2A148B173AF77BFB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A79D5EA2856C666_METHOD_1_2A148B173AF77BFB_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Quaternion Method_1_CBC93C6FB43F7ED9(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A79D5EA2856C666_METHOD_1_CBC93C6FB43F7ED9_OFFSET))(a1, a2, a3, a4);
	}
};
