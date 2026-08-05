#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9_METHOD_1_55655AEFCF2F5EFF_OFFSET UNITYSDK_OFFSET(0x101A0B60)
#define CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9_METHOD_1_5A68ABE78025DF38_OFFSET UNITYSDK_OFFSET(0x101A0490)
#define CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9__CTOR_OFFSET UNITYSDK_OFFSET(0x101A0480)

inline static constexpr unsigned int Class_1_662DF9647012EC55_Class_1_1CE86F8FD5BCAFC9_TypeDefinitionIndex = 70137;

class Class_1_662DF9647012EC55_Class_1_1CE86F8FD5BCAFC9 : public ::System::Object
{
public:
	::MoleMole::MonoEntityModelModifier* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A68ABE78025DF38(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::MoleMole::MonoEntityModelModifier* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9_METHOD_1_5A68ABE78025DF38_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_55655AEFCF2F5EFF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_662DF9647012EC55_CLASS_1_1CE86F8FD5BCAFC9_METHOD_1_55655AEFCF2F5EFF_OFFSET))(this, a1);
	}
};
