#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_E5B3F53E2AEB0226_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x18DB2030)
#define CLASS_3_E5B3F53E2AEB0226_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x18DB20B0)
#define CLASS_3_E5B3F53E2AEB0226__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB2080)

inline static constexpr unsigned int Class_3_E5B3F53E2AEB0226_TypeDefinitionIndex = 20044;

class Class_3_E5B3F53E2AEB0226 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B3F53E2AEB0226__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E5B3F53E2AEB0226*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E5B3F53E2AEB0226*&))((::PBYTE)hIl2Cpp + CLASS_3_E5B3F53E2AEB0226_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E5B3F53E2AEB0226* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E5B3F53E2AEB0226*))((::PBYTE)hIl2Cpp + CLASS_3_E5B3F53E2AEB0226_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
