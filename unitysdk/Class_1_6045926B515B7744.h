#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1327;
class Class_1_F512C5C8F4EF9039;

#define CLASS_1_6045926B515B7744_CLONE_OFFSET UNITYSDK_OFFSET(0x1528F1B0)
#define CLASS_1_6045926B515B7744_FLUSH_OFFSET UNITYSDK_OFFSET(0x1528F210)
#define CLASS_1_6045926B515B7744_METHOD_1_3CE96D03A64A0D25_OFFSET UNITYSDK_OFFSET(0x1528F300)
#define CLASS_1_6045926B515B7744__CTOR_OFFSET UNITYSDK_OFFSET(0x1528F200)

inline static constexpr unsigned int Class_1_6045926B515B7744_TypeDefinitionIndex = 78688;

class Class_1_6045926B515B7744 : public ::System::Object
{
public:
	::System::Boolean IJCDEINGADN; // 0x10
	::RPG::GameCore::RedDotType MOOODBAJBJG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6045926B515B7744__CTOR_OFFSET))(this);
	}

	::Class_1_6045926B515B7744* Clone()
	{
		return ((::Class_1_6045926B515B7744*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6045926B515B7744_CLONE_OFFSET))(this);
	}

	::System::Void Flush(::Class_0_16E4307DCC419505_1327* a1, ::Class_1_F512C5C8F4EF9039* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1327*, ::Class_1_F512C5C8F4EF9039*))((::PBYTE)hIl2Cpp + CLASS_1_6045926B515B7744_FLUSH_OFFSET))(this, a1, a2);
	}

	static ::RPG::GameCore::RedDotType Method_1_3CE96D03A64A0D25(::Class_0_16E4307DCC419505_1327* a1, ::Class_1_F512C5C8F4EF9039* a2)
	{
		return ((::RPG::GameCore::RedDotType(*)(::Class_0_16E4307DCC419505_1327*, ::Class_1_F512C5C8F4EF9039*))((::PBYTE)hIl2Cpp + CLASS_1_6045926B515B7744_METHOD_1_3CE96D03A64A0D25_OFFSET))(a1, a2);
	}
};
