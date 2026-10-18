#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_44340B2393166A74_1_GET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x159942A0)
#define CLASS_1_44340B2393166A74_1_GET_GAINDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994280)
#define CLASS_1_44340B2393166A74_1_GET_LASTDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x15994260)
#define CLASS_1_44340B2393166A74_1_GET_LASTTOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994240)
#define CLASS_1_44340B2393166A74_1_METHOD_1_E6B40525CA50232B_OFFSET UNITYSDK_OFFSET(0x159942C0)
#define CLASS_1_44340B2393166A74_1_SET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x159942B0)
#define CLASS_1_44340B2393166A74_1_SET_GAINDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994290)
#define CLASS_1_44340B2393166A74_1_SET_LASTDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x15994270)
#define CLASS_1_44340B2393166A74_1_SET_LASTTOTALDESIGNEXP_OFFSET UNITYSDK_OFFSET(0x15994250)
#define CLASS_1_44340B2393166A74_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15994350)

inline static constexpr unsigned int Class_1_44340B2393166A74_1_TypeDefinitionIndex = 80183;

class Class_1_44340B2393166A74_1 : public ::System::Object
{
public:
	::System::UInt32 _LastTotalDesignExp_k__BackingField; // 0x10
	::System::UInt32 _GainDesignExp_k__BackingField; // 0x14
	::System::UInt32 _LastDesignLevel_k__BackingField; // 0x18
	::System::UInt32 _CurDesignLevel_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_LastTotalDesignExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_GET_LASTTOTALDESIGNEXP_OFFSET))(this);
	}

	::System::Void set_LastTotalDesignExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_SET_LASTTOTALDESIGNEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastDesignLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_GET_LASTDESIGNLEVEL_OFFSET))(this);
	}

	::System::Void set_LastDesignLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_SET_LASTDESIGNLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_GainDesignExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_GET_GAINDESIGNEXP_OFFSET))(this);
	}

	::System::Void set_GainDesignExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_SET_GAINDESIGNEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurDesignLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_GET_CURDESIGNLEVEL_OFFSET))(this);
	}

	::System::Void set_CurDesignLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_SET_CURDESIGNLEVEL_OFFSET))(this, a1);
	}

	static ::Class_1_44340B2393166A74_1* Method_1_E6B40525CA50232B(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::Class_1_44340B2393166A74_1*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44340B2393166A74_1_METHOD_1_E6B40525CA50232B_OFFSET))(a1, a2, a3, a4);
	}
};
