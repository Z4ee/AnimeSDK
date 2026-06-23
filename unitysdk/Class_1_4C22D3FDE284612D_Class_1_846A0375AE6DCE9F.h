#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F_METHOD_1_DA0F52F9DDC16985_OFFSET UNITYSDK_OFFSET(0x15CFC720)
#define CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F_METHOD_1_E580FB8A7DB7EB67_OFFSET UNITYSDK_OFFSET(0x15CFCDF0)
#define CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFCDE0)

inline static constexpr unsigned int Class_1_4C22D3FDE284612D_Class_1_846A0375AE6DCE9F_TypeDefinitionIndex = 48028;

class Class_1_4C22D3FDE284612D_Class_1_846A0375AE6DCE9F : public ::System::Object
{
public:
	::MoleMole::MonoEntityModelModifier* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_DA0F52F9DDC16985(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::MoleMole::MonoEntityModelModifier* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F_METHOD_1_DA0F52F9DDC16985_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_E580FB8A7DB7EB67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4C22D3FDE284612D_CLASS_1_846A0375AE6DCE9F_METHOD_1_E580FB8A7DB7EB67_OFFSET))(this, a1);
	}
};
