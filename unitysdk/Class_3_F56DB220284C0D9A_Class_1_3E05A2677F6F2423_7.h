#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_F56DB220284C0D9A_CLASS_1_3E05A2677F6F2423_7__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE4770)

inline static constexpr unsigned int Class_3_F56DB220284C0D9A_Class_1_3E05A2677F6F2423_7_TypeDefinitionIndex = 74413;

class Class_3_F56DB220284C0D9A_Class_1_3E05A2677F6F2423_7 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F56DB220284C0D9A_CLASS_1_3E05A2677F6F2423_7__CTOR_OFFSET))(this);
	}
};
