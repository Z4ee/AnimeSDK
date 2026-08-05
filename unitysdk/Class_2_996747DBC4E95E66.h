#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8300C0E13E94E2DB.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_2_996747DBC4E95E66_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1477CC30)
#define CLASS_2_996747DBC4E95E66_METHOD_2_4CB7528418C085FD_OFFSET UNITYSDK_OFFSET(0x1477CD50)
#define CLASS_2_996747DBC4E95E66_METHOD_2_999A48C00A02E786_OFFSET UNITYSDK_OFFSET(0x1477C510)
#define CLASS_2_996747DBC4E95E66_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1477CCC0)
#define CLASS_2_996747DBC4E95E66_METHOD_2_F9989A818F1DF6EA_OFFSET UNITYSDK_OFFSET(0x1477C950)
#define CLASS_2_996747DBC4E95E66__CTOR_OFFSET UNITYSDK_OFFSET(0x1477CCB0)

inline static constexpr unsigned int Class_2_996747DBC4E95E66_TypeDefinitionIndex = 49572;

class Class_2_996747DBC4E95E66 : public ::Class_1_8300C0E13E94E2DB
{
public:
	::MoleMole::Config::EntityType Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_999A48C00A02E786()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66_METHOD_2_999A48C00A02E786_OFFSET))(this);
	}

	::System::Boolean Method_2_F9989A818F1DF6EA(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66_METHOD_2_F9989A818F1DF6EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_4CB7528418C085FD(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_996747DBC4E95E66_METHOD_2_4CB7528418C085FD_OFFSET))(this, a1);
	}
};
