#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class ColliderEventDispatcher; }

#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_56B275E95D37276D_METHOD_1_9EE676C90458A789_OFFSET UNITYSDK_OFFSET(0x123D59F0)
#define CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_56B275E95D37276D__CTOR_OFFSET UNITYSDK_OFFSET(0x123D59E0)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3_Class_1_56B275E95D37276D_TypeDefinitionIndex = 69898;

class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3_Class_1_56B275E95D37276D : public ::System::Object
{
public:
	::Enum_3_CE3B674D22BBFC73 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_56B275E95D37276D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9EE676C90458A789(::MoleMole::Battle::ColliderEventDispatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_CLASS_1_6CB027CB4EE890F3_CLASS_1_56B275E95D37276D_METHOD_1_9EE676C90458A789_OFFSET))(this, a1);
	}
};
