#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_985CFBC4EEA564F8_LOCK_OFFSET UNITYSDK_OFFSET(0xC073A20)
#define CLASS_2_985CFBC4EEA564F8_METHOD_2_82F59E480EEE2029_OFFSET UNITYSDK_OFFSET(0xC073C60)
#define CLASS_2_985CFBC4EEA564F8_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0xC073C20)
#define CLASS_2_985CFBC4EEA564F8_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC073B20)
#define CLASS_2_985CFBC4EEA564F8__CTOR_OFFSET UNITYSDK_OFFSET(0xC073A10)

inline static constexpr unsigned int Class_2_985CFBC4EEA564F8_TypeDefinitionIndex = 74633;

class Class_2_985CFBC4EEA564F8 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_985CFBC4EEA564F8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_985CFBC4EEA564F8_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_985CFBC4EEA564F8_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void RefreshLock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985CFBC4EEA564F8_REFRESHLOCK_OFFSET))(this);
	}

	::RPG::Client::GamePlayLockTarget Method_2_82F59E480EEE2029()
	{
		return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_985CFBC4EEA564F8_METHOD_2_82F59E480EEE2029_OFFSET))(this);
	}
};
