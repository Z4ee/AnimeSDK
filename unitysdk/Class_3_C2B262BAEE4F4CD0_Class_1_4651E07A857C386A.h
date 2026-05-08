#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTowerHolderObject; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_4651E07A857C386A_METHOD_1_F0C0FCDCE0A0802A_OFFSET UNITYSDK_OFFSET(0x1224EE10)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_4651E07A857C386A__CTOR_OFFSET UNITYSDK_OFFSET(0x122242A0)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_1_4651E07A857C386A_TypeDefinitionIndex = 79110;

class Class_3_C2B262BAEE4F4CD0_Class_1_4651E07A857C386A : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_4651E07A857C386A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F0C0FCDCE0A0802A(::MoleMole::MonoTowerHolderObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_4651E07A857C386A_METHOD_1_F0C0FCDCE0A0802A_OFFSET))(this, a1);
	}
};
