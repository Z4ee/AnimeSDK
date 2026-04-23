#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AA173774870F4402_LOCK_OFFSET UNITYSDK_OFFSET(0x1289C7F0)
#define CLASS_2_AA173774870F4402_METHOD_2_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x1289C840)
#define CLASS_2_AA173774870F4402_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1289CA10)
#define CLASS_2_AA173774870F4402__CTOR_OFFSET UNITYSDK_OFFSET(0x1289C7E0)
#define CLASS_2_AA173774870F4402___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x1289CA60)
#define CLASS_2_AA173774870F4402___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1289CAD0)

inline static constexpr unsigned int Class_2_AA173774870F4402_TypeDefinitionIndex = 68999;

class Class_2_AA173774870F4402 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402_METHOD_2_60451B2DE9D371C9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AA173774870F4402___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
