#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_TrajectoryMonoPlugin; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FD305BD522B0EF09_METHOD_1_03C4CB4B9DB65DCB_OFFSET UNITYSDK_OFFSET(0x12A07D20)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_09B176198957E2D1_OFFSET UNITYSDK_OFFSET(0x12A07450)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_09CCD73C6DC37035_OFFSET UNITYSDK_OFFSET(0x12A07E20)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_353DB81EAA0B1375_OFFSET UNITYSDK_OFFSET(0x12A07AB0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_3550F4B6813E2C4C_OFFSET UNITYSDK_OFFSET(0x12A072B0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_364E9C0B4E9B41EA_OFFSET UNITYSDK_OFFSET(0x12A082F0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_412DCF21BF515DBC_OFFSET UNITYSDK_OFFSET(0x12A08100)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_4E6E026024003465_OFFSET UNITYSDK_OFFSET(0x12A08A90)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x12A07820)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_1_OFFSET UNITYSDK_OFFSET(0x12A07F20)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x12A07EB0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0x12A076E0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x12A07010)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6B46575F0BDA05A3_OFFSET UNITYSDK_OFFSET(0x12A08030)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_726001F0E40D702E_OFFSET UNITYSDK_OFFSET(0x12A07120)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_7E832D0C2C340C33_OFFSET UNITYSDK_OFFSET(0x12A07590)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_89729C6BD8979672_OFFSET UNITYSDK_OFFSET(0x12A07770)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0x12A070A0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_8C704EEB5213ECA5_OFFSET UNITYSDK_OFFSET(0x12A084E0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x12A07F90)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x12A08F60)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_1_OFFSET UNITYSDK_OFFSET(0x12A088B0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_OFFSET UNITYSDK_OFFSET(0x12A086D0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9EE81AC766E1D5FA_OFFSET UNITYSDK_OFFSET(0x12A08E00)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x12A07200)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_A98D3E0263C925ED_OFFSET UNITYSDK_OFFSET(0x12A07920)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_AA979AC3F9B47F59_OFFSET UNITYSDK_OFFSET(0x12A08CA0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x12A07C10)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_EE6F1388FB8342C5_OFFSET UNITYSDK_OFFSET(0x12A07DA0)
#define CLASS_1_FD305BD522B0EF09__CTOR_OFFSET UNITYSDK_OFFSET(0x12A06F80)

inline static constexpr unsigned int Class_1_FD305BD522B0EF09_TypeDefinitionIndex = 70375;

class Class_1_FD305BD522B0EF09 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_4; // 0x10
	::UnityEngine::Animator* Field_1_2; // 0x18
	::RPG::Client::Effect_TrajectoryMonoPlugin* Field_1_1; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_0; // 0x30
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B20DD98E594CC7F(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_8B20DD98E594CC7F_OFFSET))(this, a1);
	}

	::System::Void Method_1_726001F0E40D702E(::System::String* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_726001F0E40D702E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3550F4B6813E2C4C(::System::String* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_3550F4B6813E2C4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_09B176198957E2D1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_09B176198957E2D1_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_7E832D0C2C340C33()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_7E832D0C2C340C33_OFFSET))(this);
	}

	::System::Void Method_1_6105334A729F22E3_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_89729C6BD8979672(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_89729C6BD8979672_OFFSET))(this, a1);
	}

	::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A98D3E0263C925ED(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_A98D3E0263C925ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_353DB81EAA0B1375(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_353DB81EAA0B1375_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_DF64B90BA25AAE64(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_DF64B90BA25AAE64_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C4CB4B9DB65DCB(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_03C4CB4B9DB65DCB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE6F1388FB8342C5(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_EE6F1388FB8342C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_09CCD73C6DC37035(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_09CCD73C6DC37035_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_60DC879ACE99CF48_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6B46575F0BDA05A3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_6B46575F0BDA05A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_412DCF21BF515DBC(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_412DCF21BF515DBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_364E9C0B4E9B41EA(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_364E9C0B4E9B41EA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C704EEB5213ECA5(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_8C704EEB5213ECA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9BAEFAE18E63814A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9BAEFAE18E63814A_1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E6E026024003465(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_4E6E026024003465_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA979AC3F9B47F59(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_AA979AC3F9B47F59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9EE81AC766E1D5FA(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_9EE81AC766E1D5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}
};
