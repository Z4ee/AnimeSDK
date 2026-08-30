#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_81750C6406BA963D_METHOD_3_A9AB488E67782583_OFFSET UNITYSDK_OFFSET(0x1CCB6F20)
#define CLASS_3_81750C6406BA963D_METHOD_3_EC151C02985A7696_OFFSET UNITYSDK_OFFSET(0x1CCB6F60)
#define CLASS_3_81750C6406BA963D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB6F50)

inline static constexpr unsigned int Class_3_81750C6406BA963D_TypeDefinitionIndex = 21047;

class Class_3_81750C6406BA963D : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81750C6406BA963D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A9AB488E67782583(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_81750C6406BA963D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_81750C6406BA963D*&))((::PBYTE)hIl2Cpp + CLASS_3_81750C6406BA963D_METHOD_3_A9AB488E67782583_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC151C02985A7696(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_81750C6406BA963D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_81750C6406BA963D*))((::PBYTE)hIl2Cpp + CLASS_3_81750C6406BA963D_METHOD_3_EC151C02985A7696_OFFSET))(a1, a2);
	}
};
