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

#define CLASS_1_FD305BD522B0EF09_METHOD_1_03C4CB4B9DB65DCB_OFFSET UNITYSDK_OFFSET(0xBA05CE0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_09CCD73C6DC37035_OFFSET UNITYSDK_OFFSET(0xBA05DE0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_353DB81EAA0B1375_OFFSET UNITYSDK_OFFSET(0xBA05A70)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_364E9C0B4E9B41EA_OFFSET UNITYSDK_OFFSET(0xBA062A0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_412DCF21BF515DBC_OFFSET UNITYSDK_OFFSET(0xBA060C0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_4E6E026024003465_OFFSET UNITYSDK_OFFSET(0xBA06A10)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xBA057B0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_1_OFFSET UNITYSDK_OFFSET(0xBA05EE0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0xBA05E70)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_1_OFFSET UNITYSDK_OFFSET(0xBA05670)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0xBA04F20)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_6B46575F0BDA05A3_OFFSET UNITYSDK_OFFSET(0xBA05FF0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_72AB83A0CFCFCB37_OFFSET UNITYSDK_OFFSET(0xBA05030)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_7E832D0C2C340C33_OFFSET UNITYSDK_OFFSET(0xBA05520)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_89729C6BD8979672_OFFSET UNITYSDK_OFFSET(0xBA05700)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_8B20DD98E594CC7F_OFFSET UNITYSDK_OFFSET(0xBA04FB0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_8C658F407D112B05_OFFSET UNITYSDK_OFFSET(0xBA053B0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_8C704EEB5213ECA5_OFFSET UNITYSDK_OFFSET(0xBA06480)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xBA05F50)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0xBA06E90)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_99DD8F72831B4597_OFFSET UNITYSDK_OFFSET(0xBA051F0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_1_OFFSET UNITYSDK_OFFSET(0xBA06840)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9BAEFAE18E63814A_OFFSET UNITYSDK_OFFSET(0xBA06670)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_9EE81AC766E1D5FA_OFFSET UNITYSDK_OFFSET(0xBA06D40)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xBA05140)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_A7BD3D5D3E04B964_OFFSET UNITYSDK_OFFSET(0xBA058B0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_AA979AC3F9B47F59_OFFSET UNITYSDK_OFFSET(0xBA06C10)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0xBA05BD0)
#define CLASS_1_FD305BD522B0EF09_METHOD_1_EE6F1388FB8342C5_OFFSET UNITYSDK_OFFSET(0xBA05D60)
#define CLASS_1_FD305BD522B0EF09__CTOR_OFFSET UNITYSDK_OFFSET(0xBA04E90)

inline static constexpr unsigned int Class_1_FD305BD522B0EF09_TypeDefinitionIndex = 76618;

class Class_1_FD305BD522B0EF09 : public ::System::Object
{
public:
	::UnityEngine::GameObject* FAEGPGKBBLI; // 0x10
	::RPG::Client::Effect_TrajectoryMonoPlugin* DODAGCBJHIK; // 0x18
	::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x20
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x28
	::UnityEngine::Animator* APPGGMLEPLN; // 0x30
	::System::Single MMJPMKIHAMF; // 0x38

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

	::System::Void Method_1_72AB83A0CFCFCB37(::System::String* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_72AB83A0CFCFCB37_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_99DD8F72831B4597(::System::String* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_99DD8F72831B4597_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C658F407D112B05(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_8C658F407D112B05_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_A7BD3D5D3E04B964(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD305BD522B0EF09_METHOD_1_A7BD3D5D3E04B964_OFFSET))(this, a1, a2);
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
