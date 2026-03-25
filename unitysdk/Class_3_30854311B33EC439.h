#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_30854311B33EC439_METHOD_3_59E52142EB73E32E_OFFSET UNITYSDK_OFFSET(0x16C6F5F0)
#define CLASS_3_30854311B33EC439_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x16C6F670)
#define CLASS_3_30854311B33EC439__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6F640)

inline static constexpr unsigned int Class_3_30854311B33EC439_TypeDefinitionIndex = 19680;

class Class_3_30854311B33EC439 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30854311B33EC439__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59E52142EB73E32E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30854311B33EC439*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30854311B33EC439*&))((::PBYTE)hIl2Cpp + CLASS_3_30854311B33EC439_METHOD_3_59E52142EB73E32E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_30854311B33EC439* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_30854311B33EC439*))((::PBYTE)hIl2Cpp + CLASS_3_30854311B33EC439_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
