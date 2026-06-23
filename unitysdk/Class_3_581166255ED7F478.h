#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_3_581166255ED7F478_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x105B7000)
#define CLASS_3_581166255ED7F478_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x105B70E0)
#define CLASS_3_581166255ED7F478_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x105B7170)
#define CLASS_3_581166255ED7F478_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x105B6FB0)
#define CLASS_3_581166255ED7F478__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B7050)
#define CLASS_3_581166255ED7F478__CTOR_OFFSET UNITYSDK_OFFSET(0x105B70D0)

inline static constexpr unsigned int Class_3_581166255ED7F478_TypeDefinitionIndex = 44517;

class Class_3_581166255ED7F478 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x8C; // 0x0
	::System::Nullable_1<::System::Single> Field_3_1; // 0x48
	::System::Nullable_1<::System::Single> Field_3_0; // 0x50
	::System::Boolean Field_3_4; // 0x58
	::System::Boolean Field_3_2; // 0x59
	::System::Boolean Field_3_3; // 0x5A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_581166255ED7F478* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_581166255ED7F478*(*)())((::PBYTE)hIl2Cpp + CLASS_3_581166255ED7F478_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
