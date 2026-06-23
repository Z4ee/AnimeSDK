#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

#define CLASS_3_83F7FC580D54E526_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13AA06C0)
#define CLASS_3_83F7FC580D54E526_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13AA0820)
#define CLASS_3_83F7FC580D54E526_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13AA07A0)
#define CLASS_3_83F7FC580D54E526_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13AA0670)
#define CLASS_3_83F7FC580D54E526__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA0710)
#define CLASS_3_83F7FC580D54E526__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA0790)

inline static constexpr unsigned int Class_3_83F7FC580D54E526_TypeDefinitionIndex = 73327;

class Class_3_83F7FC580D54E526 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x4; // 0x0
	::System::UInt32 Field_3_0; // 0x48
	::System::UInt32 Field_3_1; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_83F7FC580D54E526* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_83F7FC580D54E526*(*)())((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83F7FC580D54E526_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
