#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"

class Class_0_16E4307DCC419505_303;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B74C2B59AFE0700_LOCK_OFFSET UNITYSDK_OFFSET(0x1178B270)
#define CLASS_2_4B74C2B59AFE0700_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1178B320)
#define CLASS_2_4B74C2B59AFE0700_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1178B3C0)
#define CLASS_2_4B74C2B59AFE0700__CTOR_OFFSET UNITYSDK_OFFSET(0x1178B260)
#define CLASS_2_4B74C2B59AFE0700___IFIXBASEPROXY_LOCK_OFFSET UNITYSDK_OFFSET(0x1178B470)
#define CLASS_2_4B74C2B59AFE0700___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1178B4E0)

inline static constexpr unsigned int Class_2_4B74C2B59AFE0700_TypeDefinitionIndex = 68998;

class Class_2_4B74C2B59AFE0700 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	// static const ::System::Int32 Field_2_0 = 0x3F8; // 0x0

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_UNLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Lock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700___IFIXBASEPROXY_LOCK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Unlock(::Il2CppArray<::System::Object*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B74C2B59AFE0700___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
	}
};
