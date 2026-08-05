#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_E55083B5F2557569_CLASS_1_3E05A2677F6F2423_METHOD_1_9628854EA3CF3417_OFFSET UNITYSDK_OFFSET(0x1C3DF510)
#define CLASS_1_E55083B5F2557569_CLASS_1_3E05A2677F6F2423__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DF500)

inline static constexpr unsigned int Class_1_E55083B5F2557569_Class_1_3E05A2677F6F2423_TypeDefinitionIndex = 45362;

class Class_1_E55083B5F2557569_Class_1_3E05A2677F6F2423 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E55083B5F2557569_CLASS_1_3E05A2677F6F2423__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_9628854EA3CF3417()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E55083B5F2557569_CLASS_1_3E05A2677F6F2423_METHOD_1_9628854EA3CF3417_OFFSET))(this);
	}
};
