#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7AA0663B46C8586F_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CF82840)
#define CLASS_3_7AA0663B46C8586F_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CF82880)
#define CLASS_3_7AA0663B46C8586F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF82870)

inline static constexpr unsigned int Class_3_7AA0663B46C8586F_TypeDefinitionIndex = 10172;

class Class_3_7AA0663B46C8586F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 EKHAOIGPDOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7AA0663B46C8586F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7AA0663B46C8586F*&))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7AA0663B46C8586F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7AA0663B46C8586F*))((::PBYTE)hIl2Cpp + CLASS_3_7AA0663B46C8586F_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
