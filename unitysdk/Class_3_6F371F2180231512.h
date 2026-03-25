#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_6F371F2180231512_METHOD_3_1C44531D4D8B5F81_OFFSET UNITYSDK_OFFSET(0x16DBB170)
#define CLASS_3_6F371F2180231512_METHOD_3_EC151C02985A7696_OFFSET UNITYSDK_OFFSET(0x16DBB1E0)
#define CLASS_3_6F371F2180231512__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBB1B0)

inline static constexpr unsigned int Class_3_6F371F2180231512_TypeDefinitionIndex = 19590;

class Class_3_6F371F2180231512 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F371F2180231512__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1C44531D4D8B5F81(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6F371F2180231512*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6F371F2180231512*&))((::PBYTE)hIl2Cpp + CLASS_3_6F371F2180231512_METHOD_3_1C44531D4D8B5F81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC151C02985A7696(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6F371F2180231512* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6F371F2180231512*))((::PBYTE)hIl2Cpp + CLASS_3_6F371F2180231512_METHOD_3_EC151C02985A7696_OFFSET))(a1, a2);
	}
};
