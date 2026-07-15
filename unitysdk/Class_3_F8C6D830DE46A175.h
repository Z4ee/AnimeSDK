#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_F8C6D830DE46A175_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1B14FBD0)
#define CLASS_3_F8C6D830DE46A175_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1B14FC10)
#define CLASS_3_F8C6D830DE46A175__CTOR_OFFSET UNITYSDK_OFFSET(0x1B14FC00)

inline static constexpr unsigned int Class_3_F8C6D830DE46A175_TypeDefinitionIndex = 20204;

class Class_3_F8C6D830DE46A175 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8C6D830DE46A175__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F8C6D830DE46A175*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F8C6D830DE46A175*&))((::PBYTE)hIl2Cpp + CLASS_3_F8C6D830DE46A175_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F8C6D830DE46A175* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F8C6D830DE46A175*))((::PBYTE)hIl2Cpp + CLASS_3_F8C6D830DE46A175_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
