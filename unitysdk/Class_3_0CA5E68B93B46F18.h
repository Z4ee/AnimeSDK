#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_0CA5E68B93B46F18_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1B41AAE0)
#define CLASS_3_0CA5E68B93B46F18_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1B41AB20)
#define CLASS_3_0CA5E68B93B46F18__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41AB10)

inline static constexpr unsigned int Class_3_0CA5E68B93B46F18_TypeDefinitionIndex = 20268;

class Class_3_0CA5E68B93B46F18 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicString* Field_3_1; // 0x20

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
