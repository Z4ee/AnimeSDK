#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5E4C21FA3C948472_METHOD_1_30F6019144AAF172_OFFSET UNITYSDK_OFFSET(0x13D24C30)
#define CLASS_1_5E4C21FA3C948472_METHOD_1_562B61AC6372877D_OFFSET UNITYSDK_OFFSET(0x13D24B10)
#define CLASS_1_5E4C21FA3C948472_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D24BE0)
#define CLASS_1_5E4C21FA3C948472_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x13D24B80)
#define CLASS_1_5E4C21FA3C948472__CTOR_OFFSET UNITYSDK_OFFSET(0x13D24B00)

inline static constexpr unsigned int Class_1_5E4C21FA3C948472_TypeDefinitionIndex = 78857;

class Class_1_5E4C21FA3C948472 : public ::System::Object
{
public:
	::System::UInt32 Field_1_6; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Int32 Field_1_7; // 0x18
	::MoleMole::Config::DamageElementType Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E4C21FA3C948472__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_562B61AC6372877D(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_5E4C21FA3C948472_METHOD_1_562B61AC6372877D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E4C21FA3C948472_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E4C21FA3C948472_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_30F6019144AAF172(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E4C21FA3C948472_METHOD_1_30F6019144AAF172_OFFSET))(this, a1, a2);
	}
};
