#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_BABB56BDDF4A061C_METHOD_2_2478A1DBFBC4AB6D_OFFSET UNITYSDK_OFFSET(0x179E07B0)
#define CLASS_2_BABB56BDDF4A061C_METHOD_2_3821EE6201CF74C2_OFFSET UNITYSDK_OFFSET(0x179E0920)
#define CLASS_2_BABB56BDDF4A061C_METHOD_2_4008403A081848FB_OFFSET UNITYSDK_OFFSET(0x179E0550)
#define CLASS_2_BABB56BDDF4A061C_METHOD_2_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x179E0AB0)
#define CLASS_2_BABB56BDDF4A061C_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x179DFE60)
#define CLASS_2_BABB56BDDF4A061C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179E09E0)
#define CLASS_2_BABB56BDDF4A061C__CTOR_OFFSET UNITYSDK_OFFSET(0x179E09D0)

inline static constexpr unsigned int Class_2_BABB56BDDF4A061C_TypeDefinitionIndex = 84615;

class Class_2_BABB56BDDF4A061C : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BABB56BDDF4A061C_TypeDefinitionIndex)->GetStaticField(0x42800);
	}
	static ::System::UInt64* StaticGet_Field_2_1()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BABB56BDDF4A061C_TypeDefinitionIndex)->GetStaticField(0x10240);
	}
	::UnityEngine::GameObject* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_2_3821EE6201CF74C2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C_METHOD_2_3821EE6201CF74C2_OFFSET))(a1);
	}

	::System::Boolean Method_2_4008403A081848FB(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C_METHOD_2_4008403A081848FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C_METHOD_2_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_2478A1DBFBC4AB6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BABB56BDDF4A061C_METHOD_2_2478A1DBFBC4AB6D_OFFSET))(a1);
	}
};
