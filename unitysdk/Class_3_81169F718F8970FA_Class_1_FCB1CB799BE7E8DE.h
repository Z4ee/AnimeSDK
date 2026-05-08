#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_81169F718F8970FA_CLASS_1_FCB1CB799BE7E8DE_METHOD_1_62C7224EE5981F41_OFFSET UNITYSDK_OFFSET(0x18198E60)
#define CLASS_3_81169F718F8970FA_CLASS_1_FCB1CB799BE7E8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x18198E50)

inline static constexpr unsigned int Class_3_81169F718F8970FA_Class_1_FCB1CB799BE7E8DE_TypeDefinitionIndex = 50153;

class Class_3_81169F718F8970FA_Class_1_FCB1CB799BE7E8DE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CLASS_1_FCB1CB799BE7E8DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_62C7224EE5981F41(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CLASS_1_FCB1CB799BE7E8DE_METHOD_1_62C7224EE5981F41_OFFSET))(this, a1);
	}
};
