#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14A4C6E0)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_4E5B7B892608BDE0_OFFSET UNITYSDK_OFFSET(0x14A4CA70)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x14A4C9E0)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_6F611F6CA6B08B22_OFFSET UNITYSDK_OFFSET(0x14A4CD30)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x14A4CCE0)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_8B649337F27852CC_OFFSET UNITYSDK_OFFSET(0x14A4C920)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_93852A59E9597849_OFFSET UNITYSDK_OFFSET(0x14A4C890)
#define CLASS_1_D2B8D50DD9833CFC_METHOD_1_9DBC9E6BCD10AD9A_OFFSET UNITYSDK_OFFSET(0x14A4C5F0)
#define CLASS_1_D2B8D50DD9833CFC__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4CDE0)

inline static constexpr unsigned int Class_1_D2B8D50DD9833CFC_TypeDefinitionIndex = 66565;

class Class_1_D2B8D50DD9833CFC : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Plane>* Field_1_0; // 0x10
	::UnityEngine::Matrix4x4 Field_1_1; // 0x18
	::UnityEngine::Matrix4x4 Field_1_2; // 0x58
	::System::Boolean Field_1_3; // 0x98
	::System::Boolean Field_1_4; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC__CTOR_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_1_9DBC9E6BCD10AD9A()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_9DBC9E6BCD10AD9A_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_93852A59E9597849(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_93852A59E9597849_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B649337F27852CC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_8B649337F27852CC_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_63E8F19CFED33AB3(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_63E8F19CFED33AB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E5B7B892608BDE0(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_4E5B7B892608BDE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_6F611F6CA6B08B22(::Il2CppArray<::UnityEngine::Plane>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_D2B8D50DD9833CFC_METHOD_1_6F611F6CA6B08B22_OFFSET))(this, a1);
	}
};
