#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_0CA5E68B93B46F18_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CCA0950)
#define CLASS_3_0CA5E68B93B46F18_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CCA0990)
#define CLASS_3_0CA5E68B93B46F18__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA0980)

inline static constexpr unsigned int Class_3_0CA5E68B93B46F18_TypeDefinitionIndex = 20818;

class Class_3_0CA5E68B93B46F18 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* NCMKOFAAAOI; // 0x18
	::System::String* AFHDFCPCKGF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CA5E68B93B46F18__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0CA5E68B93B46F18*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0CA5E68B93B46F18*&))((::PBYTE)hIl2Cpp + CLASS_3_0CA5E68B93B46F18_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0CA5E68B93B46F18* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0CA5E68B93B46F18*))((::PBYTE)hIl2Cpp + CLASS_3_0CA5E68B93B46F18_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
