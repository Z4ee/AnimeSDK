#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_0555B6E37557E3D0_CLASS_1_3E05A2677F6F2423_3__CTOR_OFFSET UNITYSDK_OFFSET(0x143190E0)

inline static constexpr unsigned int Class_3_0555B6E37557E3D0_Class_1_3E05A2677F6F2423_3_TypeDefinitionIndex = 54596;

class Class_3_0555B6E37557E3D0_Class_1_3E05A2677F6F2423_3 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0555B6E37557E3D0_CLASS_1_3E05A2677F6F2423_3__CTOR_OFFSET))(this);
	}
};
