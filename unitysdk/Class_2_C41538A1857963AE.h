#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C41538A1857963AE_Class_1_0C8B36188557F9F0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C41538A1857963AE_METHOD_2_05763E3FFDACF4AC_OFFSET UNITYSDK_OFFSET(0x13897160)
#define CLASS_2_C41538A1857963AE_METHOD_2_321F879132BB17D2_OFFSET UNITYSDK_OFFSET(0x13896F00)
#define CLASS_2_C41538A1857963AE_METHOD_2_4819D114EE626067_OFFSET UNITYSDK_OFFSET(0x13897080)
#define CLASS_2_C41538A1857963AE_METHOD_2_B499521A6EA8B3EB_OFFSET UNITYSDK_OFFSET(0x13896D00)
#define CLASS_2_C41538A1857963AE_METHOD_2_C43864160C6A6445_OFFSET UNITYSDK_OFFSET(0x13896E70)
#define CLASS_2_C41538A1857963AE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13896AB0)
#define CLASS_2_C41538A1857963AE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13896CA0)
#define CLASS_2_C41538A1857963AE__CTOR_OFFSET UNITYSDK_OFFSET(0x13897370)
#define CLASS_2_C41538A1857963AE___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13897380)
#define CLASS_2_C41538A1857963AE___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13897390)

inline static constexpr unsigned int Class_2_C41538A1857963AE_TypeDefinitionIndex = 45224;

class Class_2_C41538A1857963AE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_C41538A1857963AE_Class_1_0C8B36188557F9F0*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_C43864160C6A6445(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_METHOD_2_C43864160C6A6445_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B499521A6EA8B3EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_METHOD_2_B499521A6EA8B3EB_OFFSET))(this);
	}

	::System::Void Method_2_321F879132BB17D2(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_METHOD_2_321F879132BB17D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_05763E3FFDACF4AC(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_METHOD_2_05763E3FFDACF4AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4819D114EE626067(::Class_2_C41538A1857963AE_Class_1_0C8B36188557F9F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C41538A1857963AE_Class_1_0C8B36188557F9F0*))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE_METHOD_2_4819D114EE626067_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_C41538A1857963AE___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
