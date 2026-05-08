#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_82AD18310A9D6C9D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1319F5C0)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x1319F660)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1319F570)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x1319FBE0)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_4D8CDE5C720018CB_OFFSET UNITYSDK_OFFSET(0x1319F700)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x1319F560)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1319F6B0)
#define CLASS_1_82AD18310A9D6C9D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1319F620)
#define CLASS_1_82AD18310A9D6C9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1319F6F0)

inline static constexpr unsigned int Class_1_82AD18310A9D6C9D_TypeDefinitionIndex = 75305;

class Class_1_82AD18310A9D6C9D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_1_4D8CDE5C720018CB(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Collider* a3)
	{
		return ((::UnityEngine::Collider*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_4D8CDE5C720018CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_82AD18310A9D6C9D_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}
};
