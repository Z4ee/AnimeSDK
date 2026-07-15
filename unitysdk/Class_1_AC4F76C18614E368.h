#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_950;
namespace RPG::GameCore { class TextJoinConfigRow; }

#define CLASS_1_AC4F76C18614E368_METHOD_1_D1BB9E550E1FCC5F_OFFSET UNITYSDK_OFFSET(0x1647D810)
#define CLASS_1_AC4F76C18614E368__CTOR_OFFSET UNITYSDK_OFFSET(0x1647D8F0)

inline static constexpr unsigned int Class_1_AC4F76C18614E368_TypeDefinitionIndex = 70987;

class Class_1_AC4F76C18614E368 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC4F76C18614E368__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_950* Method_1_D1BB9E550E1FCC5F(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_950*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_AC4F76C18614E368_METHOD_1_D1BB9E550E1FCC5F_OFFSET))(a1);
	}
};
