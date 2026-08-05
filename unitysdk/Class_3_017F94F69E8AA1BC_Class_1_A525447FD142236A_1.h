#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_017F94F69E8AA1BC_CLASS_1_A525447FD142236A_1_METHOD_1_30B6D5A2AA34FD1E_OFFSET UNITYSDK_OFFSET(0x156E7280)
#define CLASS_3_017F94F69E8AA1BC_CLASS_1_A525447FD142236A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156E7270)

inline static constexpr unsigned int Class_3_017F94F69E8AA1BC_Class_1_A525447FD142236A_1_TypeDefinitionIndex = 72384;

class Class_3_017F94F69E8AA1BC_Class_1_A525447FD142236A_1 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_CLASS_1_A525447FD142236A_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30B6D5A2AA34FD1E(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_017F94F69E8AA1BC_CLASS_1_A525447FD142236A_1_METHOD_1_30B6D5A2AA34FD1E_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
