#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_1798E0D824491486;
class Class_1_D7003CCDED916330;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_529B81A5018A5315_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118783B0)
#define CLASS_1_529B81A5018A5315_METHOD_1_626FA747F65C14DA_OFFSET UNITYSDK_OFFSET(0x11878C10)
#define CLASS_1_529B81A5018A5315_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x11878400)
#define CLASS_1_529B81A5018A5315_METHOD_1_C6568BC13CB65242_OFFSET UNITYSDK_OFFSET(0x11878E10)
#define CLASS_1_529B81A5018A5315_METHOD_1_E393EF7F2B49D1DC_OFFSET UNITYSDK_OFFSET(0x11878590)
#define CLASS_1_529B81A5018A5315__CTOR_OFFSET UNITYSDK_OFFSET(0x11879350)

inline static constexpr unsigned int Class_1_529B81A5018A5315_TypeDefinitionIndex = 46113;

class Class_1_529B81A5018A5315 : public ::System::Object
{
public:
	::Class_1_D7003CCDED916330* Field_1_2; // 0x10
	::RPG::GameCore::TaskContext* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*>* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1798E0D824491486*>* Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E393EF7F2B49D1DC(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo& a2, ::System::Int32 a3, ::UnityEngine::AnimatorStateInfo& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo&, ::System::Int32, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315_METHOD_1_E393EF7F2B49D1DC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C6568BC13CB65242(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315_METHOD_1_C6568BC13CB65242_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_626FA747F65C14DA(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315_METHOD_1_626FA747F65C14DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_529B81A5018A5315_METHOD_1_659B881A8763C779_OFFSET))(this);
	}
};
