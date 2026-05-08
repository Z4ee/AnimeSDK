#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CustomSkin_OverseaNewDeviceEmailVerify;

#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x131A27B0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x131A2A00)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x131A2A60)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x131A2A10)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x131A27A0)
#define CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x131A2790)

inline static constexpr unsigned int CustomSkin_OverseaNewDeviceEmailVerify__CountDown_d__16_TypeDefinitionIndex = 56983;

class CustomSkin_OverseaNewDeviceEmailVerify__CountDown_d__16 : public ::System::Object
{
public:
	::System::Object* __2__current; // 0x10
	::CustomSkin_OverseaNewDeviceEmailVerify* __4__this; // 0x18
	::System::Single _startTime_5__2; // 0x20
	::System::Int32 __1__state; // 0x24
	::System::Single time; // 0x28

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_OVERSEANEWDEVICEEMAILVERIFY__COUNTDOWN_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
