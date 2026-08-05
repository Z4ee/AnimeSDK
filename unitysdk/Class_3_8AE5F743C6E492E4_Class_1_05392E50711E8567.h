#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_8AE5F743C6E492E4_CLASS_1_05392E50711E8567_METHOD_1_1C80C09E4324B44B_OFFSET UNITYSDK_OFFSET(0x139256F0)
#define CLASS_3_8AE5F743C6E492E4_CLASS_1_05392E50711E8567__CTOR_OFFSET UNITYSDK_OFFSET(0x139256E0)

inline static constexpr unsigned int Class_3_8AE5F743C6E492E4_Class_1_05392E50711E8567_TypeDefinitionIndex = 82161;

class Class_3_8AE5F743C6E492E4_Class_1_05392E50711E8567 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_05392E50711E8567__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C80C09E4324B44B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8AE5F743C6E492E4_CLASS_1_05392E50711E8567_METHOD_1_1C80C09E4324B44B_OFFSET))(this, a1);
	}
};
