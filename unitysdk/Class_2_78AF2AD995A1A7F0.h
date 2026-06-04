#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_78AF2AD995A1A7F0_METHOD_2_913C7B08CEFD2BB7_OFFSET UNITYSDK_OFFSET(0x19D74DD0)
#define CLASS_2_78AF2AD995A1A7F0_METHOD_2_95BA474848C12124_OFFSET UNITYSDK_OFFSET(0x19D75040)
#define CLASS_2_78AF2AD995A1A7F0__CTOR_OFFSET UNITYSDK_OFFSET(0x19D55C80)

inline static constexpr unsigned int Class_2_78AF2AD995A1A7F0_TypeDefinitionIndex = 22063;

class Class_2_78AF2AD995A1A7F0 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78AF2AD995A1A7F0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_913C7B08CEFD2BB7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_78AF2AD995A1A7F0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_78AF2AD995A1A7F0*&))((::PBYTE)hIl2Cpp + CLASS_2_78AF2AD995A1A7F0_METHOD_2_913C7B08CEFD2BB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_95BA474848C12124(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_78AF2AD995A1A7F0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_78AF2AD995A1A7F0*))((::PBYTE)hIl2Cpp + CLASS_2_78AF2AD995A1A7F0_METHOD_2_95BA474848C12124_OFFSET))(a1, a2);
	}
};
