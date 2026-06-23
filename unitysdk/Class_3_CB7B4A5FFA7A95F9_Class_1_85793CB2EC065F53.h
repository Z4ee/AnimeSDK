#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_CB7B4A5FFA7A95F9_CLASS_1_85793CB2EC065F53_METHOD_1_78C082F46860C41E_OFFSET UNITYSDK_OFFSET(0x133C3390)
#define CLASS_3_CB7B4A5FFA7A95F9_CLASS_1_85793CB2EC065F53__CTOR_OFFSET UNITYSDK_OFFSET(0x133C3380)

inline static constexpr unsigned int Class_3_CB7B4A5FFA7A95F9_Class_1_85793CB2EC065F53_TypeDefinitionIndex = 73561;

class Class_3_CB7B4A5FFA7A95F9_Class_1_85793CB2EC065F53 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB7B4A5FFA7A95F9_CLASS_1_85793CB2EC065F53__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78C082F46860C41E(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CB7B4A5FFA7A95F9_CLASS_1_85793CB2EC065F53_METHOD_1_78C082F46860C41E_OFFSET))(this, a1, a2, a3, a4);
	}
};
