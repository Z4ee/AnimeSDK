#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_340;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B74C2B59AFE0700_LOCK_OFFSET UNITYSDK_OFFSET(0x16F3E6F0)
#define CLASS_2_4B74C2B59AFE0700_METHOD_2_B53EC42A1BFA44C9_OFFSET UNITYSDK_OFFSET(0x16F3E7A0)
#define CLASS_2_4B74C2B59AFE0700_UNLOCK_OFFSET UNITYSDK_OFFSET(0x16F3E840)
#define CLASS_2_4B74C2B59AFE0700__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3E6E0)

inline static constexpr unsigned int Class_2_4B74C2B59AFE0700_TypeDefinitionIndex = 71333;

class Class_2_4B74C2B59AFE0700 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3F8; // 0x0

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B53EC42A1BFA44C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_METHOD_2_B53EC42A1BFA44C9_OFFSET))(this, a1);
	}
};
