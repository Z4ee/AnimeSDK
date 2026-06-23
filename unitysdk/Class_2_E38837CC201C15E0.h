#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0F4C078E2549C40.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_5FA9CCDDD9957726;

#define CLASS_2_E38837CC201C15E0_METHOD_2_170382EE81B6126F_OFFSET UNITYSDK_OFFSET(0x1A16A5B0)
#define CLASS_2_E38837CC201C15E0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A16AC80)
#define CLASS_2_E38837CC201C15E0_METHOD_2_4CB7528418C085FD_OFFSET UNITYSDK_OFFSET(0x1A16AD10)
#define CLASS_2_E38837CC201C15E0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A16ADB0)
#define CLASS_2_E38837CC201C15E0_METHOD_2_F9989A818F1DF6EA_OFFSET UNITYSDK_OFFSET(0x1A16A9A0)
#define CLASS_2_E38837CC201C15E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16AD00)

inline static constexpr unsigned int Class_2_E38837CC201C15E0_TypeDefinitionIndex = 64047;

class Class_2_E38837CC201C15E0 : public ::Class_1_E0F4C078E2549C40
{
public:
	::Class_1_5FA9CCDDD9957726* Field_2_1; // 0x20
	::MoleMole::Config::EntityType Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_2_170382EE81B6126F()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0_METHOD_2_170382EE81B6126F_OFFSET))(this);
	}

	::System::Boolean Method_2_F9989A818F1DF6EA(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0_METHOD_2_F9989A818F1DF6EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_4CB7528418C085FD(::System::Single& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0_METHOD_2_4CB7528418C085FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E38837CC201C15E0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
