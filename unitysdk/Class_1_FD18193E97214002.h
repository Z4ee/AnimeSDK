#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_423;

#define CLASS_1_FD18193E97214002_FINISH_OFFSET UNITYSDK_OFFSET(0x11DC3AC0)
#define CLASS_1_FD18193E97214002_GETACTIONID_OFFSET UNITYSDK_OFFSET(0x11DC3A00)
#define CLASS_1_FD18193E97214002_GETISHANDLED_OFFSET UNITYSDK_OFFSET(0x11DC3A40)
#define CLASS_1_FD18193E97214002_GET_MAX_OFFSET UNITYSDK_OFFSET(0x11DC39B0)
#define CLASS_1_FD18193E97214002_GET_MIN_OFFSET UNITYSDK_OFFSET(0x11DC39D0)
#define CLASS_1_FD18193E97214002_METHOD_1_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x11DC3B00)
#define CLASS_1_FD18193E97214002_SET_MAX_OFFSET UNITYSDK_OFFSET(0x11DC39C0)
#define CLASS_1_FD18193E97214002_SET_MIN_OFFSET UNITYSDK_OFFSET(0x11DC39E0)
#define CLASS_1_FD18193E97214002_START_OFFSET UNITYSDK_OFFSET(0x11DC3A80)
#define CLASS_1_FD18193E97214002_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x11DC3C00)
#define CLASS_1_FD18193E97214002__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC39F0)

inline static constexpr unsigned int Class_1_FD18193E97214002_TypeDefinitionIndex = 60174;

class Class_1_FD18193E97214002 : public ::System::Object
{
public:
	::System::UInt32 _Min_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 _Max_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Max()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_GET_MAX_OFFSET))(this);
	}

	::System::Void set_Max(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_SET_MAX_OFFSET))(this, value);
	}

	::System::UInt32 get_Min()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_GET_MIN_OFFSET))(this);
	}

	::System::Void set_Min(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_SET_MIN_OFFSET))(this, value);
	}

	::System::UInt32 GetActionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_GETACTIONID_OFFSET))(this);
	}

	::System::Boolean GetIsHandled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_GETISHANDLED_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_START_OFFSET))(this);
	}

	::System::Void Finish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_FINISH_OFFSET))(this);
	}

	::System::Void Method_1_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_METHOD_1_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + CLASS_1_FD18193E97214002_SYNCHANDLERSP_OFFSET))(this, a1);
	}
};
