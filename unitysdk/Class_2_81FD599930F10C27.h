#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_81FD599930F10C27_LOCK_OFFSET UNITYSDK_OFFSET(0x11C06CD0)
#define CLASS_2_81FD599930F10C27_METHOD_2_00A91948BD71EE07_OFFSET UNITYSDK_OFFSET(0x11C06D20)
#define CLASS_2_81FD599930F10C27_UNLOCK_OFFSET UNITYSDK_OFFSET(0x11C06F10)
#define CLASS_2_81FD599930F10C27__CTOR_OFFSET UNITYSDK_OFFSET(0x11C06CC0)
#define CLASS_2_81FD599930F10C27___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x11C06F60)
#define CLASS_2_81FD599930F10C27___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x11C06FD0)

inline static constexpr unsigned int Class_2_81FD599930F10C27_TypeDefinitionIndex = 68990;

class Class_2_81FD599930F10C27 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A91948BD71EE07(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27_METHOD_2_00A91948BD71EE07_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_81FD599930F10C27___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
