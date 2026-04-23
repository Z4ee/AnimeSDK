#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class FuncUnlockUiData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2E09D9A7512E7C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD9DF7D0)
#define CLASS_1_E2E09D9A7512E7C9_METHOD_1_33C1DB4C8E5800FD_OFFSET UNITYSDK_OFFSET(0xD9DF250)
#define CLASS_1_E2E09D9A7512E7C9_METHOD_1_948786C8C6E4E49A_OFFSET UNITYSDK_OFFSET(0xD9DF550)
#define CLASS_1_E2E09D9A7512E7C9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD9DF0E0)
#define CLASS_1_E2E09D9A7512E7C9_METHOD_1_F9F86518B1656893_OFFSET UNITYSDK_OFFSET(0xD9DF0A0)
#define CLASS_1_E2E09D9A7512E7C9__CTOR_OFFSET UNITYSDK_OFFSET(0xD9DF150)

inline static constexpr unsigned int Class_1_E2E09D9A7512E7C9_TypeDefinitionIndex = 69385;

class Class_1_E2E09D9A7512E7C9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* Method_1_F9F86518B1656893()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9_METHOD_1_F9F86518B1656893_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_33C1DB4C8E5800FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9_METHOD_1_33C1DB4C8E5800FD_OFFSET))(this);
	}

	::System::Void Method_1_948786C8C6E4E49A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9_METHOD_1_948786C8C6E4E49A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2E09D9A7512E7C9_DISPOSE_OFFSET))(this);
	}
};
