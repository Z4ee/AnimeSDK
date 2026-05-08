#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTowerHolderObject; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_EDFDA9F3ED57727E_METHOD_1_6E69EC1A97DD1EF4_OFFSET UNITYSDK_OFFSET(0xCE2AA60)
#define CLASS_3_C2B262BAEE4F4CD0_CLASS_1_EDFDA9F3ED57727E__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2AA50)

inline static constexpr unsigned int Class_3_C2B262BAEE4F4CD0_Class_1_EDFDA9F3ED57727E_TypeDefinitionIndex = 79102;

class Class_3_C2B262BAEE4F4CD0_Class_1_EDFDA9F3ED57727E : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_EDFDA9F3ED57727E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E69EC1A97DD1EF4(::MoleMole::MonoTowerHolderObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + CLASS_3_C2B262BAEE4F4CD0_CLASS_1_EDFDA9F3ED57727E_METHOD_1_6E69EC1A97DD1EF4_OFFSET))(this, a1);
	}
};
