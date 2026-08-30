#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7AA0663B46C8586F_7_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1DC60F90)
#define CLASS_3_7AA0663B46C8586F_7_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1DC60FD0)
#define CLASS_3_7AA0663B46C8586F_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC60FC0)

inline static constexpr unsigned int Class_3_7AA0663B46C8586F_7_TypeDefinitionIndex = 19707;

class Class_3_7AA0663B46C8586F_7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 AAGKEBFHLMC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F_7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7AA0663B46C8586F_7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7AA0663B46C8586F_7*&))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F_7_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7AA0663B46C8586F_7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7AA0663B46C8586F_7*))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F_7_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
