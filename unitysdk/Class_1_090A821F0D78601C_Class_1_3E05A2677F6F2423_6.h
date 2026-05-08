#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_090A821F0D78601C_CLASS_1_3E05A2677F6F2423_6_METHOD_1_9628854EA3CF3417_OFFSET UNITYSDK_OFFSET(0x138FC410)
#define CLASS_1_090A821F0D78601C_CLASS_1_3E05A2677F6F2423_6__CTOR_OFFSET UNITYSDK_OFFSET(0x138FC400)

inline static constexpr unsigned int Class_1_090A821F0D78601C_Class_1_3E05A2677F6F2423_6_TypeDefinitionIndex = 70807;

class Class_1_090A821F0D78601C_Class_1_3E05A2677F6F2423_6 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090A821F0D78601C_CLASS_1_3E05A2677F6F2423_6__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_9628854EA3CF3417()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090A821F0D78601C_CLASS_1_3E05A2677F6F2423_6_METHOD_1_9628854EA3CF3417_OFFSET))(this);
	}
};
