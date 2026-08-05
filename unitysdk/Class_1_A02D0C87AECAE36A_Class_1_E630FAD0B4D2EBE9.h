#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWorldBaseController; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_A02D0C87AECAE36A_CLASS_1_E630FAD0B4D2EBE9_METHOD_1_9DF9DF54143EF2BE_OFFSET UNITYSDK_OFFSET(0x17153630)
#define CLASS_1_A02D0C87AECAE36A_CLASS_1_E630FAD0B4D2EBE9__CTOR_OFFSET UNITYSDK_OFFSET(0x17153620)

inline static constexpr unsigned int Class_1_A02D0C87AECAE36A_Class_1_E630FAD0B4D2EBE9_TypeDefinitionIndex = 60438;

class Class_1_A02D0C87AECAE36A_Class_1_E630FAD0B4D2EBE9 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02D0C87AECAE36A_CLASS_1_E630FAD0B4D2EBE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DF9DF54143EF2BE(::System::Boolean a1, ::MoleMole::UIWorldBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIWorldBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A02D0C87AECAE36A_CLASS_1_E630FAD0B4D2EBE9_METHOD_1_9DF9DF54143EF2BE_OFFSET))(this, a1, a2);
	}
};
