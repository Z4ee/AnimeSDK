#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_93DB885148852DA6_CLASS_1_E8D90052B5A0F133_1_METHOD_1_7B6F16BCBC763147_OFFSET UNITYSDK_OFFSET(0xF6148E0)
#define CLASS_1_93DB885148852DA6_CLASS_1_E8D90052B5A0F133_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF6148D0)

inline static constexpr unsigned int Class_1_93DB885148852DA6_Class_1_E8D90052B5A0F133_1_TypeDefinitionIndex = 53462;

class Class_1_93DB885148852DA6_Class_1_E8D90052B5A0F133_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_E8D90052B5A0F133_1__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle Method_1_7B6F16BCBC763147(::MoleMole::Battle::Entity* a1)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_E8D90052B5A0F133_1_METHOD_1_7B6F16BCBC763147_OFFSET))(this, a1);
	}
};
