#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_D7003CCDED916330;
class Class_1_EF881A12952D8CEA;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CFAC95D8FB30DDF0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15278C20)
#define CLASS_1_CFAC95D8FB30DDF0_METHOD_1_22C0158FB807DDF4_OFFSET UNITYSDK_OFFSET(0x15278DA0)
#define CLASS_1_CFAC95D8FB30DDF0_METHOD_1_C9063D175A882741_OFFSET UNITYSDK_OFFSET(0x152796C0)
#define CLASS_1_CFAC95D8FB30DDF0_METHOD_1_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x15278C70)
#define CLASS_1_CFAC95D8FB30DDF0_METHOD_1_F1850BAC83E812F4_OFFSET UNITYSDK_OFFSET(0x15279460)
#define CLASS_1_CFAC95D8FB30DDF0__CTOR_OFFSET UNITYSDK_OFFSET(0x15279BE0)

inline static constexpr unsigned int Class_1_CFAC95D8FB30DDF0_TypeDefinitionIndex = 57420;

class Class_1_CFAC95D8FB30DDF0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*>* EPLPGIANPBB; // 0x10
	::Class_1_D7003CCDED916330* EOBLJJBOBIN; // 0x18
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x20
	::System::Collections::Generic::List_1<::Class_1_EF881A12952D8CEA*>* IPLCCFBICHO; // 0x28
	::System::Int32 PABLGDMPJGG; // 0x30
	::System::Int32 JJKHELILFJD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_22C0158FB807DDF4(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo& a2, ::System::Int32 a3, ::UnityEngine::AnimatorStateInfo& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo&, ::System::Int32, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0_METHOD_1_22C0158FB807DDF4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C9063D175A882741(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0_METHOD_1_C9063D175A882741_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1850BAC83E812F4(::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FreeStyleAnimGroupEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0_METHOD_1_F1850BAC83E812F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CFAC95D8FB30DDF0_METHOD_1_EC90937CEA9AFCA9_OFFSET))(this);
	}
};
