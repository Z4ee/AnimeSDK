#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_340;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_79B2C08CB904DE40_LOCK_OFFSET UNITYSDK_OFFSET(0x17873C10)
#define CLASS_2_79B2C08CB904DE40_UNLOCK_OFFSET UNITYSDK_OFFSET(0x17873CD0)
#define CLASS_2_79B2C08CB904DE40__CTOR_OFFSET UNITYSDK_OFFSET(0x17873C00)

inline static constexpr unsigned int Class_2_79B2C08CB904DE40_TypeDefinitionIndex = 71345;

class Class_2_79B2C08CB904DE40 : public ::RPG::Client::GamePlayLockTargetFunc
{
public:
	::System::Nullable_1<::System::UInt32> Field_2_0; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*))((::PBYTE)hIl2Cpp + CLASS_2_79B2C08CB904DE40__CTOR_OFFSET))(this, a1);
	}

	::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_79B2C08CB904DE40_LOCK_OFFSET))(this, a1);
	}

	::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_79B2C08CB904DE40_UNLOCK_OFFSET))(this, a1);
	}
};
