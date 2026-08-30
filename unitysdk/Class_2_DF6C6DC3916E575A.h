#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_359;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DF6C6DC3916E575A_LOCK_OFFSET UNITYSDK_OFFSET(0xBBA9D40)
#define CLASS_2_DF6C6DC3916E575A_METHOD_2_BCA553D994B8AFD2_OFFSET UNITYSDK_OFFSET(0xBBAA690)
#define CLASS_2_DF6C6DC3916E575A_METHOD_2_C16D0C8F2A0C1738_OFFSET UNITYSDK_OFFSET(0xBBAA180)
#define CLASS_2_DF6C6DC3916E575A_UNLOCK_OFFSET UNITYSDK_OFFSET(0xBBAA260)
#define CLASS_2_DF6C6DC3916E575A__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA9D30)

inline static constexpr unsigned int Class_2_DF6C6DC3916E575A_TypeDefinitionIndex = 74627;

class Class_2_DF6C6DC3916E575A : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_359*>*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6DC3916E575A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6DC3916E575A_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6DC3916E575A_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCA553D994B8AFD2(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6DC3916E575A_METHOD_2_BCA553D994B8AFD2_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_C16D0C8F2A0C1738(::RPG::GameCore::GameWorld* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6DC3916E575A_METHOD_2_C16D0C8F2A0C1738_OFFSET))(a1, a2);
	}
};
