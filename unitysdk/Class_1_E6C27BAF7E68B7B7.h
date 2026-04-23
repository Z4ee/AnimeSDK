#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_05574CBB0989AE50_OFFSET UNITYSDK_OFFSET(0x8FB2130)
#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_1EED54C5EC4AF1D0_OFFSET UNITYSDK_OFFSET(0x8FB1880)
#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_3521612C2671AF9D_OFFSET UNITYSDK_OFFSET(0x8FB1BD0)
#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_3C70DB49DA52A2EA_OFFSET UNITYSDK_OFFSET(0x8FB2B50)
#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_81ABC11F4E05E2C0_OFFSET UNITYSDK_OFFSET(0x8FB1D00)
#define CLASS_1_E6C27BAF7E68B7B7_METHOD_1_A057BCC82EFCA035_OFFSET UNITYSDK_OFFSET(0x8FB2690)
#define CLASS_1_E6C27BAF7E68B7B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB3100)

inline static constexpr unsigned int Class_1_E6C27BAF7E68B7B7_TypeDefinitionIndex = 50521;

class Class_1_E6C27BAF7E68B7B7 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6C27BAF7E68B7B7_TypeDefinitionIndex)->GetStaticField(0x60FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_1EED54C5EC4AF1D0(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_1EED54C5EC4AF1D0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Int32 Method_1_3521612C2671AF9D(::UnityEngine::Collider* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_3521612C2671AF9D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_81ABC11F4E05E2C0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_81ABC11F4E05E2C0_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_05574CBB0989AE50(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Il2CppArray<::UnityEngine::Collider*>* a4, ::System::Int32 a5)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_05574CBB0989AE50_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_A057BCC82EFCA035(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_A057BCC82EFCA035_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_3C70DB49DA52A2EA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::UnityEngine::Quaternion a4, ::System::Int32 a5)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E6C27BAF7E68B7B7_METHOD_1_3C70DB49DA52A2EA_OFFSET))(a1, a2, a3, a4, a5);
	}
};
